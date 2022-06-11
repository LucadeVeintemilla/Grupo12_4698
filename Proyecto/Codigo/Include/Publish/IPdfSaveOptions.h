#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "SaveFormat.h"
#include "PrintingPageType.h"
#include "PdfCompliance.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Drawing/Imaging/ImageFormat.h"
#include "PdfCompressionCore.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "PdfOptimizationType.h"
#include "GridlineType.h"
#include "TextCrossType.h"
#include "PdfCustomPropertiesExport.h"
#include "EmfRenderSetting.h"
#include "DefaultEditLanguage.h"
#include "PdfFontEncoding.h"
#include "ISaveOptions.h"

namespace Aspose {
	namespace Cells {
		enum SaveFormat;
		enum PrintingPageType;
		enum GridlineType;
		enum TextCrossType;
		enum EmfRenderSetting;
		enum DefaultEditLanguage;
	}
}
namespace Aspose {
	namespace Cells {
		namespace Rendering {
			class IPdfBookmarkEntry;
			enum PdfCompliance;
			enum PdfCompressionCore;
			enum PdfOptimizationType;
			enum PdfCustomPropertiesExport;
			class IIPageSavingCallback;
			enum PdfFontEncoding;
		}
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents the options for saving pdf file.
			/// </summary>
	class ASPOSE_CELLS_API IPdfSaveOptions : virtual public Aspose::Cells::ISaveOptions
	{
		public:
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual Aspose::Cells::PrintingPageType GetPrintingPageType()=0;
			/// <summary>
			/// Indicates which pages will not be printed.
			/// </summary>
			 virtual void SetPrintingPageType(Aspose::Cells::PrintingPageType value)=0;
			/// <summary>
			/// True to embed true type fonts. 
			/// Affects only ASCII characters 32-127.
			/// Fonts for character codes greater than 127 are always embedded.
			/// Fonts are always embedded for PDF/A-1a, PDF/A-1b standard.
			/// Default is true.
			/// </summary>
			 virtual bool GetEmbedStandardWindowsFonts()=0;
			/// <summary>
			/// True to embed true type fonts. 
			/// Affects only ASCII characters 32-127.
			/// Fonts for character codes greater than 127 are always embedded.
			/// Fonts are always embedded for PDF/A-1a, PDF/A-1b standard.
			/// Default is true.
			/// </summary>
			 virtual void SetEmbedStandardWindowsFonts(bool value)=0;
			/// <summary>
			/// Gets the <see cref="IPdfBookmarkEntry" >PdfBookmarkEntry</see>
			///  object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IPdfBookmarkEntry> 		GetIPdfBookmarkEntry()=0;
			/// <summary>
			/// Sets the <see cref="IPdfBookmarkEntry" >PdfBookmarkEntry</see>
			///  object.
			/// </summary>
			 virtual void 		SetIPdfBookmarkEntry(intrusive_ptr<Aspose::Cells::Rendering::IPdfBookmarkEntry> value)=0;
			/// <summary>
			/// Workbook converts to pdf will according to PdfCompliance in this property.
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfCompliance GetCompliance()=0;
			/// <summary>
			/// Workbook converts to pdf will according to PdfCompliance in this property.
			/// </summary>
			 virtual void SetCompliance(Aspose::Cells::Rendering::PdfCompliance value)=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
			/// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetDefaultFont()=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set the DefaultFont such as MingLiu or MS Gothic to show these characters.
			/// If this property is not set, Aspose.Cells will use system default font to show these unicode characters.
			/// </summary>
			 virtual void SetDefaultFont(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set this to true to try to use workbook's default font to show these characters first.
			/// </summary>
			/// <remarks>
			/// Default is true.
			/// </remarks>
			 virtual bool GetCheckWorkbookDefaultFont()=0;
			/// <summary>
			/// When characters in the Excel are unicode and not be set with correct font in cell style,
			/// They may appear as block in pdf,image.
			/// Set this to true to try to use workbook's default font to show these characters first.
			/// </summary>
			/// <remarks>
			/// Default is true.
			/// </remarks>
			 virtual void SetCheckWorkbookDefaultFont(bool value)=0;
			/// <summary>
			/// If OnePagePerSheet is true , all content of one sheet will output to only one page in result. 
			/// The paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual bool GetOnePagePerSheet()=0;
			/// <summary>
			/// If OnePagePerSheet is true , all content of one sheet will output to only one page in result. 
			/// The paper size of pagesetup will be invalid, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual void SetOnePagePerSheet(bool value)=0;
			/// <summary>
			/// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result. 
			/// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual bool GetAllColumnsInOnePagePerSheet()=0;
			/// <summary>
			/// If AllColumnsInOnePagePerSheet is true , all column content of one sheet will output to only one page in result. 
			/// The width of paper size of pagesetup will be ignored, and the other settings of pagesetup 
			/// will still take effect.
			/// </summary>
			 virtual void SetAllColumnsInOnePagePerSheet(bool value)=0;
			/// <summary>
			/// Represents the image type when converting the chart and shape .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> GetImageType()=0;
			/// <summary>
			/// Represents the image type when converting the chart and shape .
			/// </summary>
			 virtual void SetImageType(intrusive_ptr<Aspose::Cells::Systems::Drawing::Imaging::ImageFormat> value)=0;
			/// <summary>
			/// Indicates whether calculate formulas before saving pdf file.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual bool GetCalculateFormula()=0;
			/// <summary>
			/// Indicates whether calculate formulas before saving pdf file.
			/// </summary>
			/// <remarks>
			/// The default value is false.
			/// </remarks>
			 virtual void SetCalculateFormula(bool value)=0;
			/// <summary>
			/// Indicate the compression algorithm 
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfCompressionCore GetPdfCompression()=0;
			/// <summary>
			/// Indicate the compression algorithm 
			/// </summary>
			 virtual void SetPdfCompression(Aspose::Cells::Rendering::PdfCompressionCore value)=0;
			/// <summary>
			/// Indicates whether check font compatibility for every character in text.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// Disable this property may give better performance.
			/// But when the default or specified font of text/character cannot be used to render it,
			/// unreadable characters(such as block) maybe occur in the generated pdf.
			/// For such situation user should keep this property as true so that
			/// alternative font can be searched and used to render the text instead;
			/// </remarks>
			 virtual bool GetCheckFontCompatibility()=0;
			/// <summary>
			/// Indicates whether check font compatibility for every character in text.
			/// </summary>
			/// <remarks>
			/// The default value is true.
			/// Disable this property may give better performance.
			/// But when the default or specified font of text/character cannot be used to render it,
			/// unreadable characters(such as block) maybe occur in the generated pdf.
			/// For such situation user should keep this property as true so that
			/// alternative font can be searched and used to render the text instead;
			/// </remarks>
			 virtual void SetCheckFontCompatibility(bool value)=0;
			/// <summary>
			/// Sets desired PPI(pixels per inch) of resample images and jpeg quality  
			/// All images will be converted to JPEG with the specified quality setting, 
			/// and images that are greater than the specified PPI (pixels per inch) will be resampled.
			/// </summary>
			/// <param name="desiredPPI" >Desired pixels per inch. 220 high quality. 150 screen quality. 96 email quality.</param>
			/// <param name="jpegQuality" >0 - 100% JPEG quality.</param>
			 virtual void SetImageResample(Aspose::Cells::Systems::Int32 desiredPPI , Aspose::Cells::Systems::Int32 jpegQuality)=0;
			/// <summary>
			///  Gets the 0-based index of the first page to save.
			/// </summary>
			/// <remarks>
			/// Default is 0.
			/// </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetPageIndex()=0;
			/// <summary>
			///  Sets the 0-based index of the first page to save.
			/// </summary>
			/// <remarks>
			/// Default is 0.
			/// </remarks>
			 virtual void SetPageIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets the number of pages to save.
			/// </summary>
			/// <remarks>
			///  Default is System.Int32.MaxValue which means all pages will be rendered..
			///  </remarks>
			 virtual Aspose::Cells::Systems::Int32 GetPageCount()=0;
			/// <summary>
			///  Sets the number of pages to save.
			/// </summary>
			/// <remarks>
			///  Default is System.Int32.MaxValue which means all pages will be rendered..
			///  </remarks>
			 virtual void SetPageCount(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			///  Gets the time of generating the pdf document.
			/// </summary>
			/// <remarks>
			///  if it is not be set, it will be the time of generating the pdf.
			///  </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetCreatedTime()=0;
			/// <summary>
			///  Sets the time of generating the pdf document.
			/// </summary>
			/// <remarks>
			///  if it is not be set, it will be the time of generating the pdf.
			///  </remarks>
			 virtual void SetCreatedTime(intrusive_ptr<Aspose::Cells::Systems::DateTime> value)=0;
			/// <summary>
			/// Gets producer of generated pdf document.
			/// </summary>
			/// <remarks>
			/// If the value is null, or a valid LICENSE is not set, string Aspose.Cells vVERSION will be used.
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetProducer()=0;
			/// <summary>
			/// Sets producer of generated pdf document.
			/// </summary>
			/// <remarks>
			/// If the value is null, or a valid LICENSE is not set, string Aspose.Cells vVERSION will be used.
			/// </remarks>
			 virtual void SetProducer(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets pdf optimization type.
			/// </summary>
			/// <remarks>
			/// Default value is <see cref="PdfOptimizationType.Standard" />
			/// </remarks>
			 virtual Aspose::Cells::Rendering::PdfOptimizationType GetOptimizationType()=0;
			/// <summary>
			/// Sets pdf optimization type.
			/// </summary>
			/// <remarks>
			/// Default value is <see cref="PdfOptimizationType.Standard" />
			/// </remarks>
			 virtual void SetOptimizationType(Aspose::Cells::Rendering::PdfOptimizationType value)=0;
			/// <summary>
			/// Indicates whether only substitute the font of character when the cell font is not compatibility for it.
			/// </summary>
			/// <remarks>
			/// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
			/// </remarks>
			 virtual bool IsFontSubstitutionCharGranularity()=0;
			/// <summary>
			/// Indicates whether only substitute the font of character when the cell font is not compatibility for it.
			/// </summary>
			/// <remarks>
			/// Default is false. We will try default font of Workbook and PdfSaveOption/system for cell font first.
			/// </remarks>
			 virtual void SetFontSubstitutionCharGranularity(bool value)=0;
			/// <summary>
			///  Gets gridline type.
			/// </summary>
			/// <remarks>
			///  Default is Dotted type.
			///  </remarks>
			 virtual Aspose::Cells::GridlineType GetGridlineType()=0;
			/// <summary>
			///  Sets gridline type.
			/// </summary>
			/// <remarks>
			///  Default is Dotted type.
			///  </remarks>
			 virtual void SetGridlineType(Aspose::Cells::GridlineType value)=0;
			/// <summary>
			/// Gets displaying text type when the text width is larger than cell width.
			/// </summary>
			 virtual Aspose::Cells::TextCrossType GetTextCrossType()=0;
			/// <summary>
			/// Sets displaying text type when the text width is larger than cell width.
			/// </summary>
			 virtual void SetTextCrossType(Aspose::Cells::TextCrossType value)=0;
			/// <summary>
			/// Indicates if you need to hide the error while rendering.
			/// The error can be error in shape, image, chart rendering, etc.
			/// </summary>
			 virtual bool GetIgnoreError()=0;
			/// <summary>
			/// Indicates if you need to hide the error while rendering.
			/// The error can be error in shape, image, chart rendering, etc.
			/// </summary>
			 virtual void SetIgnoreError(bool value)=0;
			/// <summary>
			/// Indicates whether to output a blank page when there is nothing to print.
			/// </summary>
			/// <remarks>
			/// Default is true.
			/// </remarks>
			 virtual bool GetOutputBlankPageWhenNothingToPrint()=0;
			/// <summary>
			/// Indicates whether to output a blank page when there is nothing to print.
			/// </summary>
			/// <remarks>
			/// Default is true.
			/// </remarks>
			 virtual void SetOutputBlankPageWhenNothingToPrint(bool value)=0;
			/// <summary>
			/// Gets a value determining the way <see cref="CustomDocumentPropertyCollection" />
			///  are exported to PDF file. Default value is None.
			/// </summary>
			 virtual Aspose::Cells::Rendering::PdfCustomPropertiesExport GetCustomPropertiesExport()=0;
			/// <summary>
			/// Sets a value determining the way <see cref="CustomDocumentPropertyCollection" />
			///  are exported to PDF file. Default value is None.
			/// </summary>
			 virtual void SetCustomPropertiesExport(Aspose::Cells::Rendering::PdfCustomPropertiesExport value)=0;
			/// <summary>
			/// Gets a value determining whether or not to export document structure.
			/// </summary>
			 virtual bool GetExportDocumentStructure()=0;
			/// <summary>
			/// Sets a value determining whether or not to export document structure.
			/// </summary>
			 virtual void SetExportDocumentStructure(bool value)=0;
			/// <summary>
			/// Control/Indicate progress of page saving process.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Rendering::IIPageSavingCallback> 		GetIPageSavingCallback()=0;
			/// <summary>
			/// Control/Indicate progress of page saving process.
			/// </summary>
			 virtual void 		SetIPageSavingCallback(intrusive_ptr<Aspose::Cells::Rendering::IIPageSavingCallback> value)=0;
			/// <summary>
			/// Setting for rendering Emf metafile.
			/// </summary>
			/// <remarks>
			/// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records. 
			/// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
			/// When <see cref="EmfRenderSetting.EmfPlusPrefer" />
			///  is set, then EMF+ records will be parsed while rendering to pdf, otherwise only EMF records will be parsed.
			/// Default value is <see cref="EmfRenderSetting.EmfOnly" />
			/// .
			/// </remarks>
			 virtual Aspose::Cells::EmfRenderSetting GetEmfRenderSetting()=0;
			/// <summary>
			/// Setting for rendering Emf metafile.
			/// </summary>
			/// <remarks>
			/// EMF metafiles identified as "EMF+ Dual" can contain both EMF+ records and EMF records. 
			/// Either type of record can be used to render the image, only EMF+ records, or only EMF records.
			/// When <see cref="EmfRenderSetting.EmfPlusPrefer" />
			///  is set, then EMF+ records will be parsed while rendering to pdf, otherwise only EMF records will be parsed.
			/// Default value is <see cref="EmfRenderSetting.EmfOnly" />
			/// .
			/// </remarks>
			 virtual void SetEmfRenderSetting(Aspose::Cells::EmfRenderSetting value)=0;
			/// <summary>
			/// Indicate whether the window's title bar should display the document title.
			/// </summary>
			/// <remarks>
			/// If false, the title bar should instead display the name of the PDF file.
			/// Default value is false.
			/// </remarks>
			 virtual bool GetDisplayDocTitle()=0;
			/// <summary>
			/// Indicate whether the window's title bar should display the document title.
			/// </summary>
			/// <remarks>
			/// If false, the title bar should instead display the name of the PDF file.
			/// Default value is false.
			/// </remarks>
			 virtual void SetDisplayDocTitle(bool value)=0;
			/// <summary>
			/// Gets default edit language.
			/// </summary>
			/// <remarks>
			/// It may display/render different layouts for text paragraph when different edit languages is set.
			/// Default is <see cref="DefaultEditLanguage.Auto" />
			/// .
			/// </remarks>
			 virtual Aspose::Cells::DefaultEditLanguage GetDefaultEditLanguage()=0;
			/// <summary>
			/// Sets default edit language.
			/// </summary>
			/// <remarks>
			/// It may display/render different layouts for text paragraph when different edit languages is set.
			/// Default is <see cref="DefaultEditLanguage.Auto" />
			/// .
			/// </remarks>
			 virtual void SetDefaultEditLanguage(Aspose::Cells::DefaultEditLanguage value)=0;
			/// <summary>
			/// Gets embedded font encoding in pdf.
			/// </summary>
			/// <remarks>
			/// Default value is <see cref="PdfFontEncoding.Identity" />
			/// </remarks>
			 virtual Aspose::Cells::Rendering::PdfFontEncoding GetFontEncoding()=0;
			/// <summary>
			/// Sets embedded font encoding in pdf.
			/// </summary>
			/// <remarks>
			/// Default value is <see cref="PdfFontEncoding.Identity" />
			/// </remarks>
			 virtual void SetFontEncoding(Aspose::Cells::Rendering::PdfFontEncoding value)=0;

	};
}
}
