//
//  Test.h
//  Squeezebox Server Preference Tester
//
//  Created by Dave Nanian on Wed Oct 16 2002.
//  Copyright 2002-2009 Logitech
//

#import <PreferencePanes/PreferencePanes.h>
#import <Cocoa/Cocoa.h>

@interface Test : NSObject
{
    IBOutlet NSWindow *theWindow;
}
- (void) awakeFromNib;
@end
