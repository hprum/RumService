You use the  RUM mobile solution to enable the  RUM Browser Probe to acquire mobile application data through mobile devices. 
This requires you to instrument the mobile apps. To instrument an iOS app, you must make changes to the project Xcode. 
The changes include adding a number of frameworks to the project, but no code changes are made.
------------------------------------
To Install the RUMService Framework:
------------------------------------
1.	Create a property list file called hprummonitor.plist with the following parameters:
  a.	cmUrl – The URL of the RUM Browser Probe to which monitored data is sent. For example: https://myCMProbe.com:2021/hpmobilemon/data.
  b.	appKey – The application key created by BSM (the key is generated when you create the application in BSM).
  (You can use the provided hprummonitor.plist template  and change the property values.)
2.	Add hprummonitor.plist to your bundle’s resources (in the same location as the Info.plist file of the bundle).
3.	Link your RUMService.framework to your application (In XCode, BuildPhases->Link Binary With Libraries, press “+”, select “other” and search for the framework location in your file system).
4.	Add the following, additional frameworks:
  a.	CoreGraphics
  b.	UIKit
  c.	SystemConfiguration
  d.	CoreTelephony
  (In XCode, BuildPhases->Link Binary With Libraries, press “+”, select the framework from the list).
5.	Add the flag –ObjC  to your targets BuildSettings->Other Linker Flags.
6.	To check that the installation is successful, run your application and ensure that you see the following message in your console log:
**************** RUMService <version> is Coming up in Release mode ****************
