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
			func_1391();
			if(var_12_cvector == 41014) {
				func_139(var_13_bool, "Neutral");
				var_0_object->SetMessage(539066); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539067, -1, 41015); //@t
				var_0_object->AddReply(541074, -1, 43179); //@t
				return 0;
			}
			var_3_string = true;
			bool var_42_bool;
			func_1554(var_42_bool);
			if(var_42_bool != 0)
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
			func_1391();
			if(var_13_bool == 41715) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1576();
				object var_52_object; object var_53_object;
				var_52_object = var_1_object;
				var_53_object = var_0_object;
				func_1601();
				object var_60_object = var_1_object;
				func_1556(var_0_object);
			}
			if(var_13_bool == 41718) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_1581();
			}
			if(var_13_bool == 41721) {
				object var_115_object; object var_116_object;
				var_115_object = var_1_object;
				var_116_object = var_0_object;
				func_1586();
				object var_134_object; object var_135_object;
				var_134_object = var_1_object;
				var_135_object = var_0_object;
				func_1596();
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_object;
				func_1601();
				object var_141_object = var_1_object;
				func_1563(var_0_object);
				object var_146_object = var_1_object;
				func_1606(var_0_object);
				object var_170_object; object var_171_object;
				var_170_object = var_1_object;
				var_171_object = var_0_object;
				func_1570();
			}
			if(var_13_bool == 41724) {
				object var_176_object; object var_177_object;
				var_176_object = var_1_object;
				var_177_object = var_0_object;
				func_1591();
				object var_187_object = var_1_object;
				func_1617(var_0_object);
				object var_195_object; object var_196_object;
				var_195_object = var_1_object;
				var_196_object = var_0_object;
				func_1570();
				object var_197_object = var_1_object;
				func_1628(var_0_object);
			}
			if(var_12_cvector == 41712) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(539760); //@t
				var_0_object->ClearReplies(); //@t
				bool var_222_bool;
				func_1645(var_222_bool, var_1_object);
				if(var_222_bool != 0)
					var_0_object->AddReply(539761, 41714, 41713); //@t
				bool var_239_bool;
				func_1645(var_239_bool, var_1_object);
				if(var_239_bool != 0)
					var_0_object->AddReply(539764, 41717, 41716); //@t
				bool var_244_bool;
				func_1635(var_244_bool, var_1_object);
				if(var_244_bool != 0)
					var_0_object->AddReply(539767, 41720, 41719); //@t
				bool var_261_bool;
				func_1655(var_261_bool, var_1_object);
				if(var_261_bool != 0)
					var_0_object->AddReply(539770, 41723, 41722); //@t
				var_0_object->AddReply(539773, -1, 41725); //@t
				var_0_object->AddReply(541091, -1, 43200); //@t
				return 0;
			}
			if(var_12_cvector == 41723) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(539771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541092, 43203, 43201); //@t
				var_0_object->AddReply(541093, 43203, 43202); //@t
				return 0;
			}
			if(var_12_cvector == 43203) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(541094); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539772, -1, 41724); //@t
				return 0;
			}
			if(var_12_cvector == 41720) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(539768); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541095, 43207, 43205); //@t
				var_0_object->AddReply(541096, 43207, 43206); //@t
				return 0;
			}
			if(var_12_cvector == 43207) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(541097); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541098, 43211, 43209); //@t
				var_0_object->AddReply(541099, 43211, 43210); //@t
				return 0;
			}
			if(var_12_cvector == 43211) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(541100); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539769, -1, 41721); //@t
				return 0;
			}
			if(var_12_cvector == 41717) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(539765); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541101, 43215, 43213); //@t
				var_0_object->AddReply(541102, 43216, 43214); //@t
				return 0;
			}
			if(var_12_cvector == 43216) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(541104); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(541105, 43215, 43217); //@t
				return 0;
			}
			if(var_12_cvector == 43215) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(541103); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539766, -1, 41718); //@t
				return 0;
			}
			if(var_12_cvector == 41714) {
				func_382(var_13_bool, "Neutral");
				var_0_object->SetMessage(539762); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539763, -1, 41715); //@t
				return 0;
			}
			var_3_string = true;
			bool var_359_bool;
			func_1554(var_359_bool);
			if(var_359_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x195";
	
	}

}


