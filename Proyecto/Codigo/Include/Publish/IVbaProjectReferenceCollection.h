#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose{
namespace Cells{
		namespace Vba {
			class IVbaProjectReferenceCollection;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Vba{
			/// <summary>
			/// Represents all referneces of VBA project.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
			/// 
			/// //Instantiating a Workbook object
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			///  // Init VBA project.
			/// intrusive_ptr<IVbaProject> vbaProject = workbook->GetIVbaProject();
			/// // Add vba project reference
			/// vbaProject->GetIReferences()->AddRegisteredReference(new String("stdole"), new String("*\\G{00020430-0000-0000-C000-000000000046}#2.0#0#C:\\Windows\\system32\\stdole2.tlb#OLE Automation"));
			/// //Saving the Excel file
			/// workbook->Save(new String("book1.xlsm"));
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IVbaProjectReferenceCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Add a reference to an Automation type library.
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="libid" >The identifier of an Automation type library.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 AddRegisteredReference(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> libid)=0;
			/// <summary>
			///  Add a reference to a twiddled type library and its extended type library.
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="libid" >The identifier of an Automation type library.</param>
			/// <param name="twiddledlibid" >The identifier of a twiddled type library</param>
			/// <param name="extendedLibid" >The identifier of an extended type library</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 AddControlRefrernce(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> libid , intrusive_ptr<Aspose::Cells::Systems::String> twiddledlibid , intrusive_ptr<Aspose::Cells::Systems::String> extendedLibid)=0;
			/// <summary>
			/// Adds a reference to an external VBA project. 
			/// </summary>
			/// <param name="name" >The name of reference.</param>
			/// <param name="absoluteLibid" >The referenced VBA project's identifier with an absolute path.</param>
			/// <param name="relativeLibid" >The referenced VBA project's identifier with an relative path.</param>
			/// <returns/>
			/// 
			 virtual Aspose::Cells::Systems::Int32 AddProjectRefrernce(intrusive_ptr<Aspose::Cells::Systems::String> name , intrusive_ptr<Aspose::Cells::Systems::String> absoluteLibid , intrusive_ptr<Aspose::Cells::Systems::String> relativeLibid)=0;
			/// <summary>
			/// Copies references from other VBA project.
			/// </summary>
			/// <param name="source" >The source references.</param>
			 virtual void 		Copy(intrusive_ptr<Aspose::Cells::Vba::IVbaProjectReferenceCollection> source)=0;

	};
}
}
}
