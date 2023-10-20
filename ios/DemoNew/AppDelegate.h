#import <RCTAppDelegate.h>
#import <UIKit/UIKit.h>
#import <FitCloudKit/FitCloudKit.h>

@interface AppDelegate : RCTAppDelegate

//@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic, strong) FitCloudKit *fitCloudKit;

@end
