Configuration types:
1- Pre-Build
2- Linker-time
3- Post-Build

1- Pre-Build: has an advantage over the post Build in two cases(both must be true). 
                   1-The component must not exist in the project more then once.
				   2-  There must be no expected Changes that take place in the run Time
2- Post-Build: has a big advantage over the Pre-Build configuration in the same two cases.
				   1- It is pratical if the prooject has multible elements or the S.W component.
				   2- It can be changed easyly during Run Time.
				   
Pre-Build configuration is used usually to save memory. If the different variables in the S.W component can be 
known before the run time then any other possiblities can be an unnecessary memory that won`t be used by any chamce.