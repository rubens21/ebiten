// -*- objc -*-

#ifndef GO_EBITEN_UI_COCOA_EBITEN_OPENGL_VIEW_H_
#define GO_EBITEN_UI_COCOA_EBITEN_OPENGL_VIEW_H_

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

typedef bool updating(void);

@interface EbitenOpenGLView : NSOpenGLView

- (CVReturn)getFrameForTime:(CVTimeStamp const*)outputTime;
- (void)setUpdatingFunc:(updating*)updatingFunc;

@end

#endif
