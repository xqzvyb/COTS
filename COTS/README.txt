Configuration types:
1- Pre-Build
2- Linker-time
3- Post-Build

1- Pre-Build: has an advantage over the post Build in two cases(both must be true). 
				 1-The component must not exist in the project more then once.
				 2- There must be no expected Changes that take place in the run Time
2- Post-Build: has a big advantage over the Pre-Build configuration in the same two cases.
				 1- It is practical if the project has multiple elements or the S.W components.
				 2- Any changes that depend on the user actions(run time changes) are supported.
				   
Pre-Build configuration is used usually to save memory. If the different variables in the S.W component can be 
known before the run time then any other possiblities can be an unnecessary memory that won`t be used by any chamce.

In this driver the Pre and the Post build configurations were used each where necessary for the sake of practice!
The Linker time configuration was not used in this frame.
