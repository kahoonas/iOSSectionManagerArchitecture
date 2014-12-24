//
//  PrimaryCollectionViewCell.h
//  ArchitectureTemplate
//
//  Created by Kelly, James | Jamie | SDTD on 12/24/14.
//  Copyright (c) 2014 James Kelly. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const PrimaryCollectionViewCellID;

@interface PrimaryCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) IBOutlet UILabel *titleLabel;
@end
