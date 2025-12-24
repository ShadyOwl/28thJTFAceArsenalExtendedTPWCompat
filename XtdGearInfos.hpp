#define PATTERN_UNIFORM(name, t,p,g,s,m,c) \
    class name          \
    {                   \
        top = #t;       \
        pants = #p;     \
        sleeves = #s;   \
        gloves = #g;    \
		model = #m      \
        camo = #c;      \
    }; 


#define PATTERN_TPW_ACU(name, c) \
	class name          \
    {                   \
        camo = #c;      \
    }; 

//#define PATTERN_TPW_CARGOPANTS(name, c) \
//    class name          \
//    {                   \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_ICOMBATUNIFORM(name, s,c) \
//    class name          \
//    {                   \
//        sleeves = #s;      \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_BATLLE_BELT(name,  #) \
//    class name          \
//    {                   \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_PLATECARRIER(name, l,c) \
//    class name          \
//    {                   \
//        loadout = #l;     \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_JPC(name, l,b,c) \
//    class name          \
//    {                   \
//        loadout = #l;     \
//        belt = #b;     \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_MARCIRAS(class_name,  l,b,c) \
//    class name          \
//    {                   \
//        loadout = #l;     \
//        bekt = #b;     \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_MMAC(name, l,,b,c) \
//    class name          \
//    {                   \
//        loadout = #l;     \
//        bekt = #b;     \
//        camo = #c;      \
//    }; 
//
//#define PATTERN_TPW_TACVEST(name, c) \
//    class name          \
//    {                   \
//        camo = #c;      \
//    }; 
//
	
class XtdGearInfo
{
	class CfgWeapons
	{
		//////////////////////////////////////////////////////////////////////////////////////////Uniforms
		///////////////////////////////////////////TPW_UNIFORM
		//ADPM
		PATTERN_UNIFORM(TPW_G3_G3_FS_FM_UNIFORM_ADPM,                  G3,G3,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_FS_NG_UNIFORM_ADPM,                  G3,G3,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_FS_MX_UNIFORM_ADPM,                  G3,G3,FS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS_FM_UNIFORM_ADPM,                  G3,G3,RS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS_NG_UNIFORM_ADPM,                  G3,G3,RS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS_MX_UNIFORM_ADPM,                  G3,G3,RS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_FM_UNIFORM_ADPM,                 G3,G3,RS2,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_NG_UNIFORM_ADPM,                 G3,G3,RS2,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_MX_UNIFORM_ADPM,                 G3,G3,RS2,MX,UNIFORM,ADPM)
		
		PATTERN_UNIFORM(TPW_G3_L9_FS_FM_UNIFORM_ADPM,                  G3,L9,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_FS_NG_UNIFORM_ADPM,                  G3,L9,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_FS_MX_UNIFORM_ADPM,                  G3,L9,FS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS_FM_UNIFORM_ADPM,                  G3,L9,RS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS_NG_UNIFORM_ADPM,                  G3,L9,RS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS_MX_UNIFORM_ADPM,                  G3,L9,RS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_FM_UNIFORM_ADPM,                 G3,L9,RS2,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_NG_UNIFORM_ADPM,                 G3,L9,RS2,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_MX_UNIFORM_ADPM,                 G3,L9,RS2,MX,UNIFORM,ADPM)
		
		PATTERN_UNIFORM(TPW_L9_G3_FS_FM_UNIFORM_ADPM,                  L9,G3,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_FS_NG_UNIFORM_ADPM,                  L9,G3,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_FS_MX_UNIFORM_ADPM,                  L9,G3,FS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS_FM_UNIFORM_ADPM,                  L9,G3,RS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS_NG_UNIFORM_ADPM,                  L9,G3,RS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS_MX_UNIFORM_ADPM,                  L9,G3,RS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_FM_UNIFORM_ADPM,                 L9,G3,RS2,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_NG_UNIFORM_ADPM,                 L9,G3,RS2,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_MX_UNIFORM_ADPM,                 L9,G3,RS2,MX,UNIFORM,ADPM)
				
		PATTERN_UNIFORM(TPW_L9_L9_FS_FM_UNIFORM_ADPM,                  L9,L9,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_FS_NG_UNIFORM_ADPM,                  L9,L9,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_FS_MX_UNIFORM_ADPM,                  L9,L9,FS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS_FM_UNIFORM_ADPM,                  L9,L9,RS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS_NG_UNIFORM_ADPM,                  L9,L9,RS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS_MX_UNIFORM_ADPM,                  L9,L9,RS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_FM_UNIFORM_ADPM,                 L9,L9,RS2,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_NG_UNIFORM_ADPM,                 L9,L9,RS2,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_MX_UNIFORM_ADPM,                 L9,L9,RS2,MX,UNIFORM,ADPM)
		
