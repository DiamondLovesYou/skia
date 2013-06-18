#ifndef __DEFINED__SkPdfEnums
#define __DEFINED__SkPdfEnums

enum SkPdfObjectType {
  kObject_SkPdfObjectType,
  kObjectArray_SkPdfObjectType,
  kObjectBoolean_SkPdfObjectType,
  kObjectDictionary_SkPdfObjectType,
  kObjectDictionaryALinkAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryActionDictionary_SkPdfObjectType,
  kObjectDictionaryAlternateImageDictionary_SkPdfObjectType,
  kObjectDictionaryAnnotationActionsDictionary_SkPdfObjectType,
  kObjectDictionaryAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryAppearanceCharacteristicsDictionary_SkPdfObjectType,
  kObjectDictionaryAppearanceDictionary_SkPdfObjectType,
  kObjectDictionaryApplicationDataDictionary_SkPdfObjectType,
  kObjectDictionaryArtifactsDictionary_SkPdfObjectType,
  kObjectDictionaryAttributeObjectDictionary_SkPdfObjectType,
  kObjectDictionaryBeadDictionary_SkPdfObjectType,
  kObjectDictionaryBlockLevelStructureElementsDictionary_SkPdfObjectType,
  kObjectDictionaryBorderStyleDictionary_SkPdfObjectType,
  kObjectDictionaryBoxColorInformationDictionary_SkPdfObjectType,
  kObjectDictionaryBoxStyleDictionary_SkPdfObjectType,
  kObjectDictionaryCIDFontDescriptorDictionary_SkPdfObjectType,
  kObjectDictionaryCIDSystemInfoDictionary_SkPdfObjectType,
  kObjectDictionaryCMapDictionary_SkPdfObjectType,
  kObjectDictionaryCalgrayColorSpaceDictionary_SkPdfObjectType,
  kObjectDictionaryCalrgbColorSpaceDictionary_SkPdfObjectType,
  kObjectDictionaryCatalogDictionary_SkPdfObjectType,
  kObjectDictionaryCcittfaxdecodeFilterDictionary_SkPdfObjectType,
  kObjectDictionaryCheckboxFieldDictionary_SkPdfObjectType,
  kObjectDictionaryChoiceFieldDictionary_SkPdfObjectType,
  kObjectDictionaryComponentsWithMetadataDictionary_SkPdfObjectType,
  kObjectDictionaryDctdecodeFilterDictionary_SkPdfObjectType,
  kObjectDictionaryDeviceNColorSpaceDictionary_SkPdfObjectType,
  kObjectDictionaryDocumentCatalogActionsDictionary_SkPdfObjectType,
  kObjectDictionaryDocumentInformationDictionary_SkPdfObjectType,
  kObjectDictionaryEmbeddedFileParameterDictionary_SkPdfObjectType,
  kObjectDictionaryEmbeddedFileStreamDictionary_SkPdfObjectType,
  kObjectDictionaryEmbeddedFontStreamDictionary_SkPdfObjectType,
  kObjectDictionaryEncodingDictionary_SkPdfObjectType,
  kObjectDictionaryEncryptedEmbeddedFileStreamDictionary_SkPdfObjectType,
  kObjectDictionaryEncryptionCommonDictionary_SkPdfObjectType,
  kObjectDictionaryFDFCatalogDictionary_SkPdfObjectType,
  kObjectDictionaryFDFDictionary_SkPdfObjectType,
  kObjectDictionaryFDFFieldDictionary_SkPdfObjectType,
  kObjectDictionaryFDFFileAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryFDFNamedPageReferenceDictionary_SkPdfObjectType,
  kObjectDictionaryFDFPageDictionary_SkPdfObjectType,
  kObjectDictionaryFDFTemplateDictionary_SkPdfObjectType,
  kObjectDictionaryFDFTrailerDictionary_SkPdfObjectType,
  kObjectDictionaryFieldDictionary_SkPdfObjectType,
  kObjectDictionaryFileAttachmentAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryFileSpecificationDictionary_SkPdfObjectType,
  kObjectDictionaryFileTrailerDictionary_SkPdfObjectType,
  kObjectDictionaryFontDescriptorDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryCIDFontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryTrueTypeFontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryType0FontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryType1FontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryType1FontDictionaryMultiMasterFontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionaryType1FontDictionary__End_SkPdfObjectType,
  kObjectDictionaryFontDictionaryType3FontDictionary_SkPdfObjectType,
  kObjectDictionaryFontDictionary__End_SkPdfObjectType,
  kObjectDictionaryFormFieldActionsDictionary_SkPdfObjectType,
  kObjectDictionaryFreeTextAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryFunctionCommonDictionary_SkPdfObjectType,
  kObjectDictionaryGoToActionDictionary_SkPdfObjectType,
  kObjectDictionaryGraphicsStateDictionary_SkPdfObjectType,
  kObjectDictionaryGroupAttributesDictionary_SkPdfObjectType,
  kObjectDictionaryHideActionDictionary_SkPdfObjectType,
  kObjectDictionaryIccProfileStreamDictionary_SkPdfObjectType,
  kObjectDictionaryIconFitDictionary_SkPdfObjectType,
  kObjectDictionaryImportDataActionDictionary_SkPdfObjectType,
  kObjectDictionaryInkAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryInlineLevelStructureElementsDictionary_SkPdfObjectType,
  kObjectDictionaryInteractiveFormDictionary_SkPdfObjectType,
  kObjectDictionaryJavascriptActionDictionary_SkPdfObjectType,
  kObjectDictionaryJavascriptDictionary_SkPdfObjectType,
  kObjectDictionaryJbig2DecodeFilterDictionary_SkPdfObjectType,
  kObjectDictionaryLabColorSpaceDictionary_SkPdfObjectType,
  kObjectDictionaryLaunchActionDictionary_SkPdfObjectType,
  kObjectDictionaryLineAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryListAttributeDictionary_SkPdfObjectType,
  kObjectDictionaryLzwdecodeAndFlatedecodeFiltersDictionary_SkPdfObjectType,
  kObjectDictionaryMacOsFileInformationDictionary_SkPdfObjectType,
  kObjectDictionaryMarkInformationDictionary_SkPdfObjectType,
  kObjectDictionaryMarkedContentReferenceDictionary_SkPdfObjectType,
  kObjectDictionaryMarkupAnnotationsDictionary_SkPdfObjectType,
  kObjectDictionaryMetadataStreamDictionary_SkPdfObjectType,
  kObjectDictionaryMovieActionDictionary_SkPdfObjectType,
  kObjectDictionaryMovieActivationDictionary_SkPdfObjectType,
  kObjectDictionaryMovieAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryMovieDictionary_SkPdfObjectType,
  kObjectDictionaryNameDictionary_SkPdfObjectType,
  kObjectDictionaryNameTreeNodeDictionary_SkPdfObjectType,
  kObjectDictionaryNamedActionsDictionary_SkPdfObjectType,
  kObjectDictionaryNumberTreeNodeDictionary_SkPdfObjectType,
  kObjectDictionaryObjectReferenceDictionary_SkPdfObjectType,
  kObjectDictionaryOpiVersionDictionary_SkPdfObjectType,
  kObjectDictionaryOutlineDictionary_SkPdfObjectType,
  kObjectDictionaryOutlineItemDictionary_SkPdfObjectType,
  kObjectDictionaryPDF_XOutputIntentDictionary_SkPdfObjectType,
  kObjectDictionaryPSXobjectDictionary_SkPdfObjectType,
  kObjectDictionaryPageLabelDictionary_SkPdfObjectType,
  kObjectDictionaryPageObjectActionsDictionary_SkPdfObjectType,
  kObjectDictionaryPageObjectDictionary_SkPdfObjectType,
  kObjectDictionaryPagePieceDictionary_SkPdfObjectType,
  kObjectDictionaryPageTreeNodeDictionary_SkPdfObjectType,
  kObjectDictionaryPopUpAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryPrinterMarkAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryPrinterMarkFormDictionary_SkPdfObjectType,
  kObjectDictionaryRadioButtonFieldDictionary_SkPdfObjectType,
  kObjectDictionaryReferenceDictionary_SkPdfObjectType,
  kObjectDictionaryRemoteGoToActionDictionary_SkPdfObjectType,
  kObjectDictionaryResetFormActionDictionary_SkPdfObjectType,
  kObjectDictionaryResourceDictionary_SkPdfObjectType,
  kObjectDictionaryRubberStampAnnotationDictionary_SkPdfObjectType,
  kObjectDictionarySeparationDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType1ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType2ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType3ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType4ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType5ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionaryType6ShadingDictionary_SkPdfObjectType,
  kObjectDictionaryShadingDictionary__End_SkPdfObjectType,
  kObjectDictionarySignatureDictionary_SkPdfObjectType,
  kObjectDictionarySoftMaskDictionary_SkPdfObjectType,
  kObjectDictionarySoftMaskImageDictionary_SkPdfObjectType,
  kObjectDictionarySoundActionDictionary_SkPdfObjectType,
  kObjectDictionarySoundAnnotationDictionary_SkPdfObjectType,
  kObjectDictionarySoundObjectDictionary_SkPdfObjectType,
  kObjectDictionarySourceInformationDictionary_SkPdfObjectType,
  kObjectDictionarySquareOrCircleAnnotation_SkPdfObjectType,
  kObjectDictionaryStandardSecurityHandlerDictionary_SkPdfObjectType,
  kObjectDictionaryStandardStructureDictionary_SkPdfObjectType,
  kObjectDictionaryStreamCommonDictionary_SkPdfObjectType,
  kObjectDictionaryStructureElementAccessDictionary_SkPdfObjectType,
  kObjectDictionaryStructureElementDictionary_SkPdfObjectType,
  kObjectDictionaryStructureTreeRootDictionary_SkPdfObjectType,
  kObjectDictionarySubmitFormActionDictionary_SkPdfObjectType,
  kObjectDictionaryTableAttributesDictionary_SkPdfObjectType,
  kObjectDictionaryTextAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryTextFieldDictionary_SkPdfObjectType,
  kObjectDictionaryThreadActionDictionary_SkPdfObjectType,
  kObjectDictionaryThreadDictionary_SkPdfObjectType,
  kObjectDictionaryTransitionDictionary_SkPdfObjectType,
  kObjectDictionaryTransparencyGroupDictionary_SkPdfObjectType,
  kObjectDictionaryTrapNetworkAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryTrapNetworkAppearanceStreamDictionary_SkPdfObjectType,
  kObjectDictionaryType0FunctionDictionary_SkPdfObjectType,
  kObjectDictionaryType10HalftoneDictionary_SkPdfObjectType,
  kObjectDictionaryType16HalftoneDictionary_SkPdfObjectType,
  kObjectDictionaryType1HalftoneDictionary_SkPdfObjectType,
  kObjectDictionaryType1PatternDictionary_SkPdfObjectType,
  kObjectDictionaryType2FunctionDictionary_SkPdfObjectType,
  kObjectDictionaryType2PatternDictionary_SkPdfObjectType,
  kObjectDictionaryType3FunctionDictionary_SkPdfObjectType,
  kObjectDictionaryType5HalftoneDictionary_SkPdfObjectType,
  kObjectDictionaryType6HalftoneDictionary_SkPdfObjectType,
  kObjectDictionaryURIActionDictionary_SkPdfObjectType,
  kObjectDictionaryURIDictionary_SkPdfObjectType,
  kObjectDictionaryURLAliasDictionary_SkPdfObjectType,
  kObjectDictionaryVariableTextFieldDictionary_SkPdfObjectType,
  kObjectDictionaryViewerPreferencesDictionary_SkPdfObjectType,
  kObjectDictionaryWebCaptureCommandDictionary_SkPdfObjectType,
  kObjectDictionaryWebCaptureCommandSettingsDictionary_SkPdfObjectType,
  kObjectDictionaryWebCaptureDictionary_SkPdfObjectType,
  kObjectDictionaryWebCaptureImageSetDictionary_SkPdfObjectType,
  kObjectDictionaryWebCaptureInformationDictionary_SkPdfObjectType,
  kObjectDictionaryWebCapturePageSetDictionary_SkPdfObjectType,
  kObjectDictionaryWidgetAnnotationDictionary_SkPdfObjectType,
  kObjectDictionaryWindowsLaunchActionDictionary_SkPdfObjectType,
  kObjectDictionaryXObjectDictionary_SkPdfObjectType,
  kObjectDictionaryXObjectDictionaryImageDictionary_SkPdfObjectType,
  kObjectDictionaryXObjectDictionaryType1FormDictionary_SkPdfObjectType,
  kObjectDictionaryXObjectDictionary__End_SkPdfObjectType,
  kObjectDictionary__End_SkPdfObjectType,
  kObjectHexString_SkPdfObjectType,
  kObjectInteger_SkPdfObjectType,
  kObjectName_SkPdfObjectType,
  kObjectNull_SkPdfObjectType,
  kObjectNumber_SkPdfObjectType,
  kObjectReference_SkPdfObjectType,
  kObjectString_SkPdfObjectType,
  kObject__End_SkPdfObjectType,
};

