class XtdGearModels
{
	class CfgWeapons
	{
		class TPW_acu_uniform
		{
			author = "TPW";
			options[] = {camo};
			class camo
			{
				label = "Camouflage";
				values = {"ADPM","AMCU"};
			};
		};
	};
};
	
	
	
	
	class CfgWeapons 
	{
		
		////TPW_Uniform
		class TPW_UNIFORM
		{
		label = "[28th JTF][TPW]Uniform";
			author = "TPW";
			options[] = {"top","pants","sleeves","gloves","camo"};
			class top
			{
				label = "Top";
				values[] = {"G3","L9", "PCU"};
				class G3
				{
					label = "G3";
				};
				class L9
				{
					label = "L9";
				};
				class PCU
				{
					label = "PCU"
				};
			};
			class pants
			{
				label = "Pants";
				values[] = {"G3","L9"};
				class G3
				{
					label = "G3";
				};
				class L9
				{
					label = "L9";
				};
			};
			class sleeves
			{
				label = "Sleeves";
				values[] = {"FS","RS","RS2"};
				class FS
				{
					label = "Full Sleeves";
				};
				class RS
				{
					label = "Rolled";
				};
				class RS2
				{
					label = "Partial Roll";
				};
			};
			class gloves
			{
				label = "Gloves";
				values[] = {"FM","MX","NG"};
				class FM
				{
					label = "Firemark";
				};
				class MX
				{
					label = "Mechanix";
				};
				class NG
				{
					label = "No Gloves";
				};
			};
			class camo
			{
				label = "Camo";
				values[] = {"ADPM","AMCU"};
				class ADPM
				{
					label = "ADPM";
				};
				class AMCU
				{
					label = "AMCU";
				};
			};
		};
	};
	
//					class BLK (I am keeping this as a surprise tool that will help us later)
//				{
//					label = "BLK";
//					image = "mcc\Mcc_CORE\data\ui\Gear_MCC_BLK"; 
//				};
//			};

// 				values[] = {"ADPM","AMCU","AMCUF","AMP","AOR1","AOR2","ARID","ARMATA","ATACS","BDC","BLC","BME","BROWN","CADPAT","CCE","CDW","CHIP","CONCAMO","CROPAT","DARK","DCCU","DPCU","DPDU","DPM","EMR","ESE","FLECK","GLC","GPU","GRANITE","GZONE","ICAM","IDPM","IDT","ITMP","JEITAI","JIGSAW","KA2","KDC","KILO","LDF","M05","M09","M09D","M14","M2011","M2015","M81","M90","M98","MAD21","MANDRAKE","MARPAT","MARPATD","MCAM","MCAMA","MCAMD","MCAMF","MCAMT","MLAND","MMPU","MTARN","MTP","MWC","NFP","NFPT","NZMCU","NZMTP","OBH","OCP","OCPF","OD","PAP","PSDC","S2000","SASR","SLOCAM","SURPAT","T07D","TAC","TAN","TAT","TAZ90","TE3","TIGER","TIGERAT","TUNPAT","UNIPAT","US4CES","VEG","VSR","VZ2007","WLP","XINGKONG","Z93"};