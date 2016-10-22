#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, WPLegacyEditorFormatAction) {
    WPLegacyEditorFormatActionMedia,
    WPLegacyEditorFormatActionBold,
    WPLegacyEditorFormatActionItalic,
    WPLegacyEditorFormatActionUnderline,
    WPLegacyEditorFormatActionDelete,
    WPLegacyEditorFormatActionLink,
    WPLegacyEditorFormatActionQuote,
    WPLegacyEditorFormatActionMore,
    WPLegacyEditorFormatActionH1,
    WPLegacyEditorFormatActionH2,
    WPLegacyEditorFormatActionH5
};

extern NSString * WPLegacyEditorFormatActionToTag(WPLegacyEditorFormatAction formatAction);
extern NSString * WPLegacyEditorFormatActionToName(WPLegacyEditorFormatAction formatAction);
