// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, cvector var_12_cvector, bool var_13_bool)
	{
		if(1 != 0) {
			func_1407();
			if(var_12_cvector == 41008) {
				func_139(var_13_bool, "Neutral");
				var_0_object->SetMessage(539060); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539061, 43176, 41009); //@t
				var_0_object->AddReply(541070, -1, 43175); //@t
				return 0;
			}
			if(var_12_cvector == 43176) {
				func_139(var_13_bool, "Neutral");
				var_0_object->SetMessage(541071); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541072, -1, 43177); //@t
				var_0_object->AddReply(541073, -1, 43178); //@t
				return 0;
			}
			var_3_string = true;
			bool var_52_bool;
			func_1583(var_52_bool);
			if(var_52_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xa2";
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, cvector var_12_cvector, bool var_13_bool)
	{
		if(1 != 0) {
			func_1407();
			if(var_13_bool == 41701) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1627();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1647();
				object var_60_object = var_1_object;
				func_1585(var_0_object);
			}
			if(var_13_bool == 41704) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_1632();
			}
			if(var_13_bool == 41707) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_1637();
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_1647();
				object var_136_object; object var_137_object;
				var_136_object = var_1_object;
				var_137_object = var_0_object;
				func_1652();
				object var_141_object = var_1_object;
				func_1592(var_0_object);
				object var_146_object = var_1_object;
				func_1599(var_0_object);
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_1610();
			}
			if(var_13_bool == 41710) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_1642();
				object var_187_object = var_1_object;
				func_1616(var_0_object);
				object var_193_object; object var_194_object;
				var_193_object = var_1_object;
				var_194_object = var_0_object;
				func_1610();
				object var_195_object = var_1_object;
				func_1657(var_0_object);
			}
			if(var_12_cvector == 41011) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(539063); //@t
				var_0_object->ClearReplies(); //@t
				bool var_220_bool;
				func_1664(var_220_bool, var_1_object);
				if(var_220_bool != 0)
					var_0_object->AddReply(539064, 41700, 41012); //@t
				bool var_237_bool;
				func_1664(var_237_bool, var_1_object);
				if(var_237_bool != 0)
					var_0_object->AddReply(539750, 41703, 41702); //@t
				bool var_242_bool;
				func_1674(var_242_bool, var_1_object);
				if(var_242_bool != 0)
					var_0_object->AddReply(539753, 41706, 41705); //@t
				bool var_259_bool;
				func_1684(var_259_bool, var_1_object);
				if(var_259_bool != 0)
					var_0_object->AddReply(539756, 41709, 41708); //@t
				var_0_object->AddReply(539759, -1, 41711); //@t
				var_0_object->AddReply(541075, -1, 43180); //@t
				return 0;
			}
			if(var_12_cvector == 41709) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(539757); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539758, -1, 41710); //@t
				return 0;
			}
			if(var_12_cvector == 41706) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(539754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541088, 43197, 43196); //@t
				var_0_object->AddReply(541090, 43197, 43198); //@t
				return 0;
			}
			if(var_12_cvector == 43197) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(541089); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539755, -1, 41707); //@t
				return 0;
			}
			if(var_12_cvector == 41703) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(539751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541077, 43183, 43182); //@t
				return 0;
			}
			if(var_12_cvector == 43183) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(541078); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541085, 43194, 43192); //@t
				var_0_object->AddReply(541086, 43194, 43193); //@t
				return 0;
			}
			if(var_12_cvector == 43194) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(541087); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539752, -1, 41704); //@t
				return 0;
			}
			if(var_12_cvector == 41700) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(539748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541079, 43186, 43184); //@t
				var_0_object->AddReply(541080, 43186, 43185); //@t
				return 0;
			}
			if(var_12_cvector == 43186) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(541081); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541082, 43189, 43187); //@t
				var_0_object->AddReply(541083, 43189, 43188); //@t
				return 0;
			}
			if(var_12_cvector == 43189) {
				func_405(var_13_bool, "Neutral");
				var_0_object->SetMessage(541084); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539749, -1, 41701); //@t
				return 0;
			}
			var_3_string = true;
			bool var_357_bool;
			func_1583(var_357_bool);
			if(var_357_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1ac";
	
	}

}


