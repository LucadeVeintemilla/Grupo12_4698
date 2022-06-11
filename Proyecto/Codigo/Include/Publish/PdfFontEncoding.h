#pragma once
namespace Aspose {
namespace Cells {
namespace Rendering {
			/// <summary>
			/// Represents pdf embedded font encoding.
			/// </summary>
	enum PdfFontEncoding 

	{

			/// <summary>
			/// Represents use Identity-H encoding for all embedded fonts in pdf.
			/// </summary>
			PdfFontEncoding_Identity ,
			/// <summary>
			/// Represents prefer to use WinAnsiEncoding for TrueType fonts with characters 32-127,
			/// otherwise, Identity-H encoding will be used for embedded fonts in pdf.
			/// </summary>
			PdfFontEncoding_AnsiPrefer ,
	};


}

}

}
