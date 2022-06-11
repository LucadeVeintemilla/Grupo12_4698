#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace DigitalSignatures {
			class IDigitalSignature;
		}
	}
}
namespace Aspose {
	namespace Cells {
		namespace Vba {
			class IVbaProject;
			class IVbaModuleCollection;
			class IVbaProjectReferenceCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents the VBA project.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  // Init VBA project.
			/// intrusive_ptr<IVbaProject> vbaProject = workbook->GetIVbaProject();
			/// //Saving the Excel file
			/// workbook->Save(new String("book1.xlsm"));
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IVbaProject : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Sign this VBA project by a DigitalSignature
			/// </summary>
			/// <param name="digitalSignature" >DigitalSignature</param>
			 virtual void 		SignByIIDigitalSignature(intrusive_ptr<Aspose::Cells::DigitalSignatures::IDigitalSignature> digitalSignature)=0;
			/// <summary>
			/// Indicates whether the signature of VBA project is valid or not.
			/// </summary>
			 virtual bool IsValidSigned()=0;
			/// <summary>
			/// Gets certificate raw data if this VBA project is signed.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Byte>> GetCertRawData()=0;
			/// <summary>
			/// Gets the name of the VBA project.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Sets the name of the VBA project.
			/// </summary>
			 virtual void SetName(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Indicates whether VBAcode is signed or not. 
			/// </summary>
			 virtual bool IsSigned()=0;
			/// <summary>
			/// Protects or unprotects this VBA project.
			/// </summary>
			/// <param name="islockedForViewing" >indicates whether locks project for viewing.</param>
			/// <param name="password" >
			/// If the value is null, unprotects this VBA project, otherwise projects the this VBA project.
			/// </param>
			/// <remarks>
			/// If islockedForViewing is true, the password could not be null.
			/// </remarks>
			 virtual void Protect(bool islockedForViewing , intrusive_ptr<Aspose::Cells::Systems::String> password)=0;
			/// <summary>
			/// Indicates whether this VBA project is protected.
			/// </summary>
			 virtual bool IsProtected()=0;
			/// <summary>
			/// Indicates whether this VBA project is locked for viewing.
			/// </summary>
			 virtual bool GetIslockedForViewing()=0;
			/// <summary>
			/// Copy VBA project from other file.
			/// </summary>
			/// <param name="source" />
			/// 
			 virtual void 		Copy(intrusive_ptr<Aspose::Cells::Vba::IVbaProject> source)=0;
			/// <summary>
			/// Gets all <see cref="IVbaModule" />
			///  objects. 
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaModuleCollection> 		GetIVbaModules()=0;
			/// <summary>
			/// Gets all references of VBA project.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Vba::IVbaProjectReferenceCollection> 		GetIReferences()=0;
			/// <summary>
			/// Validates protection password.
			/// </summary>
			/// <param name="password" >the password</param>
			/// <returns>Whether password is the protection password of this VBA project</returns>
			 virtual bool ValidatePassword(intrusive_ptr<Aspose::Cells::Systems::String> password)=0;

	};
}
}
}
