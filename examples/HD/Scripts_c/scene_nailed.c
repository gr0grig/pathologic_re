// @IMPORTS: GetProperty/2,GetLocator/4,RandOneOf/11,AddActorByType/6,RandVec2D/2,RandOneOf/15,RandOneOf/13,CreateIntVector/1,Hold/0,RemoveActor/1,self/1,rand/1,CreateObjectVector/1,Trace/1,AddActor/6
// @RUN_OP: 0xb
// @RUN_TASK: 0
// @TASK_0: vars=object,object params=0
// @EVENT_5: op=0x14a vars=
// @EVENT_6: op=0x18a vars=
// @PE: 0x0,0x2,0x5,0x8,0xb

task_0_event_5(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_int = 0; var_5_int = 0; var_6_int = 0; var_7_string = ""; var_8_string = ""; var_9_string = ""; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_string = ""; var_17_string = "";
	var_18_bool = var_1_object == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = Obj();
		func_462(var_19_object);
		var_1_object = var_19_object;
	}
	var_22_bool = var_0_object == 0; //@nz
	if(var_22_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_23_object = Obj();
	var_23_object = var_1_object;
	func_486(var_23_object);
	@@@var_0_object:size(var_10_int);
	var_11_int = 0;
	
Label_348:
	var_34_bool = var_11_int < var_10_int;
	if(var_34_bool != 0) {
		@@@var_0_object:get(var_12_int, var_11_int);
		var_36_int = var_11_int + (int)1;
		@@@var_0_object:get(var_13_int, var_36_int);
		var_38_int = var_11_int + (int)2;
		@@@var_0_object:get(var_14_int, var_38_int);
		var_39_string = ""; var_40_int = 0; var_41_int = 0;
		var_12_int = var_40_int;
		var_13_int = var_41_int;
		func_2(var_41_int);
		var_39_string = var_15_string;
		var_42_string = ""; var_43_int = 0; var_44_int = 0;
		var_12_int = var_43_int;
		var_14_int = var_44_int;
		func_5(var_44_int);
		var_42_string = var_16_string;
		var_45_string = ""; var_46_int = 0; var_47_int = 0;
		var_12_int = var_46_int;
		var_14_int = var_47_int;
		func_8(var_47_int);
		var_45_string = var_17_string;
		var_48_object = Obj(); var_49_object = Obj(); var_50_string = ""; var_51_string = ""; var_52_string = "";
		func_451(Obj());
		var_53_object = var_49_object;
		var_15_string = var_50_string;
		var_16_string = var_51_string;
		var_17_string = var_52_string;
		func_468(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string);
		@@@var_1_object:add(var_48_object);
		var_11_int = var_11_int + (int)3;
		goto Label_348;
	}
	return 16;
}


task_0_event_6(var_0_object, var_1_object)
{
	var_2_int = 0; var_3_int = 0; var_4_object = Obj(); var_5_bool = 0; var_6_int = 0; var_7_int = 0; var_8_object = Obj(); var_9_bool = 0;
	@@@var_1_object:size(var_6_int);
	var_7_int = 0;
	
Label_398:
	var_10_bool = var_7_int < var_6_int;
	if(var_10_bool != 0) {
		@@@var_1_object:get(var_8_object, var_7_int);
		var_11_bool = var_8_object != 0; //@nn
		if(var_11_bool != 0) {
			@@var_8_object:IsDead(var_9_bool);
			var_12_bool = var_9_bool == 0; //@nz
			if(var_12_bool == 0) goto Label_418;
			var_13_bool = 0; var_14_object = Obj(); var_15_string = "";
			var_8_object = var_14_object;
			func_439(var_13_bool, var_14_object, "ToDie");
			var_22_bool = var_13_bool == 0; //@nz
			if(var_22_bool != 0) {
				var_7_int = var_7_int + (int)1;
			} else {
				RemoveActor(var_8_object);
		}
			@@@var_1_object:remove(var_7_int);
			var_25_float = var_7_int * (int)3;
			var_27_int = var_7_int + (int)1;
			var_29_float = var_27_int * (int)3;
			@@@var_0_object:remove(var_25_float, var_29_float);
			var_6_int = var_6_int + (int)-1;
			var_8_object = 0;
	}
		var_31_object = Obj();
		var_31_object = var_1_object;
		func_486(var_31_object);
		goto Label_398;
	}
	return 8;
	
}


