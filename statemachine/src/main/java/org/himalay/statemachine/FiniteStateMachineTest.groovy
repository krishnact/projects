package org.himalay.statemachine

/**
 * GOAL: Try to create a DSL for a finite state machine.
 * Inspired by Chris vanBuskirk version on this site and the Ruby article at 
 *       http://www-128.ibm.com/developerworks/java/library/j-cb03137/index.html,
 */

class FiniteStateMachineTest extends GroovyTestCase
{
    void testNormalProcess()
    {
        def fsm = FiniteStateMachine.newInstance('submitted',this)

        def recorder = fsm.record()

        recorder.on('accept') {
            from('processing').to('accepted')
            from('nonprofit_reviewing').to('accepted')
        }

        recorder.on('receive').from('submitted').to('processing')

        recorder.on('send_for_review') {
            from('processing').to('nonprofit_reviewing')
            from('nonprofit_reviewing').to('processing')
            from('accepted').to('nonprofit_reviewing')
        }

        recorder.on('revise').from('accepted').to('processing')

        assert 'processing' == fsm.fire('receive')
        assert 'accepted' == fsm.fire('accept')
    }

    void testReset()
    {
        def fsm = FiniteStateMachine.newInstance('1',this)
        def recorder = fsm.record()
        recorder.on('a') {
            from('1').to('2')
            from('2').to('3')
        }

        assert '2' == fsm.fire('a')

        fsm.reset()

        assert '2' == fsm.fire('a')
    }
    
    void testNoTransitionForEvent()
    {
        def fsm = FiniteStateMachine.newInstance('1',this)
        def recorder = fsm.record()
        recorder.on('a').from('1').to('2')
        
        fsm.fire('a')

        shouldFail {
            fsm.fire('a')
        }
    }

    void testNoInitialState()
    {
        shouldFail {
            FiniteStateMachine.newInstance()
        }
    }

    void testInvalidInitialState()
    {
        def fsm = FiniteStateMachine.newInstance('INVALID',this)
        fsm.record().on('1').from('a').to('b')

        shouldFail {
            fsm.fire('1')
        }
    }

    void testNoStateForEvent()
    {
        def fsm = FiniteStateMachine.newInstance('a',this)
        fsm.record().on('1').from('a').to('b')
        fsm.record().on('2').from('X').to('Y')
        fsm.fire('1')

        shouldFail {
            fsm.fire('2')
        }
    }

    void testDupFromState()
    {
        def fsm = FiniteStateMachine.newInstance('a',this)
        def recorder = fsm.record()
        recorder.on('SAME').from('DUPLICATESTATE').to('a')

        shouldFail {
            recorder.on('SAME').from('DUPLICATESTATE').to('b')
        }
    }
    
    void testInvalidToState()
    {
        def fsm = FiniteStateMachine.newInstance('a',this)
        def recorder = fsm.record()

        shouldFail {
            recorder.on('1').from('DUPLICATESTATE').to(null)
        }
    }
    
    void testIncompleteTransition()
    {
        def fsm = FiniteStateMachine.newInstance('a',this)
        def recorder = fsm.record()

        shouldFail {
            recorder.on('1').to('a')
        }
    }
    
    void testIncompleteTransitionWithClosure()
    {
        def fsm = FiniteStateMachine.newInstance('a',this)
        def recorder = fsm.record()

        shouldFail {
            recorder.on('1') {
                to('a')
            }
        }
    }
}

