set GITHUB_ROOT=..\..\github
set SNAPSHOT_LOCATION=%GITHUB_ROOT%\mvnrepo\snapshots
set RELEASE_LOCATION=%GITHUB_ROOT%\mvnrepo\releases
echo 
echo Deploying to local maven snapshot repository 
echo 
mvn -DaltDeploymentRepository=snapshot-repo::default::file:%SNAPSHOT_LOCATION% clean deploy
rem mvn -DaltDeploymentRepository=release-repo::default::file:%RELEASE_LOCATION% clean deploy
echo now use standard git tool to push to github
echo cd %SNAPSHOT_LOCATION%
echo git add *
echo git commit -m "scte65lib 0.0.1-SNAPSHOT"
echo git push origin master
