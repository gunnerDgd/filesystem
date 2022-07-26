#pragma once

#define synapse_filesystem_opaque_declare(pName)\
	typedef struct pName		\
	{							\
		void* opaque;			\
		void* opaque_additional;\
	} pName;

#define synapse_filesystem_opaque_reference(pName)\
	(pName.opaque)

#define synapse_filesystem_opaque_cast(pObject, pType)\
	((pType)(pObject.opaque))

#define synapse_filesystem_opaque_init(pObject, pName, pValue)\
	pObject pName = { .opaque = pValue }