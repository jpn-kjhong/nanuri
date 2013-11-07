//
//  ViewController.h
//  nanuri
//
//  Created by Hong kijoo on 13. 11. 7..
//  Copyright (c) 2013년 Hong kijoo. All rights reserved.
//

#import "NMapView.h"
#import "NMapLocationManager.h"
#import "GAI.h"
#import "GAIFields.h"
#import "GAIDictionaryBuilder.h"

// Set API key for Open MapViewer libarary.
#define kApiKey @"8d3f7b380117021838d17c95b4c7cf9f"

@interface NMapViewController : GAITrackedViewController<UIActionSheetDelegate,
NMapViewDelegate, NMapPOIdataOverlayDelegate,
MMapReverseGeocoderDelegate, NMapLocationManagerDelegate> {
	NMapView *_mapView;
	
	NMapPOIdataOverlay *_mapPOIdataOverlay;
    
	UIToolbar *_toolbar;
}

@end