		PATTERN_UNIFORM(TPW_PCU_G3_FS_FM_UNIFORM_ADPM,                 PCU,G3,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_PCU_G3_FS_NG_UNIFORM_ADPM,                 PCU,G3,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_PCU_G3_FS_MX_UNIFORM_ADPM,                 PCU,G3,FS,MX,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_FM_UNIFORM_ADPM,                 PCU,L9,FS,FM,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_NG_UNIFORM_ADPM,                 PCU,L9,FS,NG,UNIFORM,ADPM)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_MX_UNIFORM_ADPM,                 PCU,L9,FS,MX,UNIFORM,ADPM)
		
		//AMCU
		PATTERN_UNIFORM(TPW_G3_G3_FS_FM_UNIFORM_AMCU,                  G3,G3,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_FS_NG_UNIFORM_AMCU,                  G3,G3,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_FS_MX_UNIFORM_AMCU,                  G3,G3,FS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS_FM_UNIFORM_AMCU,                  G3,G3,RS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS_NG_UNIFORM_AMCU,                  G3,G3,RS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS_MX_UNIFORM_AMCU,                  G3,G3,RS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_FM_UNIFORM_AMCU,                 G3,G3,RS2,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_NG_UNIFORM_AMCU,                 G3,G3,RS2,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_G3_RS2_MX_UNIFORM_AMCU,                 G3,G3,RS2,MX,UNIFORM,AMCU)
		
		PATTERN_UNIFORM(TPW_G3_L9_FS_FM_UNIFORM_AMCU,                  G3,L9,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_FS_NG_UNIFORM_AMCU,                  G3,L9,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_FS_MX_UNIFORM_AMCU,                  G3,L9,FS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS_FM_UNIFORM_AMCU,                  G3,L9,RS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS_NG_UNIFORM_AMCU,                  G3,L9,RS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS_MX_UNIFORM_AMCU,                  G3,L9,RS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_FM_UNIFORM_AMCU,                 G3,L9,RS2,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_NG_UNIFORM_AMCU,                 G3,L9,RS2,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_G3_L9_RS2_MX_UNIFORM_AMCU,                 G3,L9,RS2,MX,UNIFORM,AMCU)
		
		PATTERN_UNIFORM(TPW_L9_G3_FS_FM_UNIFORM_AMCU,                  L9,G3,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_FS_NG_UNIFORM_AMCU,                  L9,G3,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_FS_MX_UNIFORM_AMCU,                  L9,G3,FS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS_FM_UNIFORM_AMCU,                  L9,G3,RS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS_NG_UNIFORM_AMCU,                  L9,G3,RS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS_MX_UNIFORM_AMCU,                  L9,G3,RS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_FM_UNIFORM_AMCU,                 L9,G3,RS2,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_NG_UNIFORM_AMCU,                 L9,G3,RS2,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_G3_RS2_MX_UNIFORM_AMCU,                 L9,G3,RS2,MX,UNIFORM,AMCU)
				
		PATTERN_UNIFORM(TPW_L9_L9_FS_FM_UNIFORM_AMCU,                  L9,L9,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_FS_NG_UNIFORM_AMCU,                  L9,L9,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_FS_MX_UNIFORM_AMCU,                  L9,L9,FS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS_FM_UNIFORM_AMCU,                  L9,L9,RS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS_NG_UNIFORM_AMCU,                  L9,L9,RS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS_MX_UNIFORM_AMCU,                  L9,L9,RS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_FM_UNIFORM_AMCU,                 L9,L9,RS2,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_NG_UNIFORM_AMCU,                 L9,L9,RS2,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_L9_L9_RS2_MX_UNIFORM_AMCU,                 L9,L9,RS2,MX,UNIFORM,AMCU)
		
		PATTERN_UNIFORM(TPW_PCU_G3_FS_FM_UNIFORM_AMCU,                 PCU,G3,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_PCU_G3_FS_NG_UNIFORM_AMCU,                 PCU,G3,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_PCU_G3_FS_MX_UNIFORM_AMCU,                 PCU,G3,FS,MX,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_FM_UNIFORM_AMCU,                 PCU,L9,FS,FM,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_NG_UNIFORM_AMCU,                 PCU,L9,FS,NG,UNIFORM,AMCU)
		PATTERN_UNIFORM(TPW_PCU_L9_FS_MX_UNIFORM_AMCU,                 PCU,L9,FS,MX,UNIFORM,AMCU)
		//300BLK
//		PAT
		
		//////////////////////////////////////////////////////////////////////////////////////////TPW_acu_uniform
		//556
		PATTERN_TPW_ACU(TPW_acu_uniform_ADPM, ACU,ADPM)
		PATTERN_TPW_ACU(TPW_acu_uniform_AMCU, ACU,AMCU)
		
		//.300BLK
//		PAT
		
		//////////////////////////////////////////////////////////////////////////////////////////AERO
		//556
//		PA
		
		//.300BLK
//		PAT
		
		//////////////////////////////////////////////////////////////////////////////////////////TROY
		//556
//		PA
		
		//.300BLK
		
		
		
		
		
		
				};
		};