maintask task_4
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_777();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, string var_12_string)
	{
		bool var_14_bool;
		if(var_12_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_14_bool);
			if(!var_14_bool) { //@nz
				object var_18_object;
				func_1414(var_18_object);
				@RemoveActor(var_18_object);
			}
		} else if(var_12_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_1_object != 0) {
			object var_13_object;
			func_1414(var_13_object);
			@RemoveActor(var_13_object);
			@Hold();
		}
		func_925();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_940();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			func_883();
			bool var_16_bool = false;
			bool var_17_bool;
			func_1131(var_17_bool);
			if(var_17_bool != 0) {
				bool var_20_bool;
				func_852(var_20_bool);
				if(var_20_bool != 0)
					var_16_bool = true;
			}
			if(var_16_bool != 0) {
				bool var_37_bool;
				func_832(var_37_bool);
				if(var_37_bool != 0) {
					bool var_56_bool; object var_57_object;
					object var_58_object;
					func_1414(var_58_object);
					var_58_object = var_57_object;
					func_1281(var_56_bool, var_57_object);
				}
			} else {
				func_847(var_12_int);
				func_874();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool != 0)
			func_874();
		else
			func_1361("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			disable OnUse;
			func_1065();
			bool var_16_bool; object var_17_object;
			var_12_object = var_17_object;
			func_1122(var_16_bool, var_17_object);
			enable OnUse;
			object var_30_object;
			var_12_object = var_30_object;
			func_1949(var_30_object);
			func_1361("Neutral");
			func_883();
			func_874();
		}
	}

}


void func_0(object var_0_object, int var_326_int, object var_327_object)
{
	var_0_object = var_327_object;
	bool var_337_bool; object var_338_object;
	var_327_object = var_338_object;
	func_1136(var_337_bool, var_338_object, 70.0);
	if(!var_337_bool) { //@nz
		var_326_int = -2;
		return 8;
	}
	object var_333_object;
	@CreateDialog(var_333_object);
	int var_341_int;
	func_1577(var_341_int);
	var_333_object->SetNPCName(var_341_int);
	int var_342_int;
	func_1575(var_342_int);
	var_333_object->SetNPCDescription(var_342_int);
	string var_343_string;
	func_1579(var_343_string);
	var_333_object->SetPhoto(var_343_string);
	string var_344_string;
	func_1581(var_344_string);
	var_333_object->SetPhoto2(var_344_string);
	int var_345_int;
	func_1792(var_345_int);
	var_333_object->SetPlayerName(var_345_int);
	bool var_334_bool;
	@IsOverrideActive(var_334_bool);
	if(var_334_bool != 0) {
		var_326_int = -2;
		return 8;
	}
	@DoDialog(var_333_object);
	bool var_347_bool; object var_348_object;
	object var_349_object;
	func_1414(var_349_object);
	var_349_object = var_348_object;
	func_1223(var_347_bool, var_348_object);
	object var_350_object; object var_351_object;
	var_327_object = var_350_object;
	var_333_object = var_351_object;
	TaskCall(1);
	func_81(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object);
	TaskReturn();
	bool var_336_bool;
	var_333_object->IsDialogEnd(var_336_bool);
	
	for(;;) {
		var_380_bool = !var_336_bool; //@nz
		if(var_380_bool == 0) goto Label_70;
		@sync();
		var_333_object->IsDialogEnd(var_336_bool);
	}
	
Label_70:
	object var_381_object;
	var_327_object = var_381_object;
	func_1205();
	@StopDialog(var_333_object);
	var_333_object->GetReturnValue(-1);
	int var_335_int = var_326_int;
}
EMIT "Stack[-4] = 0";


void func_1792(int var_104_int)
{
	int var_106_int;
	@GetVariable("branch", var_106_int);
	if(var_106_int == 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x70f";
	}
	if(var_106_int == 1) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
}


void func_1281(bool var_124_bool, object var_125_object)
{
	string var_131_string; bool var_133_bool; int var_134_int; string var_135_string;
	var_131_string = "c";
	int var_132_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_125_object->HasProperty((var_131_string + (var_132_int + 1)), var_133_bool);
			if(!var_133_bool) { //@nz
			} else {
				var_132_int += 1;
			}
		}
		if(!var_132_int) { //@nz
			var_124_bool = false;
			return 10;
		}
		var_134_int = 0;
		if(var_132_int > 1)
			@irand(var_134_int, var_132_int);
		var_125_object->GetProperty((var_131_string + (var_134_int + 1)), var_135_string);
		bool var_147_bool; string var_148_string;
		var_135_string = var_148_string;
		func_1392(var_147_bool, var_148_string);
		var_147_bool = var_124_bool;
		return 10;

	}
}


