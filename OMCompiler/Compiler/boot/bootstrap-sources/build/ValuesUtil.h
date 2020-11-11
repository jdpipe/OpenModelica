#ifndef ValuesUtil__H
#define ValuesUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description Absyn_CodeNode_C__TYPENAME__desc;
extern struct record_description Absyn_Direction_BIDIR__desc;
extern struct record_description Absyn_InnerOuter_NOT__INNER__OUTER__desc;
extern struct record_description Absyn_Path_IDENT__desc;
extern struct record_description ClassInf_State_RECORD__desc;
extern struct record_description DAE_Attributes_ATTR__desc;
extern struct record_description DAE_Binding_UNBOUND__desc;
extern struct record_description DAE_CallAttributes_CALL__ATTR__desc;
extern struct record_description DAE_ComponentRef_CREF__IDENT__desc;
extern struct record_description DAE_ConnectorType_NON__CONNECTOR__desc;
extern struct record_description DAE_Dimension_DIM__INTEGER__desc;
extern struct record_description DAE_Exp_ARRAY__desc;
extern struct record_description DAE_Exp_BCONST__desc;
extern struct record_description DAE_Exp_BOX__desc;
extern struct record_description DAE_Exp_CALL__desc;
extern struct record_description DAE_Exp_CODE__desc;
extern struct record_description DAE_Exp_EMPTY__desc;
extern struct record_description DAE_Exp_ENUM__LITERAL__desc;
extern struct record_description DAE_Exp_ICONST__desc;
extern struct record_description DAE_Exp_LIST__desc;
extern struct record_description DAE_Exp_MATRIX__desc;
extern struct record_description DAE_Exp_METARECORDCALL__desc;
extern struct record_description DAE_Exp_META__OPTION__desc;
extern struct record_description DAE_Exp_META__TUPLE__desc;
extern struct record_description DAE_Exp_RCONST__desc;
extern struct record_description DAE_Exp_RECORD__desc;
extern struct record_description DAE_Exp_SCONST__desc;
extern struct record_description DAE_Exp_TUPLE__desc;
extern struct record_description DAE_InlineType_NO__INLINE__desc;
extern struct record_description DAE_TailCall_NO__TAIL__desc;
extern struct record_description DAE_Type_T__ARRAY__desc;
extern struct record_description DAE_Type_T__BOOL__desc;
extern struct record_description DAE_Type_T__COMPLEX__desc;
extern struct record_description DAE_Type_T__ENUMERATION__desc;
extern struct record_description DAE_Type_T__INTEGER__desc;
extern struct record_description DAE_Type_T__METAARRAY__desc;
extern struct record_description DAE_Type_T__METABOXED__desc;
extern struct record_description DAE_Type_T__REAL__desc;
extern struct record_description DAE_Type_T__STRING__desc;
extern struct record_description DAE_Type_T__UNKNOWN__desc;
extern struct record_description DAE_Var_TYPES__VAR__desc;
extern struct record_description ErrorTypes_Message_MESSAGE__desc;
extern struct record_description ErrorTypes_MessageType_TRANSLATION__desc;
extern struct record_description ErrorTypes_Severity_ERROR__desc;
extern struct record_description ExpressionSimplifyTypes_IntOp_ADDOP__desc;
extern struct record_description ExpressionSimplifyTypes_IntOp_DIVOP__desc;
extern struct record_description ExpressionSimplifyTypes_IntOp_MULOP__desc;
extern struct record_description ExpressionSimplifyTypes_IntOp_POWOP__desc;
extern struct record_description ExpressionSimplifyTypes_IntOp_SUBOP__desc;
extern struct record_description Flags_DebugFlag_DEBUG__FLAG__desc;
extern struct record_description Gettext_TranslatableContent_gettext__desc;
extern struct record_description SCode_Parallelism_NON__PARALLEL__desc;
extern struct record_description SCode_Variability_VAR__desc;
extern struct record_description SCode_Visibility_PUBLIC__desc;
extern struct record_description Values_Value_ARRAY__desc;
extern struct record_description Values_Value_BOOL__desc;
extern struct record_description Values_Value_CODE__desc;
extern struct record_description Values_Value_INTEGER__desc;
extern struct record_description Values_Value_LIST__desc;
extern struct record_description Values_Value_META__BOX__desc;
extern struct record_description Values_Value_REAL__desc;
extern struct record_description Values_Value_STRING__desc;
extern struct record_description Values_Value_TUPLE__desc;
DLLExport
modelica_metatype omc_ValuesUtil_fixZeroSizeArray(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fe, modelica_metatype _ty);
#define boxptr_ValuesUtil_fixZeroSizeArray omc_ValuesUtil_fixZeroSizeArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_fixZeroSizeArray,2,0) {(void*) boxptr_ValuesUtil_fixZeroSizeArray,0}};
#define boxvar_ValuesUtil_fixZeroSizeArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_fixZeroSizeArray)
DLLExport
modelica_metatype omc_ValuesUtil_typeConvertRecord(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inType);
#define boxptr_ValuesUtil_typeConvertRecord omc_ValuesUtil_typeConvertRecord
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_typeConvertRecord,2,0) {(void*) boxptr_ValuesUtil_typeConvertRecord,0}};
#define boxvar_ValuesUtil_typeConvertRecord MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_typeConvertRecord)
DLLExport
modelica_boolean omc_ValuesUtil_isEmpty(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_isEmpty(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_isEmpty,2,0) {(void*) boxptr_ValuesUtil_isEmpty,0}};
#define boxvar_ValuesUtil_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_isEmpty)
DLLExport
modelica_metatype omc_ValuesUtil_liftValueList(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inDimensions);
#define boxptr_ValuesUtil_liftValueList omc_ValuesUtil_liftValueList
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_liftValueList,2,0) {(void*) boxptr_ValuesUtil_liftValueList,0}};
#define boxvar_ValuesUtil_liftValueList MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_liftValueList)
DLLExport
modelica_metatype omc_ValuesUtil_arrayContainsEmpty(threadData_t *threadData, modelica_metatype _inValues);
#define boxptr_ValuesUtil_arrayContainsEmpty omc_ValuesUtil_arrayContainsEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayContainsEmpty,2,0) {(void*) boxptr_ValuesUtil_arrayContainsEmpty,0}};
#define boxvar_ValuesUtil_arrayContainsEmpty MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayContainsEmpty)
DLLExport
modelica_metatype omc_ValuesUtil_containsEmpty(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_containsEmpty omc_ValuesUtil_containsEmpty
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_containsEmpty,2,0) {(void*) boxptr_ValuesUtil_containsEmpty,0}};
#define boxvar_ValuesUtil_containsEmpty MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_containsEmpty)
DLLExport
modelica_metatype omc_ValuesUtil_arrayOrListVals(threadData_t *threadData, modelica_metatype _v, modelica_boolean _boxIfUnboxed);
DLLExport
modelica_metatype boxptr_ValuesUtil_arrayOrListVals(threadData_t *threadData, modelica_metatype _v, modelica_metatype _boxIfUnboxed);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayOrListVals,2,0) {(void*) boxptr_ValuesUtil_arrayOrListVals,0}};
#define boxvar_ValuesUtil_arrayOrListVals MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayOrListVals)
DLLExport
modelica_metatype omc_ValuesUtil_unboxIfBoxedVal(threadData_t *threadData, modelica_metatype _iv);
#define boxptr_ValuesUtil_unboxIfBoxedVal omc_ValuesUtil_unboxIfBoxedVal
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_unboxIfBoxedVal,2,0) {(void*) boxptr_ValuesUtil_unboxIfBoxedVal,0}};
#define boxvar_ValuesUtil_unboxIfBoxedVal MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_unboxIfBoxedVal)
DLLExport
modelica_metatype omc_ValuesUtil_boxIfUnboxedVal(threadData_t *threadData, modelica_metatype _v);
#define boxptr_ValuesUtil_boxIfUnboxedVal omc_ValuesUtil_boxIfUnboxedVal
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_boxIfUnboxedVal,2,0) {(void*) boxptr_ValuesUtil_boxIfUnboxedVal,0}};
#define boxvar_ValuesUtil_boxIfUnboxedVal MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_boxIfUnboxedVal)
DLLExport
modelica_string omc_ValuesUtil_printCodeVariableName(threadData_t *threadData, modelica_metatype _val);
#define boxptr_ValuesUtil_printCodeVariableName omc_ValuesUtil_printCodeVariableName
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_printCodeVariableName,2,0) {(void*) boxptr_ValuesUtil_printCodeVariableName,0}};
#define boxvar_ValuesUtil_printCodeVariableName MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_printCodeVariableName)
DLLExport
modelica_metatype omc_ValuesUtil_getPath(threadData_t *threadData, modelica_metatype _val);
#define boxptr_ValuesUtil_getPath omc_ValuesUtil_getPath
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_getPath,2,0) {(void*) boxptr_ValuesUtil_getPath,0}};
#define boxvar_ValuesUtil_getPath MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_getPath)
DLLExport
modelica_metatype omc_ValuesUtil_getCode(threadData_t *threadData, modelica_metatype _val);
#define boxptr_ValuesUtil_getCode omc_ValuesUtil_getCode
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_getCode,2,0) {(void*) boxptr_ValuesUtil_getCode,0}};
#define boxvar_ValuesUtil_getCode MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_getCode)
DLLExport
modelica_metatype omc_ValuesUtil_makeCodeTypeName(threadData_t *threadData, modelica_metatype _path);
#define boxptr_ValuesUtil_makeCodeTypeName omc_ValuesUtil_makeCodeTypeName
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeCodeTypeName,2,0) {(void*) boxptr_ValuesUtil_makeCodeTypeName,0}};
#define boxvar_ValuesUtil_makeCodeTypeName MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeCodeTypeName)
DLLExport
modelica_string omc_ValuesUtil_extractValueString(threadData_t *threadData, modelica_metatype _val);
#define boxptr_ValuesUtil_extractValueString omc_ValuesUtil_extractValueString
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_extractValueString,2,0) {(void*) boxptr_ValuesUtil_extractValueString,0}};
#define boxvar_ValuesUtil_extractValueString MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_extractValueString)
DLLExport
modelica_metatype omc_ValuesUtil_valueDimensions(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valueDimensions omc_ValuesUtil_valueDimensions
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueDimensions,2,0) {(void*) boxptr_ValuesUtil_valueDimensions,0}};
#define boxvar_ValuesUtil_valueDimensions MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueDimensions)
DLLExport
modelica_integer omc_ValuesUtil_valueInteger(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_valueInteger(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueInteger,2,0) {(void*) boxptr_ValuesUtil_valueInteger,0}};
#define boxvar_ValuesUtil_valueInteger MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueInteger)
DLLExport
modelica_metatype omc_ValuesUtil_nthnthArrayelt(threadData_t *threadData, modelica_metatype _inLst, modelica_metatype _inValue, modelica_metatype _lastValue);
#define boxptr_ValuesUtil_nthnthArrayelt omc_ValuesUtil_nthnthArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_nthnthArrayelt,2,0) {(void*) boxptr_ValuesUtil_nthnthArrayelt,0}};
#define boxvar_ValuesUtil_nthnthArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_nthnthArrayelt)
DLLExport
modelica_string omc_ValuesUtil_printValStr(threadData_t *threadData, modelica_metatype _v);
#define boxptr_ValuesUtil_printValStr omc_ValuesUtil_printValStr
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_printValStr,2,0) {(void*) boxptr_ValuesUtil_printValStr,0}};
#define boxvar_ValuesUtil_printValStr MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_printValStr)
DLLExport
void omc_ValuesUtil_printVal(threadData_t *threadData, modelica_metatype _v);
#define boxptr_ValuesUtil_printVal omc_ValuesUtil_printVal
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_printVal,2,0) {(void*) boxptr_ValuesUtil_printVal,0}};
#define boxvar_ValuesUtil_printVal MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_printVal)
DLLExport
modelica_metatype omc_ValuesUtil_reverseMatrix(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_reverseMatrix omc_ValuesUtil_reverseMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_reverseMatrix,2,0) {(void*) boxptr_ValuesUtil_reverseMatrix,0}};
#define boxvar_ValuesUtil_reverseMatrix MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_reverseMatrix)
#define boxptr_ValuesUtil_unparsePtolemySet2 omc_ValuesUtil_unparsePtolemySet2
#define boxptr_ValuesUtil_unparsePtolemySet omc_ValuesUtil_unparsePtolemySet
#define boxptr_ValuesUtil_unparsePtolemyValues omc_ValuesUtil_unparsePtolemyValues
DLLExport
modelica_integer omc_ValuesUtil_writePtolemyplotDataset(threadData_t *threadData, modelica_string _inString1, modelica_metatype _inValue2, modelica_metatype _inStringLst3, modelica_string _inString4);
DLLExport
modelica_metatype boxptr_ValuesUtil_writePtolemyplotDataset(threadData_t *threadData, modelica_metatype _inString1, modelica_metatype _inValue2, modelica_metatype _inStringLst3, modelica_metatype _inString4);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_writePtolemyplotDataset,2,0) {(void*) boxptr_ValuesUtil_writePtolemyplotDataset,0}};
#define boxvar_ValuesUtil_writePtolemyplotDataset MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_writePtolemyplotDataset)
#define boxptr_ValuesUtil_valListString omc_ValuesUtil_valListString
#define boxptr_ValuesUtil_valRecordString omc_ValuesUtil_valRecordString
DLLExport
void omc_ValuesUtil_valString2(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valString2 omc_ValuesUtil_valString2
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valString2,2,0) {(void*) boxptr_ValuesUtil_valString2,0}};
#define boxvar_ValuesUtil_valString2 MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valString2)
DLLExport
modelica_string omc_ValuesUtil_valString(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valString omc_ValuesUtil_valString
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valString,2,0) {(void*) boxptr_ValuesUtil_valString,0}};
#define boxvar_ValuesUtil_valString MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valString)
DLLExport
modelica_metatype omc_ValuesUtil_makeRealMatrix(threadData_t *threadData, modelica_metatype _inReals);
#define boxptr_ValuesUtil_makeRealMatrix omc_ValuesUtil_makeRealMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeRealMatrix,2,0) {(void*) boxptr_ValuesUtil_makeRealMatrix,0}};
#define boxvar_ValuesUtil_makeRealMatrix MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeRealMatrix)
DLLExport
modelica_metatype omc_ValuesUtil_makeRealArray(threadData_t *threadData, modelica_metatype _inReals);
#define boxptr_ValuesUtil_makeRealArray omc_ValuesUtil_makeRealArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeRealArray,2,0) {(void*) boxptr_ValuesUtil_makeRealArray,0}};
#define boxvar_ValuesUtil_makeRealArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeRealArray)
DLLExport
modelica_metatype omc_ValuesUtil_makeIntArray(threadData_t *threadData, modelica_metatype _inInts);
#define boxptr_ValuesUtil_makeIntArray omc_ValuesUtil_makeIntArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeIntArray,2,0) {(void*) boxptr_ValuesUtil_makeIntArray,0}};
#define boxvar_ValuesUtil_makeIntArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeIntArray)
DLLExport
modelica_metatype omc_ValuesUtil_makeStringArray(threadData_t *threadData, modelica_metatype _inReals);
#define boxptr_ValuesUtil_makeStringArray omc_ValuesUtil_makeStringArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeStringArray,2,0) {(void*) boxptr_ValuesUtil_makeStringArray,0}};
#define boxvar_ValuesUtil_makeStringArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeStringArray)
DLLExport
modelica_metatype omc_ValuesUtil_makeArray(threadData_t *threadData, modelica_metatype _inValueLst);
#define boxptr_ValuesUtil_makeArray omc_ValuesUtil_makeArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeArray,2,0) {(void*) boxptr_ValuesUtil_makeArray,0}};
#define boxvar_ValuesUtil_makeArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeArray)
DLLExport
modelica_metatype omc_ValuesUtil_makeList(threadData_t *threadData, modelica_metatype _inValueLst);
#define boxptr_ValuesUtil_makeList omc_ValuesUtil_makeList
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeList,2,0) {(void*) boxptr_ValuesUtil_makeList,0}};
#define boxvar_ValuesUtil_makeList MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeList)
DLLExport
modelica_metatype omc_ValuesUtil_makeTuple(threadData_t *threadData, modelica_metatype _inValueLst);
#define boxptr_ValuesUtil_makeTuple omc_ValuesUtil_makeTuple
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeTuple,2,0) {(void*) boxptr_ValuesUtil_makeTuple,0}};
#define boxvar_ValuesUtil_makeTuple MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeTuple)
DLLExport
modelica_metatype omc_ValuesUtil_makeString(threadData_t *threadData, modelica_string _s);
#define boxptr_ValuesUtil_makeString omc_ValuesUtil_makeString
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeString,2,0) {(void*) boxptr_ValuesUtil_makeString,0}};
#define boxvar_ValuesUtil_makeString MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeString)
DLLExport
modelica_metatype omc_ValuesUtil_makeInteger(threadData_t *threadData, modelica_integer _i);
DLLExport
modelica_metatype boxptr_ValuesUtil_makeInteger(threadData_t *threadData, modelica_metatype _i);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeInteger,2,0) {(void*) boxptr_ValuesUtil_makeInteger,0}};
#define boxvar_ValuesUtil_makeInteger MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeInteger)
DLLExport
modelica_metatype omc_ValuesUtil_makeReal(threadData_t *threadData, modelica_real _r);
DLLExport
modelica_metatype boxptr_ValuesUtil_makeReal(threadData_t *threadData, modelica_metatype _r);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeReal,2,0) {(void*) boxptr_ValuesUtil_makeReal,0}};
#define boxvar_ValuesUtil_makeReal MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeReal)
DLLExport
modelica_metatype omc_ValuesUtil_makeBoolean(threadData_t *threadData, modelica_boolean _b);
DLLExport
modelica_metatype boxptr_ValuesUtil_makeBoolean(threadData_t *threadData, modelica_metatype _b);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeBoolean,2,0) {(void*) boxptr_ValuesUtil_makeBoolean,0}};
#define boxvar_ValuesUtil_makeBoolean MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeBoolean)
DLLExport
modelica_metatype omc_ValuesUtil_arrayScalar(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_arrayScalar omc_ValuesUtil_arrayScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayScalar,2,0) {(void*) boxptr_ValuesUtil_arrayScalar,0}};
#define boxvar_ValuesUtil_arrayScalar MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayScalar)
DLLExport
modelica_metatype omc_ValuesUtil_arrayValues(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_arrayValues omc_ValuesUtil_arrayValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValues,2,0) {(void*) boxptr_ValuesUtil_arrayValues,0}};
#define boxvar_ValuesUtil_arrayValues MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValues)
DLLExport
modelica_metatype omc_ValuesUtil_intlistToValue(threadData_t *threadData, modelica_metatype _inIntegerLst);
#define boxptr_ValuesUtil_intlistToValue omc_ValuesUtil_intlistToValue
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_intlistToValue,2,0) {(void*) boxptr_ValuesUtil_intlistToValue,0}};
#define boxvar_ValuesUtil_intlistToValue MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_intlistToValue)
#define boxptr_ValuesUtil_matrixStripFirstColumn omc_ValuesUtil_matrixStripFirstColumn
DLLExport
modelica_metatype omc_ValuesUtil_multMatrix(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_multMatrix omc_ValuesUtil_multMatrix
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_multMatrix,2,0) {(void*) boxptr_ValuesUtil_multMatrix,0}};
#define boxvar_ValuesUtil_multMatrix MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_multMatrix)
DLLExport
modelica_metatype omc_ValuesUtil_crossProduct(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_crossProduct omc_ValuesUtil_crossProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_crossProduct,2,0) {(void*) boxptr_ValuesUtil_crossProduct,0}};
#define boxvar_ValuesUtil_crossProduct MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_crossProduct)
DLLExport
modelica_metatype omc_ValuesUtil_multScalarProduct(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_multScalarProduct omc_ValuesUtil_multScalarProduct
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_multScalarProduct,2,0) {(void*) boxptr_ValuesUtil_multScalarProduct,0}};
#define boxvar_ValuesUtil_multScalarProduct MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_multScalarProduct)
DLLExport
modelica_metatype omc_ValuesUtil_powArrayeltScalar(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_powArrayeltScalar omc_ValuesUtil_powArrayeltScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_powArrayeltScalar,2,0) {(void*) boxptr_ValuesUtil_powArrayeltScalar,0}};
#define boxvar_ValuesUtil_powArrayeltScalar MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_powArrayeltScalar)
DLLExport
modelica_metatype omc_ValuesUtil_powScalarArrayelt(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_powScalarArrayelt omc_ValuesUtil_powScalarArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_powScalarArrayelt,2,0) {(void*) boxptr_ValuesUtil_powScalarArrayelt,0}};
#define boxvar_ValuesUtil_powScalarArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_powScalarArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_divArrayeltScalar(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_divArrayeltScalar omc_ValuesUtil_divArrayeltScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_divArrayeltScalar,2,0) {(void*) boxptr_ValuesUtil_divArrayeltScalar,0}};
#define boxvar_ValuesUtil_divArrayeltScalar MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_divArrayeltScalar)
DLLExport
modelica_metatype omc_ValuesUtil_divScalarArrayelt(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_divScalarArrayelt omc_ValuesUtil_divScalarArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_divScalarArrayelt,2,0) {(void*) boxptr_ValuesUtil_divScalarArrayelt,0}};
#define boxvar_ValuesUtil_divScalarArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_divScalarArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_subArrayeltScalar(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_subArrayeltScalar omc_ValuesUtil_subArrayeltScalar
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_subArrayeltScalar,2,0) {(void*) boxptr_ValuesUtil_subArrayeltScalar,0}};
#define boxvar_ValuesUtil_subArrayeltScalar MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_subArrayeltScalar)
DLLExport
modelica_metatype omc_ValuesUtil_subScalarArrayelt(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_subScalarArrayelt omc_ValuesUtil_subScalarArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_subScalarArrayelt,2,0) {(void*) boxptr_ValuesUtil_subScalarArrayelt,0}};
#define boxvar_ValuesUtil_subScalarArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_subScalarArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_addScalarArrayelt(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_addScalarArrayelt omc_ValuesUtil_addScalarArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_addScalarArrayelt,2,0) {(void*) boxptr_ValuesUtil_addScalarArrayelt,0}};
#define boxvar_ValuesUtil_addScalarArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_addScalarArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_multScalarArrayelt(threadData_t *threadData, modelica_metatype _scalarValue, modelica_metatype _arrayValues);
#define boxptr_ValuesUtil_multScalarArrayelt omc_ValuesUtil_multScalarArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_multScalarArrayelt,2,0) {(void*) boxptr_ValuesUtil_multScalarArrayelt,0}};
#define boxvar_ValuesUtil_multScalarArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_multScalarArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_sumArrayelt(threadData_t *threadData, modelica_metatype _values);
#define boxptr_ValuesUtil_sumArrayelt omc_ValuesUtil_sumArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_sumArrayelt,2,0) {(void*) boxptr_ValuesUtil_sumArrayelt,0}};
#define boxvar_ValuesUtil_sumArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_sumArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_sumArray(threadData_t *threadData, modelica_metatype _value);
#define boxptr_ValuesUtil_sumArray omc_ValuesUtil_sumArray
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_sumArray,2,0) {(void*) boxptr_ValuesUtil_sumArray,0}};
#define boxvar_ValuesUtil_sumArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_sumArray)
DLLExport
modelica_metatype omc_ValuesUtil_valuePow(threadData_t *threadData, modelica_metatype _value1, modelica_metatype _value2);
#define boxptr_ValuesUtil_valuePow omc_ValuesUtil_valuePow
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valuePow,2,0) {(void*) boxptr_ValuesUtil_valuePow,0}};
#define boxvar_ValuesUtil_valuePow MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valuePow)
DLLExport
modelica_metatype omc_ValuesUtil_valueDivide(threadData_t *threadData, modelica_metatype _value1, modelica_metatype _value2);
#define boxptr_ValuesUtil_valueDivide omc_ValuesUtil_valueDivide
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueDivide,2,0) {(void*) boxptr_ValuesUtil_valueDivide,0}};
#define boxvar_ValuesUtil_valueDivide MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueDivide)
DLLExport
modelica_metatype omc_ValuesUtil_valueMultiply(threadData_t *threadData, modelica_metatype _value1, modelica_metatype _value2);
#define boxptr_ValuesUtil_valueMultiply omc_ValuesUtil_valueMultiply
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueMultiply,2,0) {(void*) boxptr_ValuesUtil_valueMultiply,0}};
#define boxvar_ValuesUtil_valueMultiply MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueMultiply)
DLLExport
modelica_metatype omc_ValuesUtil_valueSubtract(threadData_t *threadData, modelica_metatype _value1, modelica_metatype _value2);
#define boxptr_ValuesUtil_valueSubtract omc_ValuesUtil_valueSubtract
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueSubtract,2,0) {(void*) boxptr_ValuesUtil_valueSubtract,0}};
#define boxvar_ValuesUtil_valueSubtract MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueSubtract)
DLLExport
modelica_metatype omc_ValuesUtil_valueSum(threadData_t *threadData, modelica_metatype _value1, modelica_metatype _value2);
#define boxptr_ValuesUtil_valueSum omc_ValuesUtil_valueSum
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueSum,2,0) {(void*) boxptr_ValuesUtil_valueSum,0}};
#define boxvar_ValuesUtil_valueSum MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueSum)
DLLExport
modelica_metatype omc_ValuesUtil_valueNeg(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valueNeg omc_ValuesUtil_valueNeg
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueNeg,2,0) {(void*) boxptr_ValuesUtil_valueNeg,0}};
#define boxvar_ValuesUtil_valueNeg MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueNeg)
DLLExport
modelica_metatype omc_ValuesUtil_matrixValueReals(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_matrixValueReals omc_ValuesUtil_matrixValueReals
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_matrixValueReals,2,0) {(void*) boxptr_ValuesUtil_matrixValueReals,0}};
#define boxvar_ValuesUtil_matrixValueReals MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_matrixValueReals)
DLLExport
modelica_metatype omc_ValuesUtil_arrayValueReals(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_arrayValueReals omc_ValuesUtil_arrayValueReals
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValueReals,2,0) {(void*) boxptr_ValuesUtil_arrayValueReals,0}};
#define boxvar_ValuesUtil_arrayValueReals MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValueReals)
DLLExport
modelica_metatype omc_ValuesUtil_arrayValueInts(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_arrayValueInts omc_ValuesUtil_arrayValueInts
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValueInts,2,0) {(void*) boxptr_ValuesUtil_arrayValueInts,0}};
#define boxvar_ValuesUtil_arrayValueInts MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_arrayValueInts)
DLLExport
modelica_metatype omc_ValuesUtil_valueReals(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valueReals omc_ValuesUtil_valueReals
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueReals,2,0) {(void*) boxptr_ValuesUtil_valueReals,0}};
#define boxvar_ValuesUtil_valueReals MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueReals)
DLLExport
modelica_boolean omc_ValuesUtil_valueBool(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_valueBool(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueBool,2,0) {(void*) boxptr_ValuesUtil_valueBool,0}};
#define boxvar_ValuesUtil_valueBool MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueBool)
DLLExport
modelica_real omc_ValuesUtil_valueReal(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_valueReal(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueReal,2,0) {(void*) boxptr_ValuesUtil_valueReal,0}};
#define boxvar_ValuesUtil_valueReal MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueReal)
#define boxptr_ValuesUtil_valueExpArray omc_ValuesUtil_valueExpArray
DLLExport
modelica_metatype omc_ValuesUtil_valueExp(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _originalExp);
#define boxptr_ValuesUtil_valueExp omc_ValuesUtil_valueExp
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueExp,2,0) {(void*) boxptr_ValuesUtil_valueExp,0}};
#define boxvar_ValuesUtil_valueExp MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueExp)
DLLExport
modelica_metatype omc_ValuesUtil_expValue(threadData_t *threadData, modelica_metatype _inExp);
#define boxptr_ValuesUtil_expValue omc_ValuesUtil_expValue
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_expValue,2,0) {(void*) boxptr_ValuesUtil_expValue,0}};
#define boxvar_ValuesUtil_expValue MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_expValue)
DLLExport
modelica_metatype omc_ValuesUtil_powElementwiseArrayelt(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_powElementwiseArrayelt omc_ValuesUtil_powElementwiseArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_powElementwiseArrayelt,2,0) {(void*) boxptr_ValuesUtil_powElementwiseArrayelt,0}};
#define boxvar_ValuesUtil_powElementwiseArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_powElementwiseArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_divElementwiseArrayelt(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_divElementwiseArrayelt omc_ValuesUtil_divElementwiseArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_divElementwiseArrayelt,2,0) {(void*) boxptr_ValuesUtil_divElementwiseArrayelt,0}};
#define boxvar_ValuesUtil_divElementwiseArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_divElementwiseArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_mulElementwiseArrayelt(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_mulElementwiseArrayelt omc_ValuesUtil_mulElementwiseArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_mulElementwiseArrayelt,2,0) {(void*) boxptr_ValuesUtil_mulElementwiseArrayelt,0}};
#define boxvar_ValuesUtil_mulElementwiseArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_mulElementwiseArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_subElementwiseArrayelt(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_subElementwiseArrayelt omc_ValuesUtil_subElementwiseArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_subElementwiseArrayelt,2,0) {(void*) boxptr_ValuesUtil_subElementwiseArrayelt,0}};
#define boxvar_ValuesUtil_subElementwiseArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_subElementwiseArrayelt)
DLLExport
modelica_metatype omc_ValuesUtil_addElementwiseArrayelt(threadData_t *threadData, modelica_metatype _inValueLst1, modelica_metatype _inValueLst2);
#define boxptr_ValuesUtil_addElementwiseArrayelt omc_ValuesUtil_addElementwiseArrayelt
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_addElementwiseArrayelt,2,0) {(void*) boxptr_ValuesUtil_addElementwiseArrayelt,0}};
#define boxvar_ValuesUtil_addElementwiseArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_addElementwiseArrayelt)
DLLExport
void omc_ValuesUtil_writeToFileAsArgs(threadData_t *threadData, modelica_metatype _vallst, modelica_string _filename);
#define boxptr_ValuesUtil_writeToFileAsArgs omc_ValuesUtil_writeToFileAsArgs
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_writeToFileAsArgs,2,0) {(void*) boxptr_ValuesUtil_writeToFileAsArgs,0}};
#define boxvar_ValuesUtil_writeToFileAsArgs MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_writeToFileAsArgs)
#define boxptr_ValuesUtil_unparseDimSizes omc_ValuesUtil_unparseDimSizes
#define boxptr_ValuesUtil_unparsePrimType omc_ValuesUtil_unparsePrimType
#define boxptr_ValuesUtil_unparseArrayDescription omc_ValuesUtil_unparseArrayDescription
#define boxptr_ValuesUtil_unparseDescription omc_ValuesUtil_unparseDescription
DLLExport
modelica_boolean omc_ValuesUtil_safeLessEq(threadData_t *threadData, modelica_metatype _val1, modelica_metatype _val2);
DLLExport
modelica_metatype boxptr_ValuesUtil_safeLessEq(threadData_t *threadData, modelica_metatype _val1, modelica_metatype _val2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_safeLessEq,2,0) {(void*) boxptr_ValuesUtil_safeLessEq,0}};
#define boxvar_ValuesUtil_safeLessEq MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_safeLessEq)
DLLExport
modelica_metatype omc_ValuesUtil_safeIntRealOp(threadData_t *threadData, modelica_metatype _val1, modelica_metatype _val2, modelica_metatype _op);
#define boxptr_ValuesUtil_safeIntRealOp omc_ValuesUtil_safeIntRealOp
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_safeIntRealOp,2,0) {(void*) boxptr_ValuesUtil_safeIntRealOp,0}};
#define boxvar_ValuesUtil_safeIntRealOp MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_safeIntRealOp)
#define boxptr_ValuesUtil_unparseValueNumbers omc_ValuesUtil_unparseValueNumbers
DLLExport
modelica_string omc_ValuesUtil_unparseValues(threadData_t *threadData, modelica_metatype _inValueLst);
#define boxptr_ValuesUtil_unparseValues omc_ValuesUtil_unparseValues
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_unparseValues,2,0) {(void*) boxptr_ValuesUtil_unparseValues,0}};
#define boxvar_ValuesUtil_unparseValues MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_unparseValues)
DLLExport
modelica_metatype omc_ValuesUtil_nthArrayelt(threadData_t *threadData, modelica_metatype _inValue, modelica_integer _inInteger);
DLLExport
modelica_metatype boxptr_ValuesUtil_nthArrayelt(threadData_t *threadData, modelica_metatype _inValue, modelica_metatype _inInteger);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_nthArrayelt,2,0) {(void*) boxptr_ValuesUtil_nthArrayelt,0}};
#define boxvar_ValuesUtil_nthArrayelt MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_nthArrayelt)
DLLExport
modelica_boolean omc_ValuesUtil_isRecord(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_isRecord(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_isRecord,2,0) {(void*) boxptr_ValuesUtil_isRecord,0}};
#define boxvar_ValuesUtil_isRecord MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_isRecord)
DLLExport
modelica_boolean omc_ValuesUtil_isArray(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_isArray(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_isArray,2,0) {(void*) boxptr_ValuesUtil_isArray,0}};
#define boxvar_ValuesUtil_isArray MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_isArray)
DLLExport
modelica_metatype omc_ValuesUtil_makeZero(threadData_t *threadData, modelica_metatype _ty);
#define boxptr_ValuesUtil_makeZero omc_ValuesUtil_makeZero
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_makeZero,2,0) {(void*) boxptr_ValuesUtil_makeZero,0}};
#define boxvar_ValuesUtil_makeZero MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_makeZero)
DLLExport
modelica_boolean omc_ValuesUtil_isZero(threadData_t *threadData, modelica_metatype _inValue);
DLLExport
modelica_metatype boxptr_ValuesUtil_isZero(threadData_t *threadData, modelica_metatype _inValue);
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_isZero,2,0) {(void*) boxptr_ValuesUtil_isZero,0}};
#define boxvar_ValuesUtil_isZero MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_isZero)
#define boxptr_ValuesUtil_valueExpTypeExpVar omc_ValuesUtil_valueExpTypeExpVar
DLLExport
modelica_metatype omc_ValuesUtil_valueExpType(threadData_t *threadData, modelica_metatype _inValue);
#define boxptr_ValuesUtil_valueExpType omc_ValuesUtil_valueExpType
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_valueExpType,2,0) {(void*) boxptr_ValuesUtil_valueExpType,0}};
#define boxvar_ValuesUtil_valueExpType MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_valueExpType)
DLLExport
modelica_metatype omc_ValuesUtil_typeConvert(threadData_t *threadData, modelica_metatype _inType1, modelica_metatype _inType2, modelica_metatype _inValueLst3);
#define boxptr_ValuesUtil_typeConvert omc_ValuesUtil_typeConvert
static const MMC_DEFSTRUCTLIT(boxvar_lit_ValuesUtil_typeConvert,2,0) {(void*) boxptr_ValuesUtil_typeConvert,0}};
#define boxvar_ValuesUtil_typeConvert MMC_REFSTRUCTLIT(boxvar_lit_ValuesUtil_typeConvert)
#ifdef __cplusplus
}
#endif
#endif