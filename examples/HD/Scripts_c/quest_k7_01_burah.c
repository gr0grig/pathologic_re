// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1456();
			if(var_8_bool == 27656) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1682();
				object var_76_object; object var_77_object;
				var_76_object = var_1_object;
				var_77_object = var_0_object;
				func_1756();
				object var_80_object = var_1_object;
				func_1719(var_0_object);
				object var_104_object = var_1_object;
				func_1615(var_0_object);
			}
			if(var_8_bool == 27454) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_1663();
			}
			if(var_8_bool == 27456) {
				object var_138_object; object var_139_object;
				var_138_object = var_1_object;
				var_139_object = var_0_object;
				func_1631();
			}
			if(var_8_bool == 27460) {
				object var_161_object = var_1_object;
				func_1669(var_0_object);
			}
			if(var_8_bool == 27660) {
				object var_179_object; object var_180_object;
				var_179_object = var_1_object;
				var_180_object = var_0_object;
				func_1682();
				object var_181_object = var_1_object;
				func_1719(var_0_object);
				object var_183_object; object var_184_object;
				var_183_object = var_1_object;
				var_184_object = var_0_object;
				func_1756();
				object var_185_object = var_1_object;
				func_1615(var_0_object);
			}
			if(var_8_bool == 27669) {
				object var_189_object; object var_190_object;
				var_189_object = var_1_object;
				var_190_object = var_0_object;
				func_1730();
				object var_202_object = var_1_object;
				func_1740(var_0_object);
				object var_220_object; object var_221_object;
				var_220_object = var_1_object;
				var_221_object = var_0_object;
				func_1750();
			}
			if(var_8_bool == 44880) {
				object var_226_object; object var_227_object;
				var_226_object = var_1_object;
				var_227_object = var_0_object;
				func_1730();
			}
			if(var_7_cvector == 27653) {
				bool var_230_bool;
				func_1809(var_1_object);
				if(var_230_bool != 0) {
					object var_236_object; object var_237_object;
					var_236_object = var_1_object;
					var_237_object = var_0_object;
					func_1713();
					func_227(var_8_bool, "Neutral");
					var_0_object->SetMessage(526373); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(526374, 27655, 27654); //@t
					var_0_object->AddReply(528676, 27655, 30089); //@t
					return 0;
				}
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526173); //@t
				var_0_object->ClearReplies(); //@t
				bool var_266_bool = false;
				bool var_267_bool;
				func_1773(var_1_object);
				if(var_267_bool != 0) {
					bool var_273_bool;
					func_1785(var_1_object);
					if(var_273_bool != 0)
						var_266_bool = true;
				}
				if(var_266_bool != 0)
					var_0_object->AddReply(526174, 27455, 27454); //@t
				bool var_282_bool = false;
				bool var_283_bool;
				func_1773(var_1_object);
				if(var_283_bool != 0) {
					bool var_285_bool;
					func_1762(var_285_bool, var_1_object);
					if(var_285_bool != 0)
						var_282_bool = true;
				}
				if(var_282_bool != 0)
					var_0_object->AddReply(526178, 27459, 27458); //@t
				bool var_297_bool;
				func_1797(var_1_object);
				if(var_297_bool != 0)
					var_0_object->AddReply(526378, 27659, 27658); //@t
				bool var_306_bool;
				func_1821(var_1_object);
				if(var_306_bool != 0)
					var_0_object->AddReply(526387, 44876, 27667); //@t
				var_0_object->AddReply(526181, -1, 27461); //@t
				var_0_object->AddReply(528675, -1, 30088); //@t
				return 0;
			}
			if(var_7_cvector == 44876) {
				func_227(var_8_bool, "Sorrow");
				var_0_object->SetMessage(542490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542491, 27668, 44877); //@t
				var_0_object->AddReply(542492, 27668, 44878); //@t
				return 0;
			}
			if(var_7_cvector == 27668) {
				func_227(var_8_bool, "Smile");
				var_0_object->SetMessage(526388); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526389, -1, 27669); //@t
				var_0_object->AddReply(542493, -1, 44880); //@t
				return 0;
			}
			if(var_7_cvector == 27659) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526379); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526380, -1, 27660); //@t
				return 0;
			}
			if(var_7_cvector == 27459) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526179); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528687, 30103, 30102); //@t
				return 0;
			}
			if(var_7_cvector == 30103) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528689, 30105, 30104); //@t
				return 0;
			}
			if(var_7_cvector == 30105) {
				func_227(var_8_bool, "Sorrow");
				var_0_object->SetMessage(528690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528691, 30107, 30106); //@t
				var_0_object->AddReply(528697, 30113, 30112); //@t
				return 0;
			}
			if(var_7_cvector == 30113) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528698); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528699, 30107, 30114); //@t
				return 0;
			}
			if(var_7_cvector == 30107) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528693, 30109, 30108); //@t
				return 0;
			}
			if(var_7_cvector == 30109) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528702, 30118, 30117); //@t
				var_0_object->AddReply(528700, 30116, 30115); //@t
				return 0;
			}
			if(var_7_cvector == 30116) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528704, 30118, 30119); //@t
				return 0;
			}
			if(var_7_cvector == 30118) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528695, 30111, 30110); //@t
				return 0;
			}
			if(var_7_cvector == 30111) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526180, -1, 27460); //@t
				return 0;
			}
			if(var_7_cvector == 27455) {
				func_227(var_8_bool, "Sorrow");
				var_0_object->SetMessage(526175); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528685, 30101, 30100); //@t
				return 0;
			}
			if(var_7_cvector == 30101) {
				func_227(var_8_bool, "Sorrow");
				var_0_object->SetMessage(528686); //@t
				var_0_object->ClearReplies(); //@t
				bool var_428_bool;
				func_1762(var_428_bool, var_1_object);
				if(!var_428_bool) //@nz
					var_0_object->AddReply(526176, -1, 27456); //@t
				bool var_434_bool;
				func_1762(var_434_bool, var_1_object);
				if(var_434_bool != 0)
					var_0_object->AddReply(526177, 27459, 27457); //@t
				return 0;
			}
			if(var_7_cvector == 27655) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(526375); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528677, 30092, 30091); //@t
				return 0;
			}
			if(var_7_cvector == 30092) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528679, 30094, 30093); //@t
				var_0_object->AddReply(528681, 30094, 30095); //@t
				return 0;
			}
			if(var_7_cvector == 30094) {
				func_227(var_8_bool, "Doubt");
				var_0_object->SetMessage(528680); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528682, 30098, 30097); //@t
				return 0;
			}
			if(var_7_cvector == 30098) {
				func_227(var_8_bool, "Neutral");
				var_0_object->SetMessage(528683); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526376, -1, 27656); //@t
				var_0_object->AddReply(526377, -1, 27657); //@t
				return 0;
			}
			var_3_string = true;
			bool var_473_bool;
			func_2001(var_473_bool);
			if(var_473_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xfa";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_894(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1463(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_7_string == "restore") {
			var_1_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		if(var_1_object != 0) {
			object var_8_object;
			func_1463(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1001();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1016();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_959();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1180(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_928(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_908(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1463(var_53_object);
					var_53_object = var_52_object;
					func_1330(var_51_bool, var_52_object);
				}
			} else {
				func_923(var_7_int);
				func_950();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_950();
		else
			func_1410("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1141();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1171(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_845(var_25_object);
			func_1410("Neutral");
			func_959();
			func_950();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1185(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_1995(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1993(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1997(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1999(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1976(var_89_int);
	var_33_object->SetPlayerName(var_89_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	bool var_98_bool; object var_99_object;
	object var_100_object;
	func_1463(var_100_object);
	var_100_object = var_99_object;
	func_1272(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_311_bool = !var_36_bool; //@nz
		if(var_311_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_312_object;
	var_27_object = var_312_object;
	func_1254();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1797(bool var_287_bool)
{
	int var_289_int;
	func_1479(var_289_int, "k7q03");
	if(var_289_int == 0) {
		var_287_bool = true;
		return 0;
	}
	var_287_bool = false;
}


void func_1545(object var_83_object, string var_84_string, int var_85_int)
{
	object var_87_object;
	@CreateInvItem(var_87_object);
	var_87_object->SetItemName(var_84_string);
	object var_88_object; object var_89_object; int var_90_int;
	var_83_object = var_88_object;
	var_87_object = var_89_object;
	var_85_int = var_90_int;
	func_1526(var_88_object, var_89_object, var_90_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1809(bool var_200_bool)
{
	int var_202_int;
	func_1479(var_202_int, "ook7Burah2");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1558(bool var_277_bool, object var_278_object, string var_279_string)
{
	int var_282_int;
	@GetInvItemByName(var_282_int, var_279_string);
	bool var_283_bool;
	var_278_object->HasItem(var_282_int, var_283_bool);
	var_283_bool = var_277_bool;
}


void func_1565(bool var_70_bool, string var_71_string, string var_72_string)
{
	object var_74_object;
	@FindActor(var_74_object, var_71_string);
	if(var_74_object == null)
		var_70_bool = false;
	@Trigger(var_74_object, var_72_string);
	var_70_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1821(bool var_296_bool)
{
	int var_298_int;
	func_1479(var_298_int, "k7q03");
	if(var_298_int == 2)
		var_296_bool = true;
	var_296_bool = false;
}


void func_1577(float var_28_float)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_30_float = var_28_float;
}


void func_1833(void)
{
	object var_168_object;
	@CreateDiaryEntry(var_168_object, 422, 1, 526221);
	bool var_172_bool; object var_173_object;
	var_168_object = var_173_object;
	func_1898(var_172_bool, var_173_object, 416);
}
EMIT "Stack[-1] = 0";


void func_1070(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1180(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1598(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_1180(var_41_bool);
			if(var_41_bool != 0)
				var_38_bool = true;
		}
		if(var_38_bool != 0) {
			if(!var_17_int) { //@nz
				@Sleep(3, var_19_bool);
				if(!var_19_bool) { //@nz
				} else {
			} else {
			@irand(var_20_int, var_17_int);
			@irand(var_21_int, 5);
			if(var_21_int != 0)
				var_20_int = 0;
			string var_52_string; int var_53_int;
			var_20_int = var_53_int;
			func_1591(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1125;
			goto Label_1136;
			}
				Label_1125:
					bool var_45_bool;
					func_1139(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1131;
			}
		}
	Label_1136:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1131:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1582(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1330(bool var_109_bool, object var_110_object)
{
	string var_116_string; bool var_118_bool; int var_119_int; string var_120_string;
	var_116_string = "c";
	int var_117_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_110_object->HasProperty((var_116_string + (var_117_int + 1)), var_118_bool);
			if(!var_118_bool) { //@nz
			} else {
				var_117_int += 1;
			}
		}
		if(!var_117_int) { //@nz
			var_109_bool = false;
			return 10;
		}
		var_119_int = 0;
		if(var_117_int > 1)
			@irand(var_119_int, var_117_int);
		var_110_object->GetProperty((var_116_string + (var_119_int + 1)), var_120_string);
		bool var_132_bool; string var_133_string;
		var_120_string = var_133_string;
		func_1441(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_1846(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 434, 2, 526390);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_1898(var_36_bool, var_37_object, -1);
}
EMIT "Stack[-1] = 0";


void func_1591(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1598(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1591(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1859(void)
{
	object var_55_object;
	@CreateDiaryEntry(var_55_object, 435, 2, 526391);
	bool var_59_bool; object var_60_object;
	var_55_object = var_60_object;
	func_1898(var_59_bool, var_60_object, 434);
}
EMIT "Stack[-1] = 0";


// @pe
void func_845(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_1615(object var_105_object)
{
	object var_109_object;
	func_1926(var_109_object);
	object var_106_object;
	var_109_object = var_106_object;
	func_1943(var_106_object, "pt_map_burah_home", (float)2);
	object var_129_object;
	func_1926(var_129_object);
	var_105_object->ShowMap(var_129_object);
}


void func_1872(void)
{
	object var_192_object;
	@CreateDiaryEntry(var_192_object, 437, 2, 526393);
	bool var_196_bool; object var_197_object;
	var_192_object = var_197_object;
	func_1898(var_196_bool, var_197_object, 434);
}
EMIT "Stack[-1] = 0";


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_193_object, object var_194_object)
{
	var_0_object = var_194_object;
	var_1_object = var_193_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_200_bool;
		func_1809(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1713();
			func_227(var_194_object, "Neutral");
			var_0_object->SetMessage(526373); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(526374, 27655, 27654); //@t
			var_0_object->AddReply(528676, 27655, 30089); //@t
		} else {
					func_227(var_194_object, "Neutral");
					var_0_object->SetMessage(526173); //@t
					var_0_object->ClearReplies(); //@t
					bool var_256_bool = false;
					bool var_257_bool;
					func_1773(var_1_object);
					if(var_257_bool != 0) {
						bool var_263_bool;
						func_1785(var_1_object);
						if(var_263_bool != 0)
							var_256_bool = true;
					}
					if(var_256_bool != 0)
						var_0_object->AddReply(526174, 27455, 27454); //@t
					bool var_272_bool = false;
					bool var_273_bool;
					func_1773(var_1_object);
					if(var_273_bool != 0) {
						bool var_275_bool;
						func_1762(var_275_bool, var_1_object);
						if(var_275_bool != 0)
							var_272_bool = true;
					}
					if(var_272_bool != 0)
						var_0_object->AddReply(526178, 27459, 27458); //@t
					bool var_287_bool;
					func_1797(var_1_object);
					if(var_287_bool != 0)
						var_0_object->AddReply(526378, 27659, 27658); //@t
					bool var_296_bool;
					func_1821(var_1_object);
					if(var_296_bool != 0)
						var_0_object->AddReply(526387, 44876, 27667); //@t
					var_0_object->AddReply(526181, -1, 27461); //@t
					var_0_object->AddReply(528675, -1, 30088); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_2001(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1410(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_226;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_226:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1367(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1582(var_153_int);
	string var_147_string = ("d" + var_153_int) + "m";
	int var_148_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_141_object->HasProperty((var_147_string + (var_148_int + 1)), var_149_bool);
			if(!var_149_bool) { //@nz
			} else {
				var_148_int += 1;
			}
		}
		if(!var_148_int) { //@nz
			var_140_bool = false;
			return 10;
		}
		var_150_int = 0;
		if(var_148_int > 1)
			@irand(var_150_int, var_148_int);
		var_141_object->GetProperty((var_147_string + (var_150_int + 1)), var_151_string);
		bool var_172_bool; string var_173_string;
		var_151_string = var_173_string;
		func_1441(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


void func_1885(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_1631(void)
{
	object var_141_object;
	int var_142_int;
	func_1479(var_142_int, "k7q01CorpseMark");
	if(var_142_int == 0) {
		@SetVariable("k7q01CorpseMark", 1);
		object var_150_object;
		func_1926(var_150_object);
		var_150_object = var_141_object;
		float var_155_float;
		func_1577(var_155_float);
		var_141_object->AddMark("k7q01BirdmaskGotoCorpse", "pt_d7q02_corpse", 3, 526214, var_155_float);
		bool var_156_bool;
		func_1565(var_156_bool, "quest_k7_01", "place_corpse");
		var_141_object = null;
	}
}


void func_1898(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_1885(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1139(bool var_45_bool)
{
	var_45_bool = true;
}


void func_1141(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1146(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_894(object var_0_object)
{
	bool var_7_bool;
	func_1180(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1070();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1663(void)
{
	@SetVariable("ook7Burah1", 1);
}


void func_1410(string var_238_string)
{
	bool var_242_bool; float var_243_float; float var_244_float;
	@lshHasAnimation(var_242_bool, var_238_string);
	if(var_242_bool != 0) {
		@lshGetAnimTimes(var_238_string, var_243_float, var_244_float);
		@lshPlayAnimation(var_243_float, var_244_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_238_string);
	}
	
}


void func_1154(object var_209_object, string var_210_string, int var_211_int)
{
	int var_213_int;
	var_209_object->GetProperty(var_210_string, var_213_int);
	var_209_object->SetProperty(var_210_string, (var_213_int + var_211_int));
}


void func_1669(object var_161_object)
{
	@SetVariable("k7q01", 4);
	func_1833();
	int var_164_int;
	var_161_object->RemoveItemByType(var_164_int, "bird_balahon", 1);
}


void func_1926(object var_17_object)
{
	object var_20_object; object var_21_object;
	@GetMainOutdoorScene(var_20_object);
	if(var_20_object == null) {
		@Trace("Can't find main outdoor scene");
		var_21_object = null;
		var_21_object = var_17_object;
	}
	var_20_object->GetMap(var_21_object);
	var_21_object = var_17_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1161(bool var_15_bool, cvector var_16_cvector)
{
	cvector var_20_cvector;
	@GetPosition(var_20_cvector);
	cvector var_21_cvector = var_16_cvector - var_20_cvector;
	var_23_float = GetByIndex(var_21_cvector, 0);
	var_24_float = GetByIndex(var_21_cvector, 2);
	bool var_22_bool;
	@Rotate(var_23_float, var_24_float, var_22_bool);
	var_22_bool = var_15_bool;
}


void func_908(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1171(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1426(string var_216_string, bool var_217_bool)
{
	bool var_223_bool; float var_224_float; float var_225_float;
	@lshHasAnimation(var_223_bool, var_216_string);
	if(var_223_bool != 0) {
		@lshGetAnimTimes(var_216_string, var_224_float, var_225_float);
		@lshPlayAnimation(var_224_float, var_225_float, var_217_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_216_string);
	}
	
}


void func_1682(void)
{
	object var_17_object;
	func_1926(var_17_object);
	object var_16_object;
	var_17_object = var_16_object;
	float var_28_float;
	func_1577(var_28_float);
	var_16_object->AddMark("k7q03BurahGotoFather", "pt_map_burah_home", 0, 526394, var_28_float);
	func_1846();
	func_1859();
	object var_62_object;
	func_1484(var_62_object, "quest_k7_03");
	bool var_70_bool;
	func_1565(var_70_bool, "quest_k7_03", "place_family");
}
EMIT "Stack[-1] = 0";


void func_1171(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1161(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1943(object var_106_object, string var_107_string, float var_108_float)
{
	object var_116_object;
	@GetMainOutdoorScene(var_116_object);
	if(var_116_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_114_cvector;
	cvector var_115_cvector;
	bool var_117_bool;
	var_116_object->GetLocator(var_107_string, var_117_bool, var_114_cvector, var_115_cvector);
	if(!var_117_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_107_string) + " doesnt exist");
	var_116_object->GetMap(var_106_object);
	if(var_106_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_127_float = GetByIndex(var_114_cvector, 0);
	var_128_float = GetByIndex(var_114_cvector, 2);
	var_106_object->SetMapParams(var_127_float, var_128_float, var_108_float);
}
EMIT "Stack[-2] = 0";


void func_923(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1180(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_928(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1146(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1185(bool var_37_bool, object var_38_object, float var_39_float)
{
	cvector var_50_cvector; bool var_57_bool;
	var_38_object->GetPosition(var_50_cvector);
	float var_49_float;
	var_38_object->GetEyesHeight(var_49_float);
	var_58_float = GetByIndex(var_50_cvector, 1);
	SetByIndex(var_50_cvector, 1) = (var_58_float + var_49_float);
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	@GetEyesHeight(var_49_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_49_float);
	cvector var_52_cvector = var_50_cvector - var_51_cvector;
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (float)0;
	var_62_float = sqrt(var_52_cvector | var_52_cvector);
	var_52_cvector /= var_62_float;
	cvector var_53_cvector = -var_52_cvector;
	cvector var_64_cvector;
	func_1469(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_54_cvector = ((var_52_cvector * var_39_float) + (var_64_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_56_bool;
	@IsOverrideActive(var_56_bool);
	if(var_56_bool != 0)
		var_37_bool = false;
	@StopWorld();
	@CameraTransit((var_51_cvector + var_54_cvector), var_53_cvector, true);
	var_78_float = GetByIndex(var_54_cvector, 0);
	var_79_float = GetByIndex(var_54_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2001(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1248;
		@LookAsyncCamera("head");
	}
Label_1248:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1441(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_2001(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1456(void)
{
	bool var_10_bool;
	func_2001(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1713(void)
{
	@SetVariable("ook7Burah2", 1);
}


void func_950(void)
{
	float var_323_float;
	@rand(var_323_float, 8, 16);
	@SetTimer(10, var_323_float);
}


void func_1463(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1976(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x7c7";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1719(object var_80_object)
{
	@Trace("tvirin 5 is given");
	object var_83_object;
	var_80_object = var_83_object;
	func_1545(var_83_object, "tvirin", 5);
}


void func_1469(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


void func_959(void)
{
	@KillTimer(10);
}


// @pe
void func_1730(void)
{
	func_1872();
	bool var_199_bool;
	func_1565(var_199_bool, "quest_k7_03", "completed");
}


void func_1479(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1993(int var_86_int)
{
	var_86_int = 515592;
}


void func_1995(int var_85_int)
{
	var_85_int = 511961;
}


// @pe
void func_1740(object var_202_object)
{
	@Trace("money2000 is given");
	object var_205_object;
	var_202_object = var_205_object;
	func_1507(var_205_object, 2000);
}


void func_1997(string var_87_string)
{
	var_87_string = "ui/NPC_Burah.png";
}


void func_1484(object var_62_object, string var_63_string)
{
	object var_66_object;
	@GetMainOutdoorScene(var_66_object);
	object var_67_object;
	@AddBlankActor(var_67_object, var_66_object, var_63_string, (var_63_string + ".bin"));
	var_67_object = var_62_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1999(string var_88_string)
{
	var_88_string = "ui/NPC_Burah_b.png";
}


void func_2001(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1750(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_1495(int var_99_int, int var_100_int)
{
	object var_102_object;
	@CreateIntVector(var_102_object);
	var_102_object->add(var_99_int);
	var_102_object->add(var_100_int);
	@SendWorldWndMessage(3, var_102_object);
}
EMIT "Stack[-1] = 0";


void func_1016(void)
{
	@StopGroup0();
	func_959();
	func_1410("Neutral");
	func_950();
}


// @pe
void func_1756(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_1762(bool var_275_bool, object var_276_object)
{
	object var_278_object;
	var_276_object = var_278_object;
	bool var_277_bool;
	func_1558(var_277_bool, var_278_object, "bird_balahon");
	if(var_277_bool != 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


// @pe
void func_227(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_2001(var_213_bool);
	if(!var_213_bool) //@nz
		return 0;
	if(var_212_string == var_2_object)
		return 0;
	string var_216_string; bool var_217_bool;
	var_212_string = var_216_string;
	if(var_212_string == "")
		var_217_bool = false;
	else
		var_217_bool = true;
	func_1426(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


void func_1507(object var_205_object, int var_206_int)
{
	int var_208_int;
	object var_209_object;
	var_205_object = var_209_object;
	int var_211_int;
	func_1154(var_209_object, "money", var_211_int);
	if(var_211_int > 0) {
		@GetInvItemByName(var_208_int, "Money");
		int var_218_int; int var_219_int;
		var_208_int = var_218_int;
		var_206_int = var_219_int;
		func_1495(var_218_int, var_219_int);
	}
}


void func_1254(void)
{
	bool var_314_bool;
	@CameraSwitchToNormal(true);
	bool var_316_bool;
	func_2001(var_316_bool);
	if(var_316_bool != 0) {
	} else {
		@HasAnimationTrack(var_314_bool, "head");
		if(var_314_bool == 0) goto Label_1271;
		@UnlookAsync("head");
	}
Label_1271:
	
}


// @pe
void func_1001(void)
{
	func_1141();
	func_959();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1773(bool var_257_bool)
{
	int var_259_int;
	func_1479(var_259_int, "k7q01");
	if(var_259_int == 3)
		var_257_bool = true;
	var_257_bool = false;
}


void func_1526(object var_88_object, object var_89_object, int var_90_int)
{
	int var_94_int;
	var_89_object->GetItemID(var_94_int);
	int var_95_int;
	@GetInvItemProperty(var_95_int, var_94_int, "Category");
	bool var_96_bool;
	var_88_object->AddItem(var_96_bool, var_89_object, var_95_int, var_90_int);
	if(!var_96_bool) { //@nz
		var_88_object->DropItems(var_89_object, var_90_int);
	} else {
		int var_99_int; int var_100_int;
		var_94_int = var_99_int;
		var_90_int = var_100_int;
		func_1495(var_99_int, var_100_int);
	}
	
}


void func_1272(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1330(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1367(var_140_bool, var_141_object);
			if(!var_140_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@irand(var_106_int, 2);
		if(var_106_int != 0)
			@SetVariable("voice_common", ((var_105_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_185_bool; object var_186_object;
		var_99_object = var_186_object;
		func_1367(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1330(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1328;
	
Label_1328:
	var_98_bool = true;
	
}


// @pe
void func_1785(bool var_263_bool)
{
	int var_265_int;
	func_1479(var_265_int, "ook7Burah1");
	if(var_265_int == 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