void func_1542(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


// @pe
void func_777(void)
{
	func_818(var_11_bool);
}


void func_1551(string var_36_string, int var_37_int)
{
	string var_39_string = "idle";
	if(var_37_int != 0)
		var_39_string += var_37_int;
	var_39_string = var_36_string;
}


void func_1809(void)
{
	bool var_138_bool;
	func_1530(var_138_bool, "klara2_npc_positioner", "remove_danko");
}


void func_1558(int var_30_int)
{
	int var_33_int; bool var_34_bool;
	var_33_int = 0;
	
	for(;;) {
		string var_36_string; int var_37_int;
		var_33_int = var_37_int;
		func_1551(var_36_string, var_37_int);
		@HasAnimation(var_34_bool, "all", var_36_string);
		if(!var_34_bool) //@nz
			break;
		var_33_int += 1;
	}
	var_33_int = var_30_int;
}


void func_1815(void)
{
	bool var_54_bool;
	func_1530(var_54_bool, "klara2_npc_positioner", "remove_burah");
}


void func_1821(int var_283_int)
{
	int var_285_int;
	@GetVariable("k2system_klara_day", var_285_int);
	var_285_int = var_283_int;
}


void func_1827(int var_238_int)
{
	int var_240_int;
	@GetVariable("k2system_burah_day", var_240_int);
	var_240_int = var_238_int;
}


void func_1318(bool var_155_bool, object var_156_object)
{
	bool var_164_bool; int var_165_int; string var_166_string;
	int var_168_int;
	func_1542(var_168_int);
	string var_162_string = ("d" + var_168_int) + "m";
	int var_163_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_156_object->HasProperty((var_162_string + (var_163_int + 1)), var_164_bool);
			if(!var_164_bool) { //@nz
			} else {
				var_163_int += 1;
			}
		}
		if(!var_163_int) { //@nz
			var_155_bool = false;
			return 10;
		}
		var_165_int = 0;
		if(var_163_int > 1)
			@irand(var_165_int, var_163_int);
		var_156_object->GetProperty((var_162_string + (var_165_int + 1)), var_166_string);
		bool var_182_bool; string var_183_string;
		var_166_string = var_183_string;
		func_1392(var_182_bool, var_183_string);
		var_182_bool = var_155_bool;
		return 10;

	}
}


void func_1575(int var_101_int)
{
	var_101_int = 515592;
}


void func_1063(bool var_50_bool)
{
	var_50_bool = true;
}


void func_1577(int var_100_int)
{
	var_100_int = 511961;
}