main(var_0_object, var_1_object)
{
	func_18();
	func_312(var_0_object, var_1_object);
	return 0;
}


func_0()
{
	return 0;
}


func_257(var_149_cvector, var_150_cvector, var_151_bool)
{
	var_152_object = Obj(); var_153_object = Obj();
	var_154_bool = 0; var_155_float = 0;
	var_156_bool = var_151_bool;
	if(var_156_bool != 0) {
		var_155_float = 0.05000000074505806;
	} else {
		var_155_float = 0.05000000074505806;
	}
	func_457(var_154_bool, var_155_float);
	if(var_154_bool != 0) {
		var_158_object = Obj();
		func_451(var_158_object);
		AddActorByType(var_153_object, "scripted_container", var_158_object, var_149_cvector, var_150_cvector, "item_knife_steal.xml");
		var_153_object = 0;
	}
	return 2;
	
}


func_2(var_39_string)
{
	var_39_string = "";
	return 0;
}


func_451(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj();
	self(var_50_object);
	var_50_object = var_48_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_5(var_42_string)
{
	var_42_string = "";
	return 0;
}


func_8(var_45_string)
{
	var_45_string = "";
	return 0;
}


func_457(var_32_bool, var_33_float)
{
	var_35_float = 0; var_36_float = 0;
	rand(var_36_float);
	var_32_bool = var_36_float < var_33_float;
	return 2;
}


func_77(var_137_bool)
{
	var_138_int = 0; var_139_bool = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_int = 0; var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0);
	var_142_int = 1;
	
Label_79:
	var_147_int = "pt_item_knife" + var_142_int;
	GetLocator(var_147_int, var_143_bool, var_144_cvector, var_145_cvector);
	var_148_bool = var_143_bool == 0; //@nz
	if(var_148_bool != 0) {
	} else {
		var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0;
		var_144_cvector = var_149_cvector;
		var_145_cvector = var_150_cvector;
		var_137_bool = var_151_bool;
		func_257(var_149_cvector, var_150_cvector, var_151_bool);
		var_142_int = var_142_int + (int)1;
		goto Label_79;
	}
	return 8;
	
}


func_462(var_203_object)
{
	var_204_object = Obj(); var_205_object = Obj();
	CreateObjectVector(var_205_object);
	var_205_object = var_203_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_18()
{
	var_2_bool = 0; var_3_bool = 0;
	GetProperty("nailed", var_3_bool);
	var_5_bool = 0;
	var_3_bool = var_5_bool;
	func_39(var_5_bool);
	var_64_bool = 0;
	var_3_bool = var_64_bool;
	func_58(var_64_bool);
	var_137_bool = 0;
	var_3_bool = var_137_bool;
	func_77(var_137_bool);
	var_161_bool = 0;
	var_3_bool = var_161_bool;
	func_96(var_161_bool);
	return 2;
}


func_276(var_173_cvector, var_174_cvector, var_175_bool)
{
	var_176_string = ""; var_177_object = Obj(); var_178_string = ""; var_179_object = Obj();
	var_180_bool = 0; var_181_float = 0;
	var_182_bool = var_175_bool;
	if(var_182_bool != 0) {
		var_181_float = 0.20000000298023224;
	} else {
		var_181_float = 0.4000000059604645;
	}
	func_457(var_180_bool, var_181_float);
	if(var_180_bool != 0) {
		RandOneOf(var_178_string, (int)10, (int)15, (int)3, (int)3, (int)3, (int)1, "bottle_water", "bottle_empty", "vegetables", "milk", "egg", "tvirin");
		var_196_object = Obj();
		func_451(var_196_object);
		var_198_int = "item_" + var_178_string;
		var_200_int = var_198_int + "_steal.xml";
		AddActorByType(var_179_object, "scripted_container", var_196_object, var_173_cvector, var_174_cvector, var_200_int);
		var_179_object = 0;
	}
	return 4;
	
}


func_468(var_48_object, var_49_object, var_50_string, var_51_string, var_52_string)
{
	var_56_bool = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_object = Obj();
	@@var_49_object:GetLocator(var_50_string, var_60_bool, var_61_cvector, var_62_cvector);
	var_64_bool = var_60_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_66_int = "Locator " + var_50_string;
		var_68_int = var_66_int + " doesn't exist";
		Trace(var_68_int);
	} else {
		AddActor(Obj(), var_51_string, var_49_object, var_61_cvector, var_62_cvector, var_52_string);
	}
	var_63_object = var_48_object;
	return 8;
	
}
EMIT "Stack[-1] = 0";