class SkPdfObject;
class SkPdfNull;
class SkPdfBoolean;
class SkPdfInteger;
class SkPdfNumber;
class SkPdfName;
class SkPdfReference;
class SkPdfArray;
class SkPdfString;
class SkPdfHexString;
class SkPdfDictionary;
class SkPdfXObjectDictionary;
class SkPdfFontDictionary;
class SkPdfTrueTypeFontDictionary;
class SkPdfStreamCommonDictionary;
class SkPdfLzwdecodeAndFlatedecodeFiltersDictionary;
class SkPdfCcittfaxdecodeFilterDictionary;
class SkPdfJbig2DecodeFilterDictionary;
class SkPdfDctdecodeFilterDictionary;
class SkPdfFileTrailerDictionary;
class SkPdfEncryptionCommonDictionary;
class SkPdfStandardSecurityHandlerDictionary;
class SkPdfCatalogDictionary;
class SkPdfPageTreeNodeDictionary;
class SkPdfPageObjectDictionary;
class SkPdfNameDictionary;
class SkPdfResourceDictionary;
class SkPdfNameTreeNodeDictionary;
class SkPdfNumberTreeNodeDictionary;
class SkPdfFunctionCommonDictionary;
class SkPdfType0FunctionDictionary;
class SkPdfType2FunctionDictionary;
class SkPdfType3FunctionDictionary;
class SkPdfFileSpecificationDictionary;
class SkPdfEmbeddedFileStreamDictionary;
class SkPdfEmbeddedFileParameterDictionary;
class SkPdfMacOsFileInformationDictionary;
class SkPdfGraphicsStateDictionary;
class SkPdfCalgrayColorSpaceDictionary;
class SkPdfCalrgbColorSpaceDictionary;
class SkPdfLabColorSpaceDictionary;
class SkPdfIccProfileStreamDictionary;
class SkPdfDeviceNColorSpaceDictionary;
class SkPdfType1PatternDictionary;
class SkPdfType2PatternDictionary;
class SkPdfShadingDictionary;
class SkPdfType1ShadingDictionary;
class SkPdfType2ShadingDictionary;
class SkPdfType3ShadingDictionary;
class SkPdfType4ShadingDictionary;
class SkPdfType5ShadingDictionary;
class SkPdfType6ShadingDictionary;
class SkPdfImageDictionary;
class SkPdfAlternateImageDictionary;
class SkPdfType1FormDictionary;
class SkPdfGroupAttributesDictionary;
class SkPdfReferenceDictionary;
class SkPdfPSXobjectDictionary;
class SkPdfType1FontDictionary;
class SkPdfType3FontDictionary;
class SkPdfEncodingDictionary;
class SkPdfCIDSystemInfoDictionary;
class SkPdfCIDFontDictionary;
class SkPdfCMapDictionary;
class SkPdfType0FontDictionary;
class SkPdfFontDescriptorDictionary;
class SkPdfCIDFontDescriptorDictionary;
class SkPdfEmbeddedFontStreamDictionary;
class SkPdfType1HalftoneDictionary;
class SkPdfType6HalftoneDictionary;
class SkPdfType10HalftoneDictionary;
class SkPdfType16HalftoneDictionary;
class SkPdfType5HalftoneDictionary;
class SkPdfSoftMaskDictionary;
class SkPdfSoftMaskImageDictionary;
class SkPdfTransparencyGroupDictionary;
class SkPdfViewerPreferencesDictionary;
class SkPdfOutlineDictionary;
class SkPdfOutlineItemDictionary;
class SkPdfPageLabelDictionary;
class SkPdfThreadDictionary;
class SkPdfBeadDictionary;
class SkPdfTransitionDictionary;
class SkPdfAnnotationDictionary;
class SkPdfBorderStyleDictionary;
class SkPdfAppearanceDictionary;
class SkPdfTextAnnotationDictionary;
class SkPdfALinkAnnotationDictionary;
class SkPdfFreeTextAnnotationDictionary;
class SkPdfLineAnnotationDictionary;
class SkPdfSquareOrCircleAnnotation;
class SkPdfMarkupAnnotationsDictionary;
class SkPdfRubberStampAnnotationDictionary;
class SkPdfInkAnnotationDictionary;
class SkPdfPopUpAnnotationDictionary;
class SkPdfFileAttachmentAnnotationDictionary;
class SkPdfSoundAnnotationDictionary;
class SkPdfMovieAnnotationDictionary;
class SkPdfWidgetAnnotationDictionary;
class SkPdfActionDictionary;
class SkPdfAnnotationActionsDictionary;
class SkPdfPageObjectActionsDictionary;
class SkPdfFormFieldActionsDictionary;
class SkPdfDocumentCatalogActionsDictionary;
class SkPdfGoToActionDictionary;
class SkPdfRemoteGoToActionDictionary;
class SkPdfLaunchActionDictionary;
class SkPdfWindowsLaunchActionDictionary;
class SkPdfThreadActionDictionary;
class SkPdfURIActionDictionary;
class SkPdfURIDictionary;
class SkPdfSoundActionDictionary;
class SkPdfMovieActionDictionary;
class SkPdfHideActionDictionary;
class SkPdfNamedActionsDictionary;
class SkPdfInteractiveFormDictionary;
class SkPdfFieldDictionary;
class SkPdfVariableTextFieldDictionary;
class SkPdfAppearanceCharacteristicsDictionary;
class SkPdfCheckboxFieldDictionary;
class SkPdfRadioButtonFieldDictionary;
class SkPdfTextFieldDictionary;
class SkPdfChoiceFieldDictionary;
class SkPdfSignatureDictionary;
class SkPdfSubmitFormActionDictionary;
class SkPdfResetFormActionDictionary;
class SkPdfImportDataActionDictionary;
class SkPdfJavascriptActionDictionary;
class SkPdfFDFTrailerDictionary;
class SkPdfFDFCatalogDictionary;
class SkPdfFDFDictionary;
class SkPdfEncryptedEmbeddedFileStreamDictionary;
class SkPdfJavascriptDictionary;
class SkPdfFDFFieldDictionary;
class SkPdfIconFitDictionary;
class SkPdfFDFPageDictionary;
class SkPdfFDFTemplateDictionary;
class SkPdfFDFNamedPageReferenceDictionary;
class SkPdfFDFFileAnnotationDictionary;
class SkPdfSoundObjectDictionary;
class SkPdfMovieDictionary;
class SkPdfMovieActivationDictionary;
class SkPdfDocumentInformationDictionary;
class SkPdfMetadataStreamDictionary;
class SkPdfComponentsWithMetadataDictionary;
class SkPdfPagePieceDictionary;
class SkPdfApplicationDataDictionary;
class SkPdfStructureTreeRootDictionary;
class SkPdfStructureElementDictionary;
class SkPdfMarkedContentReferenceDictionary;
class SkPdfObjectReferenceDictionary;
class SkPdfStructureElementAccessDictionary;
class SkPdfAttributeObjectDictionary;
class SkPdfMarkInformationDictionary;
class SkPdfArtifactsDictionary;
class SkPdfStandardStructureDictionary;
class SkPdfBlockLevelStructureElementsDictionary;
class SkPdfInlineLevelStructureElementsDictionary;
class SkPdfListAttributeDictionary;
class SkPdfTableAttributesDictionary;
class SkPdfWebCaptureInformationDictionary;
class SkPdfWebCaptureDictionary;
class SkPdfWebCapturePageSetDictionary;
class SkPdfWebCaptureImageSetDictionary;
class SkPdfSourceInformationDictionary;
class SkPdfURLAliasDictionary;
class SkPdfWebCaptureCommandDictionary;
class SkPdfWebCaptureCommandSettingsDictionary;
class SkPdfBoxColorInformationDictionary;
class SkPdfBoxStyleDictionary;
class SkPdfPrinterMarkAnnotationDictionary;
class SkPdfPrinterMarkFormDictionary;
class SkPdfSeparationDictionary;
class SkPdfPDF_XOutputIntentDictionary;
class SkPdfTrapNetworkAnnotationDictionary;
class SkPdfTrapNetworkAppearanceStreamDictionary;
class SkPdfOpiVersionDictionary;
class SkPdfMultiMasterFontDictionary;

#endif  // __DEFINED__SkPdfEnums