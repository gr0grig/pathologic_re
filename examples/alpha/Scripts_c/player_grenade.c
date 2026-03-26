// @IMPORTS: PlayGlobalSound/4,PlayLoopedGlobalSound/4,GetScene/1,Intersect/4,ReportAttack/2,ReportHit/5,BroadcastPlayerDamage/3,SetPosition/1,FindGeometry/2,FindParticleSystem/2,Sleep/1,SetDeathStateAndRemove/0,CreateRigidBody/6,Attach/1,Hold/0,sync/0,GetPosition/1
// @STRINGS: A:Enable|W:bottle|W:fire_loop|A:FadeIn|A:Next|W:grenade|W:fire|A:AddSource|A:Fade|A:FadeOut|W:smoke|W:phys|A:GetPosition|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty
// @GLOBALS: 0:object:Owner,1:cvector:StartVelocity,2:float:DamageAmount,3:int:DamageType,4:object:,5:object:,6:object:
// @RUN_OP: 0xaa
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_10: op=0x0 vars=object,object,cvector,cvector
// @EVENT_6: op=0xd8 vars=
// @PE: 0xdd,0x140,0x147

task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_object = Obj(); var_7_bool = 0; var_8_object = Obj(); var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_float = 0; var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_float = 0; var_24_object = Obj(); var_25_object = Obj();
	EventDisable(10);
	var_26_object = GlobalVars[6];
	@@var_26_object:Enable((bool)0);
	PlayGlobalSound("bottle", CVector(0.0, 0.0, 0.0), (int)1, (int)300);
	PlayLoopedGlobalSound(var_15_object, "fire_loop", CVector(0.0, 10.0, 0.0), (int)200);
	var_35_bool = var_15_object != 0; //@nn
	if(var_35_bool != 0) {
		@@var_15_object:FadeIn((float)1.0);
	}
	GetScene(var_16_object);
	Intersect(var_2_cvector, (float)300.0, var_18_bool, var_17_object);
	func_229(CVector(0,0,0));
	var_38_cvector = var_20_cvector;
	
