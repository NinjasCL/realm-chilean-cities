//
//  CVZPLocality.h
//
// Copyright (c) 2015 Ninjas.cl
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Realm/Realm.h>
#import "CVZPRealmObjectWithJSONDataProtocol.h"
#import "CVZPLocationProtocol.h"

/*!
 * This class holds the locality (Ex Viña del Mar).
 */
@interface CVZPLocalityModel : RLMObject <CVZPRealmObjectWithJSONData, CVZPLocationProtocol>


/*!
 *    A special code used for territory identification
 */
@property (nonatomic) NSInteger territorialCode;


/*!
 * The number for the administrativeArea that this locality belongs
 */

// Could not relate to administrative area object
// because will cause circular references error.
@property (nonatomic) NSInteger administrativeAreaNumber;

/*!
 *    The Sub Administrative Area number
 */
@property (nonatomic) NSInteger subAdministrativeAreaNumber;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<CVZPLocalityModel>
RLM_ARRAY_TYPE(CVZPLocalityModel)