maintask task_4
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_754();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, string var_12_string)
	{
		bool var_14_bool;
		if(var_12_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_14_bool);
			if(!var_14_bool) { //@nz
				object var_18_object;
				func_1398(var_18_object);
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
			func_1398(var_13_object);
			@RemoveActor(var_13_object);
			@Hold();
		}
		func_902();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool)
	{
		func_917();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 10) {
			func_860();
			bool var_16_bool = false;
			bool var_17_bool;
			func_1115(var_17_bool);
			if(var_17_bool != 0) {
				bool var_20_bool;
				func_829(var_20_bool);
				if(var_20_bool != 0)
					var_16_bool = true;
			}
			if(var_16_bool != 0) {
				bool var_37_bool;
				func_809(var_37_bool);
				if(var_37_bool != 0) {
					bool var_56_bool; object var_57_object;
					object var_58_object;
					func_1398(var_58_object);
					var_58_object = var_57_object;
					func_1265(var_56_bool, var_57_object);
				}
			} else {
				func_824(var_12_int);
				func_851();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, bool var_12_bool)
	{
		if(var_12_bool != 0)
			func_851();
		else
			func_1345("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, cvector var_10_cvector, bool var_11_bool, object var_12_object)
	{
		bool var_14_bool;
		@IsOverrideActive(var_14_bool);
		if(!var_14_bool) { //@nz
			disable OnUse;
			func_1042();
			bool var_16_bool; object var_17_object;
			var_12_object = var_17_object;
			func_1106(var_16_bool, var_17_object);
			enable OnUse;
			object var_30_object;
			var_12_object = var_30_object;
			func_1920(var_30_object);
			func_1345("Neutral");
			func_860();
			func_851();
		}
	}

}


void func_0(object var_0_object, int var_326_int, object var_327_object)
{
	var_0_object = var_327_object;
	bool var_337_bool; object var_338_object;
	var_327_object = var_338_object;
	func_1120(var_337_bool, var_338_object, 70.0);
	if(!var_337_bool) { //@nz
		var_326_int = -2;
		return 8;
	}
	object var_333_object;
	@CreateDialog(var_333_object);
	int var_341_int;
	func_1548(var_341_int);
	var_333_object->SetNPCName(var_341_int);
	int var_342_int;
	func_1546(var_342_int);
	var_333_object->SetNPCDescription(var_342_int);
	string var_343_string;
	func_1550(var_343_string);
	var_333_object->SetPhoto(var_343_string);
	string var_344_string;
	func_1552(var_344_string);
	var_333_object->SetPhoto2(var_344_string);
	int var_345_int;
	func_1763(var_345_int);
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
	func_1398(var_349_object);
	var_349_object = var_348_object;
	func_1207(var_347_bool, var_348_object);
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
	func_1189();
	@StopDialog(var_333_object);
	var_333_object->GetReturnValue(-1);
	int var_335_int = var_326_int;
}
EMIT "Stack[-4] = 0";


void func_1792(int var_283_int)
{
	int var_285_int;
	@GetVariable("k2system_klara_day", var_285_int);
	var_285_int = var_283_int;
}


void func_1798(int var_263_int)
{
	int var_265_int;
	@GetVariable("k2system_burah_day", var_265_int);
	var_265_int = var_263_int;
}


void func_1546(int var_101_int)
{
	var_101_int = 515573;
}


void func_1548(int var_100_int)
{
	var_100_int = 504032;
}


void func_1804(int var_238_int)
{
	int var_240_int;
	@GetVariable("k2system_danko_day", var_240_int);
	var_240_int = var_238_int;
}


void func_1550(string var_102_string)
{
	var_102_string = "ui/NPC_Bakalavr.png";
}


void func_1552(string var_103_string)
{
	var_103_string = "ui/NPC_Bakalavr_b.png";
}


void func_1040(bool var_50_bool)
{
	var_50_bool = true;
}


void func_1554(bool var_95_bool)
{
	var_95_bool = true;
}


void func_1042(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1556(object var_60_object)
{
	object var_63_object;
	var_60_object = var_63_object;
	bool var_62_bool;
	func_1456(var_62_bool, var_63_object, 0.05);
}


void func_1810(int var_258_int)
{
	int var_263_int;
	func_1798(var_263_int);
	int var_261_int;
	var_263_int = var_261_int;
	int var_262_int;
	@GetVariable(("k2system_burah_state" + var_261_int), var_262_int);
	var_262_int = var_258_int;
}


void func_1302(bool var_155_bool, object var_156_object)
{
	bool var_164_bool; int var_165_int; string var_166_string;
	int var_168_int;
	func_1513(var_168_int);
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
		func_1376(var_182_bool, var_183_string);
		var_182_bool = var_155_bool;
		return 10;

	}
}


void func_1047(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


// @pe
void func_1563(object var_141_object)
{
	object var_144_object;
	var_141_object = var_144_object;
	bool var_143_bool;
	func_1456(var_143_bool, var_144_object, -0.05);
}


void func_795(object var_0_object)
{
	bool var_12_bool;
	func_1115(var_12_bool);
	if(!var_12_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_971();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_284(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_203_object, object var_204_object)
{
	var_0_object = var_204_object;
	var_1_object = var_203_object;
	var_3_string = false;
	if(1 != 0) {
		func_382(var_204_object, "Neutral");
		var_0_object->SetMessage(539760); //@t
		var_0_object->ClearReplies(); //@t
		bool var_228_bool;
		func_1645(var_228_bool, var_1_object);
		if(var_228_bool != 0)
			var_0_object->AddReply(539761, 41714, 41713); //@t
		bool var_248_bool;
		func_1645(var_248_bool, var_1_object);
		if(var_248_bool != 0)
			var_0_object->AddReply(539764, 41717, 41716); //@t
		bool var_253_bool;
		func_1635(var_253_bool, var_1_object);
		if(var_253_bool != 0)
			var_0_object->AddReply(539767, 41720, 41719); //@t
		bool var_273_bool;
		func_1655(var_273_bool, var_1_object);
		if(var_273_bool != 0)
			var_0_object->AddReply(539770, 41723, 41722); //@t
		var_0_object->AddReply(539773, -1, 41725); //@t
		var_0_object->AddReply(541091, -1, 43200); //@t
		goto Label_352;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x120";
	}
Label_352:
	bool var_299_bool;
	func_1554(var_299_bool);
	if(var_299_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1345(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_381;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_381:
		return 0;

	}
	
}


void func_1821(int var_125_int)
{
	int var_128_int;
	func_1798(var_128_int);
	int var_127_int;
	var_128_int = var_127_int;
	@SetVariable(("k2system_burah_state" + var_127_int), var_125_int);
}


void func_1055(bool var_81_bool, object var_82_object, string var_83_string)
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
void func_1570(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1831(int var_233_int)
{
	int var_238_int;
	func_1804(var_238_int);
	int var_236_int;
	var_238_int = var_236_int;
	int var_237_int;
	@GetVariable(("k2system_danko_state" + var_236_int), var_237_int);
	var_237_int = var_233_int;
}


// @pe
void func_1576(void)
{
	func_1873();
}


void func_809(bool var_37_bool)
{
	object var_39_object;
	@FindActor(var_39_object, "player");
	if(!var_39_object) //@nz
		var_37_bool = false;
	bool var_42_bool; object var_43_object;
	var_39_object = var_43_object;
	func_1106(var_42_bool, var_43_object);
	var_42_bool = var_37_bool;
}
EMIT "Stack[-1] = 0";


void func_1067(bool var_73_bool, object var_74_object, string var_75_string, float var_76_float, float var_77_float, float var_78_float)
{
	object var_82_object;
	var_74_object = var_82_object;
	string var_83_string;
	var_75_string = var_83_string;
	bool var_81_bool;
	func_1055(var_81_bool, var_82_object, var_83_string);
	if(!var_81_bool) //@nz
		var_73_bool = false;
	float var_80_float;
	var_74_object->GetProperty(var_75_string, var_80_float);
	float var_91_float; float var_93_float; float var_94_float;
	var_77_float = var_93_float;
	var_78_float = var_94_float;
	func_1414(var_91_float, (var_80_float + var_76_float), var_93_float, var_94_float);
	var_74_object->SetProperty(var_75_string, var_91_float);
	var_73_bool = true;
}


// @pe
void func_1581(void)
{
	func_1881();
}


// @pe
void func_1586(void)
{
	func_1895();
}


void func_1842(int var_43_int)
{
	int var_46_int;
	func_1804(var_46_int);
	int var_45_int;
	var_46_int = var_45_int;
	@SetVariable(("k2system_danko_state" + var_45_int), var_43_int);
}


// @pe
void func_1591(void)
{
	func_1915();
}


void func_824(object var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0);
	var_90_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_89_float, var_90_float);
}


// @pe
void func_1596(void)
{
	func_1786();
}


void func_1852(int var_278_int)
{
	int var_283_int;
	func_1792(var_283_int);
	int var_281_int;
	var_283_int = var_281_int;
	int var_282_int;
	@GetVariable(("k2system_klara_state" + var_281_int), var_282_int);
	var_282_int = var_278_int;
}


void func_829(bool var_20_bool)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	if(!var_23_object) { //@nz
		var_20_bool = false;
		return 4;
	}
	float var_27_float; object var_28_object;
	func_1047(var_27_float, var_28_object);
	if(var_27_float > 90000.0) {
		var_20_bool = false;
		return 4;
	}
	bool var_24_bool;
	@CanSee(var_24_bool, var_28_object);
	var_24_bool = var_20_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1601(void)
{
	func_1780();
}


void func_1089(object var_156_object, string var_157_string, int var_158_int)
{
	int var_160_int;
	var_156_object->GetProperty(var_157_string, var_160_int);
	var_156_object->SetProperty(var_157_string, (var_160_int + var_158_int));
}


void func_1345(string var_301_string)
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


void func_1606(object var_146_object)
{
	int var_149_int;
	@irand(var_149_int, 1000);
	object var_151_object;
	var_146_object = var_151_object;
	func_1437(var_151_object, (var_149_int + 3000));
}


void func_1863(int var_178_int)
{
	int var_181_int;
	func_1792(var_181_int);
	int var_180_int;
	var_181_int = var_180_int;
	@SetVariable(("k2system_klara_state" + var_180_int), var_178_int);
}


void func_1096(bool var_20_bool, cvector var_21_cvector)
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


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_350_object, object var_351_object)
{
	var_0_object = var_351_object;
	var_1_object = var_350_object;
	var_3_string = false;
	if(1 != 0) {
		func_139(var_351_object, "Neutral");
		var_0_object->SetMessage(539066); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(539067, -1, 41015); //@t
		var_0_object->AddReply(541074, -1, 43179); //@t
		goto Label_109;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x55";
	}
Label_109:
	bool var_372_bool;
	func_1554(var_372_bool);
	if(var_372_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_1345(var_2_object);
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


void func_1617(object var_187_object)
{
	int var_190_int;
	@irand(var_190_int, 1000);
	object var_192_object;
	var_187_object = var_192_object;
	func_1437(var_192_object, (var_190_int + 4000));
}


void func_1106(bool var_16_bool, object var_17_object)
{
	cvector var_19_cvector;
	var_17_object->GetPosition(var_19_cvector);
	bool var_20_bool; cvector var_21_cvector;
	var_19_cvector = var_21_cvector;
	func_1096(var_20_bool, var_21_cvector);
	var_20_bool = var_16_bool;
}


void func_1361(string var_214_string, bool var_215_bool)
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


// @pe
void func_1873(void)
{
	func_1696();
	func_1842(2);
}


void func_851(void)
{
	float var_385_float;
	@rand(var_385_float, 8, 16);
	@SetTimer(10, var_385_float);
}


// @pe
void func_1881(void)
{
	func_1709();
	func_1842(1);
}


void func_1115(bool var_12_bool)
{
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	var_14_bool = var_12_bool;
}


// @pe
void func_1628(object var_197_object)
{
	object var_200_object;
	var_197_object = var_200_object;
	bool var_199_bool;
	func_1456(var_199_bool, var_200_object, -0.3);
}


void func_860(void)
{
	@KillTimer(10);
}


void func_1120(bool var_52_bool, object var_53_object, float var_54_float)
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
	func_1404(var_79_cvector, (var_68_cvector ^ [0.0, 1.0, 0.0]));
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
	func_1554(var_95_bool);
	if(var_95_bool != 0) {
	} else {
		@HasAnimationTrack(var_72_bool, "head");
		if(var_72_bool == 0) goto Label_1183;
		@LookAsyncCamera("head");
	}
Label_1183:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_52_bool = true;
	
}


void func_1376(bool var_147_bool, string var_148_string)
{
	bool var_150_bool;
	bool var_151_bool;
	func_1554(var_151_bool);
	if(var_151_bool != 0) {
		@lshHasSpeech(var_150_bool, var_148_string);
		if(var_150_bool != 0) {
			@lshPlaySpeech(var_148_string);
			var_147_bool = true;
		}
	}
	var_147_bool = false;
}


void func_1889(bool var_232_bool)
{
	int var_233_int;
	func_1831(var_233_int);
	var_232_bool = var_233_int == 0;
}


// @pe
void func_1635(bool var_253_bool, object var_254_object)
{
	object var_256_object;
	var_254_object = var_256_object;
	func_1665(var_256_object);
	bool var_255_bool;
	if(var_255_bool != 0) {
		var_253_bool = true;
		return 0;
	}
	var_253_bool = false;
}


// @pe
void func_1895(void)
{
	func_1683();
	func_1821(3);
}


// @pe
void func_1645(bool var_228_bool, object var_229_object)
{
	object var_231_object;
	var_229_object = var_231_object;
	func_1671(var_231_object);
	bool var_230_bool;
	if(var_230_bool != 0) {
		var_228_bool = true;
		return 0;
	}
	var_228_bool = false;
}


void func_1391(void)
{
	bool var_15_bool;
	func_1554(var_15_bool);
	if(var_15_bool != 0)
		@lshStopSpeech();
}


void func_1903(bool var_257_bool)
{
	int var_258_int;
	func_1810(var_258_int);
	var_257_bool = var_258_int == 1;
}


void func_1909(bool var_277_bool)
{
	int var_278_int;
	func_1852(var_278_int);
	var_277_bool = var_278_int == 1;
}


void func_1398(object var_115_object)
{
	object var_117_object;
	@self(var_117_object);
	var_117_object = var_115_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1655(bool var_273_bool, object var_274_object)
{
	object var_276_object;
	var_274_object = var_276_object;
	func_1677(var_276_object);
	bool var_275_bool;
	if(var_275_bool != 0) {
		var_273_bool = true;
		return 0;
	}
	var_273_bool = false;
}


void func_1915(void)
{
	func_1863(3);
}


void func_1404(cvector var_79_cvector, cvector var_80_cvector)
{
	float var_83_float = sqrt(var_80_cvector | var_80_cvector);
	if(var_83_float < 0.000001)
		var_79_cvector = [0.0, 0.0, 0.0];
	var_79_cvector = var_80_cvector / var_83_float;
}


// @pe
void func_382(object var_2_object, string var_210_string)
{
	bool var_211_bool;
	func_1554(var_211_bool);
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
	func_1361(var_214_string, var_215_bool);
	var_2_object = var_210_string;
	
}


void func_1920(object var_30_object)
{
	int var_32_int;
	@GetProperty("day", var_32_int);
	int var_34_int;
	func_1513(var_34_int);
	if(var_32_int == var_34_int) {
		int var_41_int; object var_42_object;
		var_30_object = var_42_object;
		TaskCall(2);
		func_203(var_43_object, var_41_int, var_42_object);
		TaskReturn();
	} else {
		int var_326_int; object var_327_object;
		var_30_object = var_327_object;
		TaskCall(0);
		func_0(var_328_object, var_326_int, var_327_object);
		TaskReturn();
	}
	
}


// @pe
void func_1665(bool var_255_bool)
{
	bool var_257_bool;
	func_1903(var_257_bool);
	var_257_bool = var_255_bool;
}


// @pe
void func_902(void)
{
	func_1042();
	func_860();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1671(bool var_230_bool)
{
	bool var_232_bool;
	func_1889(var_232_bool);
	var_232_bool = var_230_bool;
}


// @pe
void func_1414(float var_91_float, float var_92_float, float var_93_float, float var_94_float)
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


// @pe
void func_139(object var_2_object, string var_357_string)
{
	bool var_358_bool;
	func_1554(var_358_bool);
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
	func_1361(var_361_string, var_362_bool);
	var_2_object = var_357_string;
	
}


// @pe
void func_1677(bool var_275_bool)
{
	bool var_277_bool;
	func_1909(var_277_bool);
	var_277_bool = var_275_bool;
}


void func_1425(int var_165_int, int var_166_int)
{
	object var_168_object;
	@CreateIntVector(var_168_object);
	var_168_object->add(var_165_int);
	var_168_object->add(var_166_int);
	@SendWorldWndMessage(3, var_168_object);
}
EMIT "Stack[-1] = 0";


void func_1683(void)
{
	object var_118_object;
	@CreateDiaryEntry(var_118_object, 755, 2, 539740);
	bool var_122_bool; object var_123_object;
	var_118_object = var_123_object;
	func_1735(var_122_bool, var_123_object, 751);
}
EMIT "Stack[-1] = 0";


void func_917(void)
{
	@StopGroup0();
	func_860();
	func_1345("Neutral");
	func_851();
}


void func_1437(object var_151_object, int var_152_int)
{
	int var_155_int;
	object var_156_object;
	var_151_object = var_156_object;
	int var_158_int;
	func_1089(var_156_object, "money", var_158_int);
	if(var_158_int > 0) {
		@GetInvItemByName(var_155_int, "Money");
		int var_165_int; int var_166_int;
		var_155_int = var_165_int;
		var_152_int = var_166_int;
		func_1425(var_165_int, var_166_int);
	}
}


void func_1696(void)
{
	object var_21_object;
	@CreateDiaryEntry(var_21_object, 759, 2, 539744);
	bool var_25_bool; object var_26_object;
	var_21_object = var_26_object;
	func_1735(var_25_bool, var_26_object, 757);
}
EMIT "Stack[-1] = 0";


void func_1189(void)
{
	bool var_320_bool;
	@CameraSwitchToNormal(true);
	bool var_322_bool;
	func_1554(var_322_bool);
	if(var_322_bool != 0) {
	} else {
		@HasAnimationTrack(var_320_bool, "head");
		if(var_320_bool == 0) goto Label_1206;
		@UnlookAsync("head");
	}
Label_1206:
	
}


void func_1709(void)
{
	object var_105_object;
	@CreateDiaryEntry(var_105_object, 760, 2, 539745);
	bool var_109_bool; object var_110_object;
	var_105_object = var_110_object;
	func_1735(var_109_bool, var_110_object, 757);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1456(bool var_62_bool, object var_63_object, float var_64_float)
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
		func_1491(var_69_float);
		bool var_73_bool; object var_74_object; float var_76_float;
		var_63_object = var_74_object;
		var_64_float = var_76_float;
		func_1067(var_73_bool, var_74_object, "reputation", var_76_float, (float)0, (float)1);
		var_62_bool = true;
		return 0;

	}
	
	var_62_bool = false;
}


void func_1207(bool var_113_bool, object var_114_object)
{
	int var_120_int; int var_121_int;
	@GetVariable("voice_common", var_120_int);
	if(var_120_int != 0) {
		bool var_124_bool; object var_125_object;
		var_114_object = var_125_object;
		func_1265(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_155_bool; object var_156_object;
			var_114_object = var_156_object;
			func_1302(var_155_bool, var_156_object);
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
		func_1302(var_195_bool, var_196_object);
		if(!var_195_bool) { //@nz
			bool var_198_bool; object var_199_object;
			var_114_object = var_199_object;
			func_1265(var_198_bool, var_199_object);
			if(!var_198_bool) { //@nz
				var_113_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1263;
	
Label_1263:
	var_113_bool = true;
	
}


void func_1722(object var_34_object)
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


void func_1735(bool var_25_bool, object var_26_object, int var_27_int)
{
	object var_34_object;
	func_1722(var_34_object);
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


void func_203(object var_0_object, int var_41_int, object var_42_object)
{
	var_0_object = var_42_object;
	bool var_52_bool; object var_53_object;
	var_42_object = var_53_object;
	func_1120(var_52_bool, var_53_object, 70.0);
	if(!var_52_bool) { //@nz
		var_41_int = -2;
		return 8;
	}
	object var_48_object;
	@CreateDialog(var_48_object);
	int var_100_int;
	func_1548(var_100_int);
	var_48_object->SetNPCName(var_100_int);
	int var_101_int;
	func_1546(var_101_int);
	var_48_object->SetNPCDescription(var_101_int);
	string var_102_string;
	func_1550(var_102_string);
	var_48_object->SetPhoto(var_102_string);
	string var_103_string;
	func_1552(var_103_string);
	var_48_object->SetPhoto2(var_103_string);
	int var_104_int;
	func_1763(var_104_int);
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
	func_1398(var_115_object);
	var_115_object = var_114_object;
	func_1207(var_113_bool, var_114_object);
	object var_203_object; object var_204_object;
	var_42_object = var_203_object;
	var_48_object = var_204_object;
	TaskCall(3);
	func_284(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object);
	TaskReturn();
	bool var_51_bool;
	var_48_object->IsDialogEnd(var_51_bool);
	
	for(;;) {
		var_317_bool = !var_51_bool; //@nz
		if(var_317_bool == 0) goto Label_273;
		@sync();
		var_48_object->IsDialogEnd(var_51_bool);
	}
	
Label_273:
	object var_318_object;
	var_42_object = var_318_object;
	func_1189();
	@StopDialog(var_48_object);
	var_48_object->GetReturnValue(-1);
	int var_50_int = var_41_int;
}
EMIT "Stack[-4] = 0";


void func_971(void)
{
	bool var_24_bool; int var_25_int; int var_26_int; bool var_27_bool;
	@WaitForAnimEnd();
	bool var_28_bool;
	func_1115(var_28_bool);
	if(!var_28_bool) //@nz
		return 12;
	int var_30_int;
	func_1529(var_30_int);
	int var_22_int;
	var_30_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_43_bool = false;
		if(var_23_int < 5) {
			bool var_46_bool;
			func_1115(var_46_bool);
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
			func_1522(var_57_string, var_58_int);
			@PlayAnimation("all", var_57_string);
			@WaitForAnimEnd(var_27_bool);
			var_59_bool = !var_27_bool; //@nz
			if(var_59_bool == 0) goto Label_1026;
			goto Label_1037;
			}
				Label_1026:
					bool var_50_bool;
					func_1040(var_50_bool);
					var_51_bool = !var_50_bool; //@nz
					if(var_51_bool == 0) goto Label_1032;
			}
		}
	Label_1037:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1032:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


void func_1491(float var_69_float)
{
	object var_71_object;
	@CreateFloatVector(var_71_object);
	var_71_object->add(var_69_float);
	@SendWorldWndMessage(16, var_71_object);
}
EMIT "Stack[-1] = 0";


void func_1501(bool var_54_bool, string var_55_string, string var_56_string)
{
	object var_58_object;
	@FindActor(var_58_object, var_55_string);
	if(var_58_object == null)
		var_54_bool = false;
	@Trigger(var_58_object, var_56_string);
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1763(int var_104_int)
{
	int var_106_int;
	@GetVariable("branch", var_106_int);
	if(var_106_int == 0) {
		var_104_int = 1;
		return 2;
	EMIT "GOTO 0x6f2";
	}
	if(var_106_int == 1) {
		var_104_int = 2;
		return 2;
	}
	var_104_int = 3;
}


void func_1513(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	var_34_int = 1 + (var_36_float / 24);
}


void func_1265(bool var_124_bool, object var_125_object)
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
		func_1376(var_147_bool, var_148_string);
		var_147_bool = var_124_bool;
		return 10;

	}
}


// @pe
void func_754(void)
{
	func_795(var_11_bool);
}


void func_1522(string var_36_string, int var_37_int)
{
	string var_39_string = "idle";
	if(var_37_int != 0)
		var_39_string += var_37_int;
	var_39_string = var_36_string;
}


void func_1780(void)
{
	bool var_54_bool;
	func_1501(var_54_bool, "klara2_npc_positioner", "remove_danko");
}


void func_1529(int var_30_int)
{
	int var_33_int; bool var_34_bool;
	var_33_int = 0;
	
	for(;;) {
		string var_36_string; int var_37_int;
		var_33_int = var_37_int;
		func_1522(var_36_string, var_37_int);
		@HasAnimation(var_34_bool, "all", var_36_string);
		if(!var_34_bool) //@nz
			break;
		var_33_int += 1;
	}
	var_33_int = var_30_int;
}


void func_1786(void)
{
	bool var_136_bool;
	func_1501(var_136_bool, "klara2_npc_positioner", "remove_burah");
}