Label_31:
	@@var_17_object:Next(var_18_bool, var_19_object);
	var_41_bool = var_18_bool;
	if(var_41_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_object = Obj();
		var_19_object = var_43_object;
		func_234(var_42_cvector, var_43_object);
		var_42_cvector = var_21_cvector;
		var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_21_cvector = var_48_cvector;
		var_20_cvector = var_49_cvector;
		func_315(var_47_float, var_48_cvector, var_49_cvector);
		var_54_float = var_47_float / (float)300.0;
		var_22_float = (float)1.0 - var_54_float;
		var_56_bool = var_22_float < (float)0.4000000059604645;
		if(var_56_bool != 0) {
			var_22_float = 0.4000000059604645;
		}
		var_58_bool = var_22_float > (float)0.800000011920929;
		if(var_58_bool != 0) {
			var_22_float = 1;
		}
		var_59_float = GlobalVars[2];
		var_22_float = var_22_float * var_59_float;
		var_60_float = 0; var_61_object = Obj(); var_62_float = 0; var_63_int = 0;
		var_19_object = var_61_object;
		var_22_float = var_62_float;
		var_64_int = GlobalVars[3];
		var_64_int = var_63_int;
		func_251(var_60_float, var_61_object, var_62_float, var_63_int);
		var_60_float = var_23_float;
		var_117_object = GlobalVars[0];
		var_118_bool = var_19_object != var_117_object;
		if(var_118_bool != 0) {
			var_119_object = GlobalVars[0];
			ReportAttack(var_119_object, var_19_object);
			var_120_object = GlobalVars[0];
			ReportHit(var_19_object, var_120_object, (int)3, var_23_float, var_22_float);
			var_122_object = GlobalVars[0];
			BroadcastPlayerDamage(var_19_object, var_16_object, var_122_object);
		}
		goto Label_31;
	}
	var_17_object = 0;
	SetPosition(var_2_cvector);
	FindGeometry("grenade", var_24_object);
	@@var_24_object:Enable((bool)0);
	FindParticleSystem("fire", var_25_object);
	@@var_25_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(50.0, 0.0, 50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(-50.0, 0.0, 50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(-50.0, 0.0, -50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(50.0, 0.0, -50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(25.0, 0.0, 25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(-25.0, 0.0, 25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(-25.0, 0.0, -25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:AddSource(CVector(25.0, 0.0, -25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_25_object:Enable();
	@@var_25_object:Fade((bool)0);
	var_154_object = GlobalVars[5];
	@@var_154_object:Fade((bool)1);
	Sleep((float)12.0);
	@@var_25_object:Fade();
	var_157_bool = var_15_object != 0; //@nn
	if(var_157_bool != 0) {
		@@var_15_object:FadeOut((float)1.0);
	}
	Sleep((float)2.0);
	SetDeathStateAndRemove();
	return 22;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";
EMIT "Stack[-11] = 0";


task_0_event_6()
{
	SetDeathStateAndRemove();
	sync();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	var_8_cvector = GlobalVars[1];
	var_10_object = GlobalVars[0];
	CreateRigidBody(var_3_object, CVector(0.0, 0.0, 0.0), (int)50, var_8_cvector, CVector(2.0, 2.0, 2.0), var_10_object);
	@@var_3_object:Enable((bool)1);
	var_12_object = GlobalVars[6];
	var_3_object = var_12_object;
	GlobalVars[6] = var_12_object;
	FindParticleSystem("smoke", var_4_object);
	@@var_4_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_4_object:Enable((bool)1);
	@@var_4_object:Fade((bool)0);
	var_19_object = GlobalVars[5];
	var_4_object = var_19_object;
	GlobalVars[5] = var_19_object;
	FindGeometry("grenade", var_5_object);
	@@var_5_object:Enable((bool)1);
	Attach(var_3_object);
	
Label_209:
	Hold();
	goto Label_209;
}
EMIT "Return(); Pop(6)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_320(var_100_float, var_101_float, var_102_float)
{
	var_105_bool = var_101_float < var_102_float;
	if(var_105_bool != 0) {
		var_101_float = var_100_float;
	} else {
		var_102_float = var_100_float;
	}
	return 0;
	
}


func_229(var_38_cvector)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	var_40_cvector = var_38_cvector;
	return 2;
}


func_327(var_110_float, var_111_float, var_112_float, var_113_float)
{
	var_114_bool = var_111_float < var_112_float;
	if(var_114_bool != 0) {
		var_112_float = var_110_float;
		return 0;
	}
	var_115_bool = var_111_float > var_113_float;
	if(var_115_bool != 0) {
		var_113_float = var_110_float;
		return 0;
	}
	var_111_float = var_110_float;
	return 0;
}


func_234(var_42_cvector, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0);
	@@var_43_object:GetPosition(var_45_cvector);
	var_45_cvector = var_42_cvector;
	return 2;
}


func_239(var_77_bool, var_78_object, var_79_string)
{
	var_80_bool = 0; var_81_bool = 0;
	var_84_bool = IsFuncExist(var_78_object, "HasProperty", (int)2);
	var_85_bool = var_84_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_77_bool = 0;
		return 2;
	}
	@@var_78_object:HasProperty(var_79_string, var_81_bool);
	var_81_bool = var_77_bool;
	return 2;
}


func_251(var_60_float, var_61_object, var_62_float, var_63_int)
{
	var_65_int = 0; var_66_string = ""; var_67_int = 0; var_68_float = 0; var_69_float = 0; var_70_float = 0; var_71_int = 0; var_72_string = ""; var_73_int = 0; var_74_float = 0; var_75_float = 0; var_76_float = 0;
	var_77_bool = 0; var_78_object = Obj(); var_79_string = "";
	var_61_object = var_78_object;
	func_239(var_77_bool, var_78_object, "health");
	var_86_bool = var_77_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_60_float = 0.0;
		return 12;
	}
	var_87_bool = 0; var_88_object = Obj(); var_89_string = "";
	var_61_object = var_88_object;
	func_239(var_87_bool, var_88_object, "armor");
	var_90_bool = var_87_bool == 0; //@nz
	if(var_90_bool != 0) {
		var_71_int = 0;
	} else {
			@@var_61_object:GetProperty("armor", var_71_int);
	}
	var_92_string = ""; var_93_int = 0;
	var_63_int = var_93_int;
	func_221(var_92_string, var_93_int);
	var_72_string = "armor_" + var_92_string;
	var_96_bool = 0; var_97_object = Obj(); var_98_string = "";
	var_61_object = var_97_object;
	var_72_string = var_98_string;
	func_239(var_96_bool, var_97_object, var_98_string);
	var_99_bool = var_96_bool == 0; //@nz
	if(var_99_bool != 0) {
		var_73_int = 0;
	} else {
		@@var_61_object:GetProperty(var_72_string, var_73_int);

	}
	var_100_float = 0; var_101_float = 0; var_102_float = 0;
	var_103_int = var_71_int + var_73_int;
	var_101_float = var_103_int / (float)100.0;
	func_320(var_100_float, var_101_float, (float)1);
	var_100_float = var_74_float;
	@@var_61_object:GetProperty("health", var_75_float);
	var_108_int = (int)1 - var_74_float;
	var_76_float = var_62_float * var_108_int;
	var_110_float = 0; var_111_float = 0; var_112_float = 0; var_113_float = 0;
	var_111_float = var_75_float - var_76_float;
	func_327(var_110_float, var_111_float, (float)0, (float)1);
	@@var_61_object:SetProperty("health", var_110_float);
	var_76_float = var_60_float;
	return 12;
	
}


func_315(var_47_float, var_48_cvector, var_49_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_51_cvector = var_49_cvector - var_48_cvector;
	var_52_int = var_51_cvector | var_51_cvector;
	var_47_float = sqrt(var_52_int);
	return 2;
}


func_221(var_92_string, var_93_int)
{
	var_95_bool = var_93_int == (int)1;
	if(var_95_bool != 0) {
		var_92_string = "fire";
		return 0;
	}
	var_92_string = "phys";
	return 0;
}


