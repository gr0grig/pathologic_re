// @IMPORTS: Sleep/1,FindActor/2,GetSceneByName/2,Teleport/4,GetGameTime/1,AdvanceGameTime/1,HasInvItemProperty/3,sync/0,RemoveActor/1,self/1,Trace/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,ModDarkenLevel/1,sync/1
// @STRINGS: W:player|W:factory|W:pt_b4q01_teleport|A:GetLocator|A:GetItemCount|A:GetItem|A:GetItemID|W:Weapon|W:Ammo|A:GetItemAmount|A:RemoveItem|A:SelectWeapon|W:health|A:SetProperty|W:tiredness|A:GetProperty|W:hunger|W:reputation|W:ifactory@door1|W:ifactory_grid_door|W:locked|A:Close|W:warehouse_gangster@door1|W:HasProperty|A:HasProperty|W:Door |W: not found|A:add
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @PE: 0xb8,0xd4

main()
{
	var_0_object = Obj(); var_1_object = Obj(); var_2_cvector = CVector(0,0,0); var_3_cvector = CVector(0,0,0); var_4_bool = 0; var_5_float = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_int = 0; var_10_bool = 0; var_11_int = 0; var_12_float = 0; var_13_float = 0; var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_float = 0; var_22_int = 0; var_23_int = 0; var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_float = 0; var_29_float = 0; var_30_float = 0; var_31_object = Obj();
	Sleep((float)2.5);
	var_33_float = 0; var_34_float = 0; var_35_float = 0;
	func_267((float)0, (float)1, (float)2.0);
	FindActor(var_16_object, "player");
	var_48_object = var_16_object;
	if(var_48_object != 0) {
		GetSceneByName(var_17_object, "factory");
		@@var_17_object:GetLocator("pt_b4q01_teleport", var_20_bool, var_18_cvector, var_19_cvector);
		Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector);
		GetGameTime(var_21_float);
		var_52_int = (int)110 - var_21_float;
		AdvanceGameTime(var_52_int);
		@@var_16_object:GetItemCount(var_22_int, (int)0);
		var_22_int = var_23_int;

	Label_33:
		var_54_int = var_23_int;
		if(var_54_int != 0) {
			var_56_int = var_23_int - (int)1;
			@@var_16_object:GetItem(var_24_object, var_56_int, (int)0);
			@@var_24_object:GetItemID(var_25_int);
			HasInvItemProperty(var_26_bool, var_25_int, "Weapon");
			var_59_bool = var_26_bool == 0; //@nz
			if(var_59_bool == 0) goto Label_53;
			HasInvItemProperty(var_26_bool, var_25_int, "Ammo");
			var_61_bool = var_26_bool == 0; //@nz
			if(var_61_bool != 0) {
			} else {
				var_64_int = var_23_int - (int)1;
				@@var_16_object:GetItemAmount(var_27_int, var_64_int);
				var_66_int = var_23_int - (int)1;
				@@var_16_object:RemoveItem(var_66_int, var_27_int);
				var_24_object = 0;
		}
			@@var_16_object:SelectWeapon();
			@@var_16_object:SetProperty("health", (float)0.30000001192092896);
			@@var_16_object:GetProperty("tiredness", var_28_float);
			var_71_bool = var_28_float > (float)0.800000011920929;
			if(var_71_bool != 0) {
				@@var_16_object:SetProperty("tiredness", (float)0.800000011920929);
				var_74_float = 0;
				var_74_float = (float)0.800000011920929 - var_28_float;
				func_247(var_74_float);
			}
			@@var_16_object:GetProperty("hunger", var_29_float);
			var_81_bool = var_29_float > (float)0.800000011920929;
			if(var_81_bool != 0) {
				@@var_16_object:SetProperty("hunger", (float)0.800000011920929);
			}
			@@var_16_object:GetProperty("reputation", var_30_float);
			var_86_bool = var_30_float > (float)0.20000000298023224;
			if(var_86_bool != 0) {
				var_87_bool = 0; var_88_object = Obj(); var_89_float = 0;
				var_16_object = var_88_object;
				var_89_float = (float)0.20000000298023224 - var_30_float;
				func_212(var_87_bool, var_88_object, var_89_float);
			}
			var_126_string = ""; var_127_bool = 0;
			func_195("ifactory@door1", (bool)1);
			FindActor(var_31_object, "ifactory_grid_door");
			@@var_31_object:SetProperty("locked", (bool)1);
			@@var_31_object:Close();
			var_31_object = 0;
			var_17_object = 0;
	}
		sync();
		var_139_string = ""; var_140_bool = 0;
		func_195("warehouse_gangster@door1", (bool)0);
		var_141_float = 0; var_142_float = 0; var_143_float = 0;
		func_267((float)1, (float)0, (float)1.0);
		var_144_object = Obj();
		func_178(var_144_object);
		RemoveActor(var_144_object);
		return 32;
	}
	var_23_int = var_23_int + (int)-1;
	goto Label_33;
	
}
EMIT "Stack[-16] = 0";


