import UIKit
@main final class HuuHungSAMPApp:UIResponder,UIApplicationDelegate{var window:UIWindow?;func application(_ application:UIApplication,didFinishLaunchingWithOptions options:[UIApplication.LaunchOptionsKey:Any]?=nil)->Bool{window=UIWindow(frame:UIScreen.main.bounds);window?.rootViewController=HuuHungSAMPViewController();window?.makeKeyAndVisible();return true}}
