//
//  BMSRTCLib.h
//  BMSRTCLib
//
//  Created by Admin on 3/13/2560 BE.
//  Copyright © 2560 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for BMSRTCLib.
FOUNDATION_EXPORT double BMSRTCLibVersionNumber;

//! Project version string for BMSRTCLib.
FOUNDATION_EXPORT const unsigned char BMSRTCLibVersionString[];

#define PASCAL_CALL CDECL

// In this header, you should import all the public headers of your framework using statements like #import <BMSRTCLib/PublicHeader.h>


typedef char PASCAL_CHAR;
typedef const PASCAL_CHAR* PASCAL_PCHAR;
typedef uint32_t PASCAL_UINT;
typedef const void* PASCAL_POBJ;
typedef int32_t PASCAL_BOOL;
typedef const uint8_t* PASCAL_TBYTES;

typedef const uint8_t PASCAL_BYTEARRAY[];

typedef uint32_t* PASCAL_UINT_PTR;


PASCAL_POBJ __cdecl RTCMemDataset_Create();
PASCAL_BOOL __cdecl RTCMemDataset_GetData(PASCAL_POBJ pasObj,PASCAL_PCHAR sql, PASCAL_BOOL useJSON );
PASCAL_BOOL __cdecl RTCMemDataset_UpdateData(PASCAL_POBJ pasObj,PASCAL_PCHAR tableName);
PASCAL_BOOL __cdecl RTCMemDataset_Free(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Close(PASCAL_POBJ pasObj);
PASCAL_UINT __cdecl RTCMemDataset_RecordCount(PASCAL_POBJ);
PASCAL_POBJ __cdecl RTCMemDataset_FieldByName(PASCAL_POBJ pasObj,PASCAL_PCHAR fieldname);
void __cdecl PrepareRemoteConnection(PASCAL_PCHAR aServer,PASCAL_UINT aPort);
PASCAL_BOOL __cdecl CheckRemoteConnection(PASCAL_PCHAR aServer,PASCAL_UINT aPort);

PASCAL_PCHAR __cdecl BMSFormatDateTime(PASCAL_PCHAR aFormat,int64_t aValue);

PASCAL_PCHAR __cdecl DB_FieldAsString(PASCAL_POBJ pasObj);
PASCAL_UINT __cdecl DB_FieldAsInteger(PASCAL_POBJ pasObj);
PASCAL_UINT __cdecl DB_FieldAsBlobSize(PASCAL_POBJ pasObj);
double __cdecl DB_FieldAsFloat(PASCAL_POBJ pasObj);
int64_t __cdecl DB_FieldAsMacDateTime(PASCAL_POBJ pasObj);
PASCAL_PCHAR __cdecl DB_FieldAsBlob(PASCAL_POBJ pasObj);      //uint8_t *data);

void __cdecl DB_FieldAsBlobByteArray(PASCAL_POBJ pasObj,PASCAL_UINT_PTR aSize,PASCAL_POBJ aData);   //PASCAL_BYTEARRAY* aData

PASCAL_BOOL __cdecl DB_SetFieldAsBlobByteArray(PASCAL_POBJ pasObj,PASCAL_UINT_PTR aSize,PASCAL_POBJ aData);

void __cdecl FPC_FreeMem(PASCAL_POBJ aData,PASCAL_UINT aSize);

void __cdecl SetRTCLicenseKey(PASCAL_PCHAR aKey);

PASCAL_BOOL __cdecl DB_SetFieldAsString(PASCAL_POBJ pasObj,PASCAL_PCHAR aValue);
PASCAL_BOOL __cdecl DB_SetFieldAsInteger(PASCAL_POBJ pasObj,PASCAL_UINT aValue);
PASCAL_BOOL __cdecl DB_SetFieldAsFloat(PASCAL_POBJ pasObj,double aValue);
PASCAL_BOOL __cdecl DB_SetFieldAsMacDateTime(PASCAL_POBJ pasObj,int64_t aValue);
PASCAL_BOOL __cdecl DB_SetFieldAsBlob(PASCAL_POBJ pasObj,PASCAL_PCHAR aValue);


PASCAL_BOOL __cdecl RTCMemDataset_TestString(PASCAL_POBJ pasObj,PASCAL_PCHAR aString);


PASCAL_BOOL __cdecl RTCMemDataset_Edit(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Append(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Post(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Delete(PASCAL_POBJ pasObj);

PASCAL_BOOL __cdecl RTCMemDataset_First(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Last(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_BOF(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_EOF(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_Next(PASCAL_POBJ pasObj);

PASCAL_BOOL __cdecl RTCMemDataset_LocateInteger1Field(PASCAL_POBJ pasObj,PASCAL_PCHAR aField,PASCAL_UINT aKeyValue1);

PASCAL_UINT __cdecl RTCMemDataset_GetRecNo(PASCAL_POBJ pasObj);
PASCAL_BOOL __cdecl RTCMemDataset_SetRecNo(PASCAL_POBJ pasObj,PASCAL_UINT aValue);
PASCAL_BOOL __cdecl RTCMemDataset_Cancel(PASCAL_POBJ pasObj);

PASCAL_UINT __cdecl RTCMemDataset_GetState(PASCAL_POBJ pasObj);