func_96(var_161_bool)
{
	var_162_int = 0; var_163_bool = 0; var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_int = 0; var_167_bool = 0; var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0);
	var_166_int = 1;
	
Label_98:
	var_171_int = "pt_item_bottle" + var_166_int;
	GetLocator(var_171_int, var_167_bool, var_168_cvector, var_169_cvector);
	var_172_bool = var_167_bool == 0; //@nz
	if(var_172_bool != 0) {
	} else {
		var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0;
		var_168_cvector = var_173_cvector;
		var_169_cvector = var_174_cvector;
		var_161_bool = var_175_bool;
		func_276(var_173_cvector, var_174_cvector, var_175_bool);
		var_166_int = var_166_int + (int)1;
		goto Label_98;
	}
	return 8;
	
}


func_486(var_31_object)
{
	var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_int = 0; var_36_int = 0; var_37_object = Obj();
	var_38_object = var_31_object;
	if(var_38_object != 0) {
		@@var_31_object:size(var_35_int);
		var_36_int = 0;

	Label_492:
		var_39_bool = var_36_int < var_35_int;
		if(var_39_bool != 0) {
			@@var_31_object:get(var_37_object, var_36_int);
			var_40_object = var_37_object;
			if(var_40_object != 0) {
				RemoveActor(var_37_object);
			}
			var_37_object = 0;
			var_36_int = var_36_int + (int)1;
			goto Label_492;
		}
		@@var_31_object:clear();
	}
	return 6;
}


func_39(var_5_bool)
{
	var_6_int = 0; var_7_bool = 0; var_8_cvector = CVector(0,0,0); var_9_cvector = CVector(0,0,0); var_10_int = 0; var_11_bool = 0; var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	var_10_int = 1;
	
Label_41:
	var_15_int = "pt_item_food" + var_10_int;
	GetLocator(var_15_int, var_11_bool, var_12_cvector, var_13_cvector);
	var_16_bool = var_11_bool == 0; //@nz
	if(var_16_bool != 0) {
	} else {
		var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0;
		var_12_cvector = var_17_cvector;
		var_13_cvector = var_18_cvector;
		var_5_bool = var_19_bool;
		func_115(var_17_cvector, var_18_cvector, var_19_bool);
		var_10_int = var_10_int + (int)1;
		goto Label_41;
	}
	return 8;
	
}


func_174(var_76_cvector, var_77_cvector, var_78_bool)
{
	var_79_string = ""; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_cvector = CVector(0,0,0); var_88_string = ""; var_89_object = Obj(); var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_float = 0; var_95_float = 0; var_96_cvector = CVector(0,0,0);
	var_97_bool = 0; var_98_float = 0;
	var_99_bool = var_78_bool;
	if(var_99_bool != 0) {
		var_98_float = 0.05000000074505806;
	} else {
			var_98_float = 0.20000000298023224;
	}
	func_457(var_97_bool, var_98_float);
	if(var_97_bool != 0) {
		RandOneOf(var_88_string, (int)8, (int)3, (int)3, (int)3, (int)2, (int)2, (int)1, "rusk", "dried_fish", "dried_meat", "smoked_meat", "fresh_fish", "fresh_meat", "tvirin");
		RandVec2D(var_90_float, var_91_float);
		var_114_float = GetByIndex(var_92_cvector, 0);
		var_90_float = var_114_float;
		SetByIndex(var_92_cvector, 0) = var_114_float;
		var_115_float = GetByIndex(var_92_cvector, 1);
		SetByIndex(var_92_cvector, 1) = (float)0;
		var_116_float = GetByIndex(var_92_cvector, 2);
		var_91_float = var_116_float;
		SetByIndex(var_92_cvector, 2) = var_116_float;
		var_118_object = Obj();
		func_451(var_118_object);
		AddActorByType(var_89_object, "scripted_container", var_118_object, var_76_cvector, var_92_cvector, "item_plate.xml");
		var_121_object = Obj();
		func_451(var_121_object);
		var_123_int = var_76_cvector + CVector(0.0, 5.0, 0.0);
		var_125_int = "item_" + var_88_string;
		var_127_int = var_125_int + "_steal.xml";
		AddActorByType(var_89_object, "scripted_container", var_121_object, var_123_int, var_77_cvector, var_127_int);
		var_89_object = 0;
	} else {
		var_128_bool = 0; var_129_float = 0;
		func_457(var_128_bool, (float)0.5);
		if(var_128_bool == 0) goto Label_256;
		RandVec2D(var_94_float, var_95_float);
		var_130_float = GetByIndex(var_96_cvector, 0);
		var_94_float = var_130_float;
		SetByIndex(var_96_cvector, 0) = var_130_float;
		var_131_float = GetByIndex(var_96_cvector, 1);
		SetByIndex(var_96_cvector, 1) = (float)0;
		var_132_float = GetByIndex(var_96_cvector, 2);
		var_95_float = var_132_float;
		SetByIndex(var_96_cvector, 2) = var_132_float;
		var_134_object = Obj();
		func_451(var_134_object);
		AddActorByType(var_93_object, "scripted_container", var_134_object, var_76_cvector, var_96_cvector, "item_plate.xml");
		var_93_object = 0;

	}
Label_256:
	return 18;
	
}