void func_1065(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1579(string var_102_string)
{
	var_102_string = "ui/NPC_Burah.png";
}


void func_1833(int var_263_int)
{
	int var_265_int;
	@GetVariable("k2system_danko_day", var_265_int);
	var_265_int = var_263_int;
}


void func_1581(string var_103_string)
{
	var_103_string = "ui/NPC_Burah_b.png";
}


void func_1070(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_1583(bool var_95_bool)
{
	var_95_bool = true;
}


void func_1839(int var_233_int)
{
	int var_238_int;
	func_1827(var_238_int);
	int var_236_int;
	var_238_int = var_236_int;
	int var_237_int;
	@GetVariable(("k2system_burah_state" + var_236_int), var_237_int);
	var_237_int = var_233_int;
}


// @pe
void func_1585(object var_60_object)
{
	object var_63_object;
	var_60_object = var_63_object;
	bool var_62_bool;
	func_1485(var_62_bool, var_63_object, 0.05);
}


void func_818(object var_0_object)
{
	bool var_12_bool;
	func_1131(var_12_bool);
	if(!var_12_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_994();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_307(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_203_object, object var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if(1 != 0) {
		func_405(var_204_object, "Neutral");
		var_0_object->SetMessage(539063); //@t
		var_0_object->ClearReplies(); //@t
		bool var_228_bool;
		func_1664(var_228_bool, var_1_object);
		if(var_228_bool != 0)
			var_0_object->AddReply(539064, 41700, 41012); //@t
		bool var_248_bool;
		func_1664(var_248_bool, var_1_object);
		if(var_248_bool != 0)
			var_0_object->AddReply(539750, 41703, 41702); //@t
		bool var_253_bool;
		func_1674(var_253_bool, var_1_object);
		if(var_253_bool != 0)
			var_0_object->AddReply(539753, 41706, 41705); //@t
		bool var_273_bool;
		func_1684(var_273_bool, var_1_object);
		if(var_273_bool != 0)
			var_0_object->AddReply(539756, 41709, 41708); //@t
		var_0_object->AddReply(539759, -1, 41711); //@t
		var_0_object->AddReply(541075, -1, 43180); //@t
		goto Label_375;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x137";
	}
Label_375:
	bool var_299_bool;
	func_1583(var_299_bool);
	if(var_299_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1361(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_404;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_404:
		return 0;

	}
	
}


void func_1078(bool var_81_bool, object var_82_object, string var_83_string)
{
	var_88_bool = IsFuncExist(var_82_object, "HasProperty", 2);
	if(!var_88_bool) { //@nz
		var_81_bool = false;
		return 2;
	}
	bool var_85_bool;
	var_82_object->HasProperty(var_83_string, var_85_bool);
	var_85_bool = var_81_bool;
}


// @pe
void func_1592(object var_141_object)
{
	object var_144_object;
	var_141_object = var_144_object;
	bool var_143_bool;
	func_1485(var_143_bool, var_144_object, -0.05);
}


void func_1850(int var_43_int)
{
	int var_46_int;
	func_1827(var_46_int);
	int var_45_int;
	var_46_int = var_45_int;
	@SetVariable(("k2system_burah_state" + var_45_int), var_43_int);
}


// @pe
void func_1599(object var_146_object)
{
	@Trace("beta_pills 5 is given");
	object var_149_object;
	var_146_object = var_149_object;
	func_1472(var_149_object, "beta_pills", 5);
}


void func_832(bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, "player");
	if(!var_39_object) //@nz
		var_37_bool = false;
	bool var_42_bool; object var_43_object;
	var_39_object = var_43_object;
	func_1122(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
}
EMIT "Stack[-1] = 0";


void func_1090(bool var_73_bool, object var_74_object, string var_75_string, float var_76_float, float var_77_float, float var_78_float)
{
	object var_82_object;
	var_74_object = var_82_object;
	string var_83_string;
	var_75_string = var_83_string;
	bool var_81_bool;
	func_1078(var_81_bool, var_82_object, var_83_string);
	if(!var_81_bool) //@nz
		var_73_bool = false;
	float var_80_float;
	var_74_object->GetProperty(var_75_string, var_80_float);
	float var_91_float; float var_93_float; float var_94_float;
	var_77_float = var_93_float;
	var_78_float = var_94_float;
	func_1430(var_91_float, (var_80_float + var_76_float), var_93_float, var_94_float);
	var_74_object->SetProperty(var_75_string, var_91_float);
	var_73_bool = true;
}


void func_1860(int var_258_int)
{
	int var_263_int;
	func_1833(var_263_int);
	int var_261_int;
	var_263_int = var_261_int;
	int var_262_int;
	@GetVariable(("k2system_danko_state" + var_261_int), var_262_int);
	var_262_int = var_258_int;
}


// @pe
void func_1610(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_847(object var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_89_float, var_90_float);
}


// @pe
void func_1616(object var_187_object)
{
	@Trace("burah_serum is given");
	object var_190_object;
	var_187_object = var_190_object;
	func_1472(var_190_object, "burah_serum", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_350_object, object var_351_object)
{
	var_0_object = var_351_object;
	var_1_object = var_350_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_351_object, "Neutral");
		var_0_object->SetMessage(539060); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539061, 43176, 41009); //@t
		var_0_object->AddReply(541070, -1, 43175); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_372_bool;
	func_1583(var_372_bool);
	if(var_372_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1361(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_138;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_138:
		return 0;

	}
	
}


void func_1871(int var_125_int)
{
	int var_128_int;
	func_1833(var_128_int);
	int var_127_int;
	var_128_int = var_127_int;
	@SetVariable(("k2system_danko_state" + var_127_int), var_125_int);
}


void func_1361(string var_301_string)
{
	bool var_305_bool; float var_306_float; float var_307_float;
	@lshHasAnimation(var_305_bool, var_301_string);
	if(var_305_bool != 0) {
		@lshGetAnimTimes(var_301_string, var_306_float, var_307_float);
		@lshPlayAnimation(var_306_float, var_307_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_301_string);
	}
	
}


void func_852(bool var_20_bool)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
		var_20_bool = false;
		return 4;
	}
	float var_27_float; object var_28_object;
	func_1070(var_27_float, var_28_object);
	if(var_27_float > 90000.0) {
		var_20_bool = false;
		return 4;
	}
	bool var_24_bool;
	@CanSee(var_24_bool, var_28_object);
	var_24_bool = var_20_bool;
}
EMIT "Stack[-2] = 0";


void func_1112(bool var_20_bool, cvector var_21_cvector)
{
	cvector var_25_cvector;
	@GetPosition(var_25_cvector);
	cvector var_26_cvector = var_21_cvector - var_25_cvector;
	var_28_float = GetByIndex(var_26_cvector, 0);
	var_29_float = GetByIndex(var_26_cvector, 2);
	bool var_27_bool;
	@Rotate(var_28_float, var_29_float, var_27_bool);
	var_27_bool = var_20_bool;
}


void func_1881(int var_278_int)
{
	int var_283_int;
	func_1821(var_283_int);
	int var_281_int;
	var_283_int = var_281_int;
	int var_282_int;
	@GetVariable(("k2system_klara_state" + var_281_int), var_282_int);
	var_282_int = var_278_int;
}


// @pe
void func_1627(void)
{
	func_1916();
}


// @pe
void func_1632(void)
{
	func_1924();
}


void func_1377(string var_214_string, bool var_215_bool)
{
	bool var_221_bool; float var_222_float; float var_223_float;
	@lshHasAnimation(var_221_bool, var_214_string);
	if(var_221_bool != 0) {
		@lshGetAnimTimes(var_214_string, var_222_float, var_223_float);
		@lshPlayAnimation(var_222_float, var_223_float, var_215_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_214_string);
	}
	
}


void func_1122(bool var_16_bool, object var_17_object)
{
	cvector var_19_cvector;
	var_17_object->GetPosition(var_19_cvector);
	bool var_20_bool; cvector var_21_cvector;
	var_19_cvector = var_21_cvector;
	func_1112(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
}


void func_1892(int var_178_int)
{
	int var_181_int;
	func_1821(var_181_int);
	int var_180_int;
	var_181_int = var_180_int;
	@SetVariable(("k2system_klara_state" + var_180_int), var_178_int);
}


// @pe
void func_1637(void)
{
	func_1902();
}


// @pe
void func_1642(void)
{
	func_1944();
}


void func_1131(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


void func_874(void)
{
	float var_385_float;
	@rand(var_385_float, 8, 16);
	@SetTimer(10, var_385_float);
}


// @pe
void func_1902(void)
{
	func_1738();
	func_1871(3);
}


// @pe
void func_1647(void)
{
	func_1815();
}


void func_1136(bool var_52_bool, object var_53_object, float var_54_float)
{
	cvector var_65_cvector; bool var_72_bool;
	var_53_object->GetPosition(var_65_cvector);
	float var_64_float;
	var_53_object->GetEyesHeight(var_64_float);
	var_73_float = GetByIndex(var_65_cvector, 1);
	SetByIndex(var_65_cvector, 1) = (var_73_float + var_64_float);
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	@GetEyesHeight(var_64_float);
	var_74_float = GetByIndex(var_66_cvector, 1);
	SetByIndex(var_66_cvector, 1) = (var_74_float + var_64_float);
	cvector var_67_cvector = var_65_cvector - var_66_cvector;
	var_75_float = GetByIndex(var_67_cvector, 1);
	SetByIndex(var_67_cvector, 1) = (float)0;
	var_77_float = sqrt(var_67_cvector | var_67_cvector);
	var_67_cvector /= var_77_float;
	cvector var_68_cvector = -var_67_cvector;
	cvector var_79_cvector;
	func_1420(var_79_cvector, (var_68_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_69_cvector = ((var_67_cvector * var_54_float) + (var_79_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_71_bool;
	@IsOverrideActive(var_71_bool);
	if(var_71_bool != 0)
		var_52_bool = false;
	@StopWorld();
	@CameraTransit((var_66_cvector + var_69_cvector), var_68_cvector, true);
	var_93_float = GetByIndex(var_69_cvector, 0);
	var_94_float = GetByIndex(var_69_cvector, 2);
	@Rotate(var_93_float, var_94_float);
	bool var_95_bool;
	func_1583(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		@HasAnimationTrack(var_72_bool, "head");
		if(var_72_bool == 0) goto Label_1199;
		@LookAsyncCamera("head");
	}
Label_1199:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_52_bool = true;
	
}


void func_1392(bool var_147_bool, string var_148_string)
{
	bool var_150_bool;
	bool var_151_bool;
	func_1583(var_151_bool);
	if(var_151_bool != 0) {
		@lshHasSpeech(var_150_bool, var_148_string);
		if(var_150_bool != 0) {
			@lshPlaySpeech(var_148_string);
			var_147_bool = true;
		}
	}
	var_147_bool = false;
}


void func_883(void)
{
	@KillTimer(10);
}


// @pe
void func_1652(void)
{
	func_1809();
}


void func_1910(bool var_257_bool)
{
	int var_258_int;
	func_1860(var_258_int);
	var_257_bool = var_258_int == 1;
}


// @pe
void func_1657(object var_195_object)
{
	object var_198_object;
	var_195_object = var_198_object;
	bool var_197_bool;
	func_1485(var_197_bool, var_198_object, -0.3);
}


// @pe
void func_1916(void)
{
	func_1712();
	func_1850(2);
}


void func_1407(void)
{
	bool var_15_bool;
	func_1583(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1664(bool var_228_bool, object var_229_object)
{
	object var_231_object;
	var_229_object = var_231_object;
	func_1694(var_231_object);
	bool var_230_bool;
	if(var_230_bool != 0) {
		var_228_bool = true;
		return 0;
	}
	var_228_bool = false;
}


// @pe
void func_1924(void)
{
	func_1725();
	func_1850(1);
}


void func_1414(object var_115_object)
{
	object var_117_object;
	@self(var_117_object);
	var_117_object = var_115_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1674(bool var_253_bool, object var_254_object)
{
	object var_256_object;
	var_254_object = var_256_object;
	func_1700(var_256_object);
	bool var_255_bool;
	if(var_255_bool != 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


// @pe
void func_139(object var_2_object, string var_357_string)
{
	bool var_358_bool;
	func_1583(var_358_bool);
	if(!var_358_bool) //@nz
		return 0;
	if(var_357_string == var_2_object)
		return 0;
	string var_361_string; bool var_362_bool;
	var_357_string = var_361_string;
	if(var_357_string == "")
		var_362_bool = false;
	else
		var_362_bool = true;
	func_1377(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	
}


void func_1420(cvector var_79_cvector, cvector var_80_cvector)
{
	float var_83_float = sqrt(var_80_cvector | var_80_cvector);
	if(var_83_float < 0.000001)
		var_79_cvector = [0.0, 0.0, 0.0];
	var_79_cvector = var_80_cvector / var_83_float;
}


void func_1932(bool var_232_bool)
{
	int var_233_int;
	func_1839(var_233_int);
	var_232_bool = var_233_int == 0;
}


void func_1938(bool var_277_bool)
{
	int var_278_int;
	func_1881(var_278_int);
	var_277_bool = var_278_int == 1;
}


// @pe
void func_1684(bool var_273_bool, object var_274_object)
{
	object var_276_object;
	var_274_object = var_276_object;
	func_1706(var_276_object);
	bool var_275_bool;
	if(var_275_bool != 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


// @pe
void func_405(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_1583(var_211_bool);
	if(!var_211_bool) //@nz
		return 0;
	if(var_210_string == var_2_object)
		return 0;
	string var_214_string; bool var_215_bool;
	var_210_string = var_214_string;
	if(var_210_string == "")
		var_215_bool = false;
	else
		var_215_bool = true;
	func_1377(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	
}


// @pe
void func_1430(float var_91_float, float var_92_float, float var_93_float, float var_94_float)
{
	if(var_92_float < var_93_float) {
		var_93_float = var_91_float;
		return 0;
	}
	if(var_92_float > var_94_float) {
		var_94_float = var_91_float;
		return 0;
	}
	var_92_float = var_91_float;
}


void func_1944(void)
{
	func_1892(3);
}


// @pe
void func_925(void)
{
	func_1065();
	func_883();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1694(bool var_230_bool)
{
	bool var_232_bool;
	func_1932(var_232_bool);
	var_232_bool = var_230_bool;
}


void func_1949(object var_30_object)
{
	int var_32_int;
	@GetProperty("day", var_32_int);
	int var_34_int;
	func_1542(var_34_int);
	if(var_32_int == var_34_int) {
		int var_41_int; object var_42_object;
		var_30_object = var_42_object;
		TaskCall(2);
		func_226(var_43_object, var_41_int, var_42_object);
		TaskReturn();
	} else {
		int var_326_int; object var_327_object;
		var_30_object = var_327_object;
		TaskCall(0);
		func_0(var_328_object, var_326_int, var_327_object);
		TaskReturn();
	}
	
}


void func_1441(int var_165_int, int var_166_int)
{
	object var_168_object;
	@CreateIntVector(var_168_object);
	var_168_object->add(var_165_int);
	var_168_object->add(var_166_int);
	@SendWorldWndMessage(3, var_168_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1700(bool var_255_bool)
{
	bool var_257_bool;
	func_1910(var_257_bool);
	var_257_bool = var_255_bool;
}


// @pe
void func_1706(bool var_275_bool)
{
	bool var_277_bool;
	func_1938(var_277_bool);
	var_277_bool = var_275_bool;
}


void func_940(void)
{
	@StopGroup0();
	func_883();
	func_1361("Neutral");
	func_874();
}


void func_1453(object var_154_object, object var_155_object, int var_156_int)
{
	int var_160_int;
	var_155_object->GetItemID(var_160_int);
	int var_161_int;
	@GetInvItemProperty(var_161_int, var_160_int, "Category");
	bool var_162_bool;
	var_154_object->AddItem(var_162_bool, var_155_object, var_161_int, var_156_int);
	if(!var_162_bool) { //@nz
		var_154_object->DropItems(var_155_object, var_156_int);
	} else {
		int var_165_int; int var_166_int;
		var_160_int = var_165_int;
		var_156_int = var_166_int;
		func_1441(var_165_int, var_166_int);
	}
	
}


void func_1712(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 753, 2, 539738);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1764(var_25_bool, var_26_object, 751);
}
EMIT "Stack[-1] = 0";


void func_1205(void)
{
	bool var_320_bool;
	@CameraSwitchToNormal(true);
	bool var_322_bool;
	func_1583(var_322_bool);
	if(var_322_bool != 0) {
	} else {
		@HasAnimationTrack(var_320_bool, "head");
		if(var_320_bool == 0) goto Label_1222;
		@UnlookAsync("head");
	}
Label_1222:
	
}


void func_1725(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 754, 2, 539739);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_1764(var_109_bool, var_110_object, 751);
}
EMIT "Stack[-1] = 0";


void func_1472(object var_149_object, string var_150_string, int var_151_int)
{
	object var_153_object;
	@CreateInvItem(var_153_object);
	var_153_object->SetItemName(var_150_string);
	object var_154_object; object var_155_object; int var_156_int;
	var_149_object = var_154_object;
	var_153_object = var_155_object;
	var_151_int = var_156_int;
	func_1453(var_154_object, var_155_object, var_156_int);
}
EMIT "Stack[-1] = 0";


void func_1223(bool var_113_bool, object var_114_object)
{
	int var_120_int; int var_121_int;
	@GetVariable("voice_common", var_120_int);
	if(var_120_int != 0) {
		bool var_124_bool; object var_125_object;
		var_114_object = var_125_object;
		func_1281(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_114_object = var_156_object;
			func_1318(var_155_bool, var_156_object);
			if(!var_155_bool) { //@nz
				var_113_bool = false;
				return 4;
			}
		}
		@irand(var_121_int, 2);
		if(var_121_int != 0)
			@SetVariable("voice_common", ((var_120_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_195_bool; object var_196_object;
		var_114_object = var_196_object;
		func_1318(var_195_bool, var_196_object);
		if(!var_195_bool) { //@nz
			bool var_198_bool; object var_199_object;
			var_114_object = var_199_object;
			func_1281(var_198_bool, var_199_object);
			if(!var_198_bool) { //@nz
				var_113_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1279;
	
Label_1279:
	var_113_bool = true;
	
}


void func_1738(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 761, 2, 539746);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_1764(var_122_bool, var_123_object, 757);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1485(bool var_62_bool, object var_63_object, float var_64_float)
{
	if(!var_63_object) { //@nz
		var_62_bool = false;
		return 0;
	}
	if(var_64_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_64_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_69_float;
		var_64_float = var_69_float;
		func_1520(var_69_float);
		bool var_73_bool; object var_74_object; float var_76_float;
		var_63_object = var_74_object;
		var_64_float = var_76_float;
		func_1090(var_73_bool, var_74_object, "reputation", var_76_float, (float)0, (float)1);
		var_62_bool = true;
		return 0;

	}
	
	var_62_bool = false;
}


void func_1751(object var_34_object)
{
	object var_36_object;
	@GetDiaryRoot(var_36_object);
	if(!var_36_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_34_object = false;
	}
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_226(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	var_42_object = var_53_object;
	func_1136(var_52_bool, var_53_object, 70.0);
	if(!var_52_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_100_int;
	func_1577(var_100_int);
	var_48_object->SetNPCName(var_100_int);
	int var_101_int;
	func_1575(var_101_int);
	var_48_object->SetNPCDescription(var_101_int);
	string var_102_string;
	func_1579(var_102_string);
	var_48_object->SetPhoto(var_102_string);
	string var_103_string;
	func_1581(var_103_string);
	var_48_object->SetPhoto2(var_103_string);
	int var_104_int;
	func_1792(var_104_int);
	var_48_object->SetPlayerName(var_104_int);
	bool var_49_bool;
	@IsOverrideActive(var_49_bool);
	if(var_49_bool != 0) {
		var_41_int = -2;
		return 8;
	}
	@DoDialog(var_48_object);
	bool var_113_bool; object var_114_object;
	object var_115_object;
	func_1414(var_115_object);
	var_115_object = var_114_object;
	func_1223(var_113_bool, var_114_object);
	object var_203_object; object var_204_object;
	var_42_object = var_203_object;
	var_48_object = var_204_object;
	TaskCall(3);
	func_307(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_317_bool = !var_51_bool; //@nz
		if(var_317_bool == 0) goto Label_296;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_296:
	object var_318_object;
	var_42_object = var_318_object;
	func_1205();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_994(void)
{
	bool var_24_bool; int var_25_int; int var_26_int; bool var_27_bool;
	@WaitForAnimEnd();
	bool var_28_bool;
	func_1131(var_28_bool);
	if(!var_28_bool) //@nz
		return 12;
	int var_30_int;
	func_1558(var_30_int);
	int var_22_int;
	var_30_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_43_bool = false;
		if(var_23_int < 5) {
			bool var_46_bool;
			func_1131(var_46_bool);
			if(var_46_bool != 0)
				var_43_bool = true;
		}
		if(var_43_bool != 0) {
			if(!var_22_int) { //@nz
				@Sleep(3, var_24_bool);
				if(!var_24_bool) { //@nz
				} else {
			} else {
			@irand(var_25_int, var_22_int);
			@irand(var_26_int, 5);
			if(var_26_int != 0)
				var_25_int = 0;
			string var_57_string; int var_58_int;
			var_25_int = var_58_int;
			func_1551(var_57_string, var_58_int);
			@PlayAnimation("all", var_57_string);
			@WaitForAnimEnd(var_27_bool);
			var_59_bool = !var_27_bool; //@nz
			if(var_59_bool == 0) goto Label_1049;
			goto Label_1060;
			}
				Label_1049:
					bool var_50_bool;
					func_1063(var_50_bool);
					var_51_bool = !var_50_bool; //@nz
					if(var_51_bool == 0) goto Label_1055;
			}
		}
	Label_1060:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1055:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_1764(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_1751(var_34_object);
	object var_31_object;
	var_34_object = var_31_object;
	object var_32_object;
	var_31_object->Find(var_27_int, var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_27_int);
		var_25_bool = false;
	}
	var_32_object->AddChild(var_26_object);
	@SendWorldWndMessage(7);
	int var_33_int;
	var_26_object->GetCategory(var_33_int);
	@SetDiarySection(var_33_int);
	var_25_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1520(float var_69_float)
{
	object var_71_object;
	@CreateFloatVector(var_71_object);
	var_71_object->add(var_69_float);
	@SendWorldWndMessage(16, var_71_object);
}
EMIT "Stack[-1] = 0";


void func_1530(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