func_257(var_95_float)
{
	var_96_object = Obj(); var_97_object = Obj();
	CreateFloatVector(var_97_object);
	@@var_97_object:add(var_95_float);
	SendWorldWndMessage((int)16, var_97_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_195(var_126_string, var_127_bool)
{
	var_128_object = Obj(); var_129_object = Obj();
	FindActor(var_129_object, var_126_string);
	var_130_bool = var_129_object == 0; //@nz
	if(var_130_bool != 0) {
		var_132_int = "Door " + var_126_string;
		var_134_int = var_132_int + " not found";
		Trace(var_134_int);
	} else {
		@@var_129_object:SetProperty("locked", var_127_bool);
	}
	return 2;
	
}
EMIT "Stack[-1] = 0";


func_267(var_33_float, var_34_float, var_35_float)
{
	var_36_bool = 0; var_37_float = 0; var_38_float = 0; var_39_bool = 0; var_40_float = 0; var_41_float = 0;
	var_39_bool = var_34_float > var_33_float;
	var_42_int = var_34_float - var_33_float;
	var_40_float = var_42_int / var_35_float;
	
Label_271:
	var_43_bool = var_39_bool;
	if(var_43_bool != 0) {
		var_44_bool = var_33_float < var_34_float;
	} else {
		var_46_bool = var_34_float < var_33_float;
	}
	if(var_44_bool != 0) {
		ModDarkenLevel(var_33_float);
		sync(var_41_float);
		var_45_float = var_41_float * var_40_float;
		var_33_float = var_33_float + var_45_float;
		goto Label_271;
	}
	ModDarkenLevel(var_34_float);
	return 6;
	
}


func_144(var_107_bool, var_108_object, var_109_string)
{
	var_110_bool = 0; var_111_bool = 0;
	var_114_bool = IsFuncExist(var_108_object, "HasProperty", (int)2);
	var_115_bool = var_114_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_107_bool = 0;
		return 2;
	}
	@@var_108_object:HasProperty(var_109_string, var_111_bool);
	var_111_bool = var_107_bool;
	return 2;
}


func_178(var_144_object)
{
	var_145_object = Obj(); var_146_object = Obj();
	self(var_146_object);
	var_146_object = var_144_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_212(var_87_bool, var_88_object, var_89_float)
{
	var_91_bool = var_88_object == 0; //@nz
	if(var_91_bool != 0) {
		var_87_bool = 0;
		return 0;
	}
	var_93_bool = var_89_float > (int)0;
	if(var_93_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_124_bool = var_89_float < (int)0;
		if(var_124_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_233;
		}
		var_87_bool = 0;
		return 0;
	}
Label_233:
	var_95_float = 0;
	var_89_float = var_95_float;
	func_257(var_95_float);
	var_99_bool = 0; var_100_object = Obj(); var_101_string = ""; var_102_float = 0; var_103_float = 0; var_104_float = 0;
	var_88_object = var_100_object;
	var_89_float = var_102_float;
	func_156(var_99_bool, var_100_object, "reputation", var_102_float, (float)0, (float)1);
	var_87_bool = 1;
	return 0;
	
}


func_247(var_74_float)
{
	var_76_object = Obj(); var_77_object = Obj();
	CreateFloatVector(var_77_object);
	@@var_77_object:add(var_74_float);
	SendWorldWndMessage((int)11, var_77_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_184(var_117_float, var_118_float, var_119_float, var_120_float)
{
	var_121_bool = var_118_float < var_119_float;
	if(var_121_bool != 0) {
		var_119_float = var_117_float;
		return 0;
	}
	var_122_bool = var_118_float > var_120_float;
	if(var_122_bool != 0) {
		var_120_float = var_117_float;
		return 0;
	}
	var_118_float = var_117_float;
	return 0;
}


func_156(var_99_bool, var_100_object, var_101_string, var_102_float, var_103_float, var_104_float)
{
	var_105_float = 0; var_106_float = 0;
	var_107_bool = 0; var_108_object = Obj(); var_109_string = "";
	var_100_object = var_108_object;
	var_101_string = var_109_string;
	func_144(var_107_bool, var_108_object, var_109_string);
	var_116_bool = var_107_bool == 0; //@nz
	if(var_116_bool != 0) {
		var_99_bool = 0;
		return 2;
	}
	@@var_100_object:GetProperty(var_101_string, var_106_float);
	var_117_float = 0; var_118_float = 0; var_119_float = 0; var_120_float = 0;
	var_118_float = var_106_float + var_102_float;
	var_103_float = var_119_float;
	var_104_float = var_120_float;
	func_184(var_117_float, var_118_float, var_119_float, var_120_float);
	@@var_100_object:SetProperty(var_101_string, var_117_float);
	var_99_bool = 1;
	return 2;
}


