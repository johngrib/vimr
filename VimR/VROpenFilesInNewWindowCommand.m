/**
* Tae Won Ha — @hataewon
*
* http://taewon.de
* http://qvacua.com
*
* See LICENSE
*/

#import "VROpenFilesInNewWindowCommand.h"
#import "VRDefaultLogSetting.h"
#import "VRAppDelegate.h"


@implementation VROpenFilesInNewWindowCommand

- (id)performDefaultImplementation {
  NSArray *fileUrls = self.fileUrls;

  DDLogDebug(@"VimR OSA: Calling open file in new window command with args: %@", fileUrls);
  [self.appDelegate application:self.app openFiles:fileUrls];

  return nil;
}

@end
