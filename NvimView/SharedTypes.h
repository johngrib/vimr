/**
 * Tae Won Ha - http://taewon.de - @hataewon
 * See LICENSE
 */

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, FontTrait) {
  FontTraitNone = 0,
  FontTraitItalic = (1 << 0),
  FontTraitBold = (1 << 1),
  FontTraitUnderline = (1 << 2),
  FontTraitUndercurl = (1 << 3)
};

typedef struct {
  FontTrait fontTrait;

  NSInteger foreground;
  NSInteger background;
  NSInteger special;
} CellAttributes;

// Keep in sync with ModeShape enum in cursor_shape.h.
typedef NS_ENUM(NSUInteger, CursorModeShape) {
  CursorModeShapeNormal = 0,
  CursorModeShapeVisual = 1,
  CursorModeShapeInsert = 2,
  CursorModeShapeReplace = 3,
  CursorModeShapeCmdline = 4,
  CursorModeShapeCmdlineInsert = 5,
  CursorModeShapeCmdlineReplace = 6,
  CursorModeShapeOperatorPending = 7,
  CursorModeShapeVisualExclusive = 8,
  CursorModeShapeOnCmdline = 9,
  CursorModeShapeOnStatusLine = 10,
  CursorModeShapeDraggingStatusLine = 11,
  CursorModeShapeOnVerticalSepLine = 12,
  CursorModeShapeDraggingVerticalSepLine = 13,
  CursorModeShapeMore = 14,
  CursorModeShapeMoreLastLine = 15,
  CursorModeShapeShowingMatchingParen = 16,
  CursorModeShapeTermFocus = 17,
  CursorModeShapeCount = 18,
};

typedef struct {
  NSInteger row;
  NSInteger column;
} Position;

typedef NS_ENUM(NSInteger, RenderDataType) {
  RenderDataTypePut,
  RenderDataTypePutMarked,
  RenderDataTypeGoto,
  RenderDataTypeHighlight
};

typedef NS_ENUM(NSInteger, NeoVimServerMsgId) {
  NeoVimServerMsgIdServerReady = 0,
  NeoVimServerMsgIdNeoVimReady,
  NeoVimServerMsgIdResize,
  NeoVimServerMsgIdClear,
  NeoVimServerMsgIdEolClear,
  NeoVimServerMsgIdSetMenu,
  NeoVimServerMsgIdBusyStart,
  NeoVimServerMsgIdBusyStop,
  NeoVimServerMsgIdMouseOn,
  NeoVimServerMsgIdMouseOff,
  NeoVimServerMsgIdModeChange,
  NeoVimServerMsgIdSetScrollRegion,
  NeoVimServerMsgIdScroll,
  NeoVimServerMsgIdUnmark,
  NeoVimServerMsgIdBell,
  NeoVimServerMsgIdVisualBell,
  NeoVimServerMsgIdFlush,
  NeoVimServerMsgIdSetForeground,
  NeoVimServerMsgIdSetBackground,
  NeoVimServerMsgIdSetSpecial,
  NeoVimServerMsgIdSetTitle,
  NeoVimServerMsgIdSetIcon,
  NeoVimServerMsgIdStop,
  
  NeoVimServerMsgIdDirtyStatusChanged,
  NeoVimServerMsgIdCwdChanged,
  NeoVimServerMsgIdColorSchemeChanged,
  NeoVimServerMsgIdAutoCommandEvent,
  
  NeoVimServerMsgIdDebug1,
};

typedef NS_ENUM(NSInteger, NeoVimAgentMsgId) {
  NeoVimAgentMsgIdAgentReady = 0,
  NeoVimAgentMsgIdInput,
  NeoVimAgentMsgIdInputMarked,
  NeoVimAgentMsgIdDelete,
  NeoVimAgentMsgIdResize,
  NeoVimAgentMsgIdScroll,
  
  NeoVimAgentMsgIdGetEscapeFileNames,
  
  NeoVimAgentMsgIdFocusGained,
  
  NeoVimAgentMsgIdDebug1,
};
