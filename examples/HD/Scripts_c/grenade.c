// @IMPORTS: Trace/1,PlayGlobalSound/4,PlayLoopedGlobalSound/4,Intersect/4,ReportHit/5,SetPosition/1,FindGeometry/2,FindParticleSystem/2,Sleep/1,RemoveActor/1,CreateRigidBody/6,Attach/1,Hold/0,GetPosition/1,IsPlayerActor/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2
// @STRINGS: W:on collision|A:Enable|W:bottle|W:fire_loop|A:FadeIn|A:Next|W:Hit: |W:grenade|W:grenadefire|W:Can't find fire particle system|A:AddSource|A:Fade|A:FadeOut|W:smoke|W:bullet|W:phys|A:GetPosition|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:add
// @GLOBALS: 0:object:Owner,1:cvector:StartVelocity,2:float:DamageAmount,3:int:DamageType,4:object:,5:object:
// @RUN_OP: 0xb0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_10: op=0x0 vars=object,object,cvector,cvector
// @EVENT_6: op=0xde vars=
// @PE: 0xe6,0x163,0x16a

task_0_event_10(var_0_object, var_1_object, var_2_cvector, var_3_cvector)
{
	var_4_object = Obj(); var_5_object = Obj(); var_6_bool = 0; var_7_object = Obj(); var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_float = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0; var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_float = 0; var_22_object = Obj(); var_23_object = Obj();
	EventDisable(10);
	Trace("on collision");
	var_25_object = GlobalVars[5];
	@@var_25_object:Enable((bool)0);
	PlayGlobalSound("bottle", CVector(0.0, 0.0, 0.0), (int)1, (int)300);
	PlayLoopedGlobalSound(var_14_object, "fire_loop", CVector(0.0, 10.0, 0.0), (int)200);
	var_34_bool = var_14_object != 0; //@nn
	if(var_34_bool != 0) {
		@@var_14_object:FadeIn((float)1.0);
	}
	Intersect(var_2_cvector, (float)300.0, var_16_bool, var_15_object);
	func_244(CVector(0,0,0));
	var_37_cvector = var_18_cvector;
	
Label_32:
	@@var_15_object:Next(var_16_bool, var_17_object);
	var_40_bool = var_16_bool;
	if(var_40_bool != 0) {
		var_41_cvector = CVector(0,0,0); var_42_object = Obj();
		var_17_object = var_42_object;
		func_249(var_41_cvector, var_42_object);
		var_41_cvector = var_19_cvector;
		var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
		var_19_cvector = var_47_cvector;
		var_18_cvector = var_48_cvector;
		func_350(var_46_float, var_47_cvector, var_48_cvector);
		var_53_float = var_46_float / (float)300.0;
		var_20_float = (float)1.0 - var_53_float;
		var_55_bool = var_20_float < (float)0.4000000059604645;
		if(var_55_bool != 0) {
			var_20_float = 0.4000000059604645;
		}
		var_57_bool = var_20_float > (float)0.800000011920929;
		if(var_57_bool != 0) {
			var_20_float = 1;
		}
		var_58_float = GlobalVars[2];
		var_20_float = var_20_float * var_58_float;
		var_59_float = 0; var_60_object = Obj(); var_61_float = 0; var_62_int = 0;
		var_17_object = var_60_object;
		var_20_float = var_61_float;
		var_63_int = GlobalVars[3];
		var_63_int = var_62_int;
		func_271(var_59_float, var_60_object, var_61_float, var_62_int);
		var_59_float = var_21_float;
		var_130_object = GlobalVars[0];
		var_131_bool = var_130_object != var_17_object;
		if(var_131_bool != 0) {
			var_132_object = GlobalVars[0];
			ReportHit(var_17_object, var_132_object, (int)3, var_21_float, var_20_float);
		}
		var_135_int = "Hit: " + var_17_object;
		Trace(var_135_int);
		goto Label_32;
	}
	var_15_object = 0;
	SetPosition(var_2_cvector);
	FindGeometry("grenade", var_22_object);
	@@var_22_object:Enable((bool)0);
	FindParticleSystem("grenadefire", var_23_object);
	var_139_bool = var_23_object == 0; //@ne
	if(var_139_bool != 0) {
		Trace("Can't find fire particle system");
		return 20;
	}
	@@var_23_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(50.0, 0.0, 50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(-50.0, 0.0, 50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(-50.0, 0.0, -50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(50.0, 0.0, -50.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(25.0, 0.0, 25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(-25.0, 0.0, 25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(-25.0, 0.0, -25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:AddSource(CVector(25.0, 0.0, -25.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_23_object:Enable();
	@@var_23_object:Fade((bool)0);
	var_169_object = GlobalVars[4];
	@@var_169_object:Fade();
	Sleep((float)10.0);
	@@var_23_object:Fade();
	var_171_bool = var_14_object != 0; //@nn
	if(var_171_bool != 0) {
		@@var_14_object:FadeOut((float)1.0);
	}
	Sleep((float)2.0);
	var_174_object = Obj();
	func_344(var_174_object);
	RemoveActor(var_174_object);
	return 20;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-7] = 0";
EMIT "Stack[-9] = 0";
EMIT "Stack[-10] = 0";


task_0_event_6()
{
	var_0_object = Obj();
	func_344(var_0_object);
	RemoveActor(var_0_object);
	Hold();
	return 0;
}


main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_object = Obj(); var_3_object = Obj(); var_4_object = Obj(); var_5_object = Obj();
	var_8_cvector = GlobalVars[1];
	var_10_object = GlobalVars[0];
	CreateRigidBody(var_3_object, CVector(0.0, 0.0, 0.0), (int)10, var_8_cvector, CVector(2.0, 2.0, 2.0), var_10_object);
	@@var_3_object:Enable((bool)1);
	var_12_object = GlobalVars[5];
	var_3_object = var_12_object;
	GlobalVars[5] = var_12_object;
	FindParticleSystem("smoke", var_4_object);
	@@var_4_object:AddSource(CVector(0.0, 0.0, 0.0), CVector(0.0, 1.0, 0.0), (int)0);
	@@var_4_object:Enable((bool)1);
	@@var_4_object:Fade((bool)0);
	var_19_object = GlobalVars[4];
	var_4_object = var_19_object;
	GlobalVars[4] = var_19_object;
	FindGeometry("grenade", var_5_object);
	@@var_5_object:Enable((bool)1);
	Attach(var_3_object);
	
Label_215:
	Hold();
	goto Label_215;
}
EMIT "Return(); Pop(6)";
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_259(var_76_bool, var_77_object, var_78_string)
{
	var_79_bool = 0; var_80_bool = 0;
	var_83_bool = IsFuncExist(var_77_object, "HasProperty", (int)2);
	var_84_bool = var_83_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_76_bool = 0;
		return 2;
	}
	@@var_77_object:HasProperty(var_78_string, var_80_bool);
	var_80_bool = var_76_bool;
	return 2;
}


func_355(var_101_float, var_102_float, var_103_float)
{
	var_106_bool = var_102_float < var_103_float;
	if(var_106_bool != 0) {
		var_102_float = var_101_float;
	} else {
		var_103_float = var_101_float;
	}
	return 0;
	
}


func_230(var_91_string, var_92_int)
{
	var_94_bool = var_92_int == (int)2;
	if(var_94_bool != 0) {
		var_91_string = "fire";
		return 0;
	EMIT "GOTO 0xf2";
	}
	var_96_bool = var_92_int == (int)1;
	if(var_96_bool != 0) {
		var_91_string = "bullet";
		return 0;
	}
	var_91_string = "phys";
	return 0;
}


func_362(var_111_float, var_112_float, var_113_float, var_114_float)
{
	var_115_bool = var_112_float < var_113_float;
	if(var_115_bool != 0) {
		var_113_float = var_111_float;
		return 0;
	}
	var_116_bool = var_112_float > var_114_float;
	if(var_116_bool != 0) {
		var_114_float = var_111_float;
		return 0;
	}
	var_112_float = var_111_float;
	return 0;
}


func_271(var_59_float, var_60_object, var_61_float, var_62_int)
{
	var_64_int = 0; var_65_string = ""; var_66_int = 0; var_67_float = 0; var_68_float = 0; var_69_float = 0; var_70_int = 0; var_71_string = ""; var_72_int = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0;
	var_76_bool = 0; var_77_object = Obj(); var_78_string = "";
	var_60_object = var_77_object;
	func_259(var_76_bool, var_77_object, "health");
	var_85_bool = var_76_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_59_float = 0.0;
		return 12;
	}
	var_86_bool = 0; var_87_object = Obj(); var_88_string = "";
	var_60_object = var_87_object;
	func_259(var_86_bool, var_87_object, "armor");
	var_89_bool = var_86_bool == 0; //@nz
	if(var_89_bool != 0) {
		var_70_int = 0;
	} else {
			@@var_60_object:GetProperty("armor", var_70_int);
	}
	var_91_string = ""; var_92_int = 0;
	var_62_int = var_92_int;
	func_230(var_91_string, var_92_int);
	var_71_string = "armor_" + var_91_string;
	var_97_bool = 0; var_98_object = Obj(); var_99_string = "";
	var_60_object = var_98_object;
	var_71_string = var_99_string;
	func_259(var_97_bool, var_98_object, var_99_string);
	var_100_bool = var_97_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_72_int = 0;
	} else {
		@@var_60_object:GetProperty(var_71_string, var_72_int);

	}
	var_101_float = 0; var_102_float = 0; var_103_float = 0;
	var_104_int = var_70_int + var_72_int;
	var_102_float = var_104_int / (float)100.0;
	func_355(var_101_float, var_102_float, (float)1);
	var_101_float = var_73_float;
	@@var_60_object:GetProperty("health", var_74_float);
	var_109_int = (int)1 - var_73_float;
	var_75_float = var_61_float * var_109_int;
	var_111_float = 0; var_112_float = 0; var_113_float = 0; var_114_float = 0;
	var_112_float = var_74_float - var_75_float;
	func_362(var_111_float, var_112_float, (float)0, (float)1);
	@@var_60_object:SetProperty("health", var_111_float);
	var_117_bool = 0; var_118_object = Obj();
	var_60_object = var_118_object;
	func_254(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		var_121_float = 0;
		var_121_float = -var_75_float;
		func_373(var_121_float);
	}
	var_75_float = var_59_float;
	return 12;
	
}


func_244(var_37_cvector)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	GetPosition(var_39_cvector);
	var_39_cvector = var_37_cvector;
	return 2;
}


func_373(var_121_float)
{
	var_122_object = Obj(); var_123_object = Obj();
	CreateFloatVector(var_123_object);
	@@var_123_object:add(var_121_float);
	var_125_bool = var_121_float < (int)0;
	if(var_125_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_123_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_254(var_117_bool, var_118_object)
{
	var_119_bool = 0; var_120_bool = 0;
	IsPlayerActor(var_118_object, var_120_bool);
	var_120_bool = var_117_bool;
	return 2;
}


func_344(var_0_object)
{
	var_1_object = Obj(); var_2_object = Obj();
	self(var_2_object);
	var_2_object = var_0_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_249(var_41_cvector, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
	@@var_42_object:GetPosition(var_44_cvector);
	var_44_cvector = var_41_cvector;
	return 2;
}


func_350(var_46_float, var_47_cvector, var_48_cvector)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	var_50_cvector = var_48_cvector - var_47_cvector;
	var_51_int = var_50_cvector | var_50_cvector;
	var_46_float = sqrt(var_51_int);
	return 2;
}


