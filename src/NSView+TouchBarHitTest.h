/**
 * @file NSView+TouchBarHitTest.h
 *
 * @copyright 2018 Bill Zissimopoulos
 */
/*
 * This file is part of EnergyBar.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 */

#import <Cocoa/Cocoa.h>

@interface NSView (TouchBarHitTest)
+ (void)loadTouchBarHitTest;
+ (void)enableTouchBarHitTest:(id)flag;
@end