func_115(var_17_cvector, var_18_cvector, var_19_bool)
{
	var_20_string = ""; var_21_object = Obj(); var_22_object = Obj(); var_23_float = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0);
	var_32_bool = 0; var_33_float = 0;
	var_34_bool = var_19_bool;
	if(var_34_bool != 0) {
		var_33_float = 0.05000000074505806;
	} else {
			var_33_float = 0.20000000298023224;
	}
	func_457(var_32_bool, var_33_float);
	if(var_32_bool != 0) {
		RandOneOf(var_26_string, (int)5, (int)5, (int)3, (int)2, (int)3, "bread", "bottle_water", "milk", "vegetables", "lemon");
		var_48_object = Obj();
		func_451(var_48_object);
		var_52_int = "item_" + var_26_string;
		var_54_int = var_52_int + "_steal.xml";
		AddActorByType(var_27_object, "scripted_container", var_48_object, var_17_cvector, var_18_cvector, var_54_int);
		var_27_object = 0;
	} else {
		var_55_bool = 0; var_56_float = 0;
		func_457(var_55_bool, (float)0.5);
		if(var_55_bool == 0) goto Label_173;
		RandVec2D(var_29_float, var_30_float);
		var_57_float = GetByIndex(var_31_cvector, 0);
		var_29_float = var_57_float;
		SetByIndex(var_31_cvector, 0) = var_57_float;
		var_58_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (float)0;
		var_59_float = GetByIndex(var_31_cvector, 2);
		var_30_float = var_59_float;
		SetByIndex(var_31_cvector, 2) = var_59_float;
		var_61_object = Obj();
		func_451(var_61_object);
		AddActorByType(var_28_object, "scripted_container", var_61_object, var_17_cvector, var_31_cvector, "item_plate.xml");
		var_28_object = 0;

	}
Label_173:
	return 12;
	
}


func_439(var_13_bool, var_14_object, var_15_string)
{
	var_16_bool = 0; var_17_bool = 0;
	var_20_bool = IsFuncExist(var_14_object, "HasProperty", (int)2);
	var_21_bool = var_20_bool == 0; //@nz
	if(var_21_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	@@var_14_object:HasProperty(var_15_string, var_17_bool);
	var_17_bool = var_13_bool;
	return 2;
}


func_312(var_0_object, var_1_object)
{
	var_202_bool = var_1_object == 0; //@nz
	if(var_202_bool != 0) {
		var_203_object = Obj();
		func_462(var_203_object);
		var_1_object = var_203_object;
	}
	var_206_bool = var_0_object == 0; //@nz
	if(var_206_bool != 0) {
		CreateIntVector(var_0_object);
	}
	var_207_object = Obj();
	var_207_object = var_0_object;
	func_0();
	
Label_326:
	Hold();
	goto Label_326;
}
EMIT "Return(); Pop(0)";


func_58(var_64_bool)
{
	var_65_int = 0; var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	var_69_int = 1;
	
Label_60:
	var_74_int = "pt_item_pfood" + var_69_int;
	GetLocator(var_74_int, var_70_bool, var_71_cvector, var_72_cvector);
	var_75_bool = var_70_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0;
		var_71_cvector = var_76_cvector;
		var_72_cvector = var_77_cvector;
		var_64_bool = var_78_bool;
		func_174(var_76_cvector, var_77_cvector, var_78_bool);
		var_69_int = var_69_int + (int)1;
		goto Label_60;
	}
	return 8;
	
}


