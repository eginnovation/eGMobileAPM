# eGMobileAPM

eGMobileAPM iOS SDK is a framework that allows you to monitor the performance and activities of an iOS application as it runs.

eGMobileAPM iOS SDK supports the both Objective-C and Swift language for iOS Applications. It collects the metrics from the application and send it to eG Agent. 

Mobile Agent involves gathering metrics and performance statistics about your application. This helps you identify bottlenecks and errors. 

Mobile Agent SDK track any application crashes that occur and Includes APIs to instrument specific methods in your project code, to measure durations of operations in your application.


## Requirements

- iOS 10.0+
- Xcode 11.0+
- Swift 5.0+


Installation
============

### CocoaPods

# Configure using swift


1)  In the Podfile for your project, add the following line:

pod 'eGMobileAPM', :git => "https://github.com/eginnovation/eGMobileAPM.git"  

2)  Close your project in Xcode, and update it by running this command from the Terminal in your project directory: 

Pod Install  

3)  Open your project in Xcode by running this command from the Terminal in your project directory: 
 Open App.xcworkspace  

4)  Import the Monitoring Framework into the application (AppDelegate.swift) using the command 
 Import eGMobileAPM  

5)  In your AppDelegate.swift file add this call as the first line of application: didFinishLaunchingWithOptions: 
 egAPM.sharedInstance().start(apptoken: “Application Token”,collectorHost: “Collector Host”) 
 In AppDelegate.swift replace the unique application token and collector host that is automatically generated.  

6) Clean and build your app, and then run it in the simulator or physical device. 


# Configure using Objective-C

1)  In the Podfile for your project, add the following line:
 pod 'eGMobileAPM', :git => "https://github.com/eginnovation/eGMobileAPM.git"  

2)  Close your project in Xcode, and update it by running this command from the Terminal in your project directory: 
 Pod Install  

3)  Open your project in Xcode by running this command from the Terminal in your project directory: 
 Open App.xcworkspace 
 
4)  In your Objective – C project, create a new Swift file. You will be prompted to add a bridging header if you don’t have already one. Accept this prompt.
 
5)  Import the eGMobileAPM Framework by adding
 #import “eGMobileAPM/eGMobileAPM- Swift.h” to the top of MyApp-Bridging-Header.h  
 
6)  Import the Monitoring Framework into the application (AppDelegate.m) using the command :
 #import <eGMobileAPM/eGMobileAPM.h>

7)  Add below line :

[egAPM.sharedInstance startWithApptoken:(@" Application Token ") collectorHost:(@" Collector Host ")]; 
 in your AppDelegate.m and replace the unique application token and collector host that is automatically generated.
 
8)  Clean and build your app, and then run it in the simulator or physical device.  



