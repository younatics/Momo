//
//  UtilityCenter.h
//  Momo
//
//  Created by Jeheon Choi on 2017. 4. 22..
//  Copyright © 2017년 JeheonChoi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UtilityCenter : NSObject

// 일반 얼럿 뷰컨트롤러
+ (void)presentCommonAlertController:(UIViewController *)fromVC
                         withMessage:(NSString *)message;


// 이미지 리사이징 데이터
+ (NSData *)imgResizing:(UIImage *)img;

@end
