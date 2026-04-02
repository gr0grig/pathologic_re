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
			if(var_8_bool == 36147) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1606();
			}
			if(var_8_bool == 36151) {
				object var_19_object = var_1_object;
				func_1561(var_0_object);
				object var_68_object; object var_69_object;
				var_68_object = var_1_object;
				var_69_object = var_0_object;
				func_1579();
			}
			if(var_8_bool == 40618) {
				object var_93_object; object var_94_object;
				var_93_object = var_1_object;
				var_94_object = var_0_object;
				func_1612();
			}
			if(var_7_cvector == 15573) {
				bool var_99_bool;
				func_1660(var_1_object);
				if(var_99_bool != 0) {
					object var_105_object; object var_106_object;
					var_105_object = var_1_object;
					var_106_object = var_0_object;
					func_1618();
					func_198(var_8_bool, "Neutral");
					var_0_object->SetMessage(514350); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(514351, 15575, 15574); //@t
					var_0_object->AddReply(538680, 15575, 40578); //@t
					return 0;
				}
				func_198(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(514514); //@t
				var_0_object->ClearReplies(); //@t
				bool var_135_bool = false;
				bool var_136_bool;
				func_1624(var_1_object);
				if(var_136_bool != 0) {
					bool var_142_bool;
					func_1636(var_1_object);
					if(var_142_bool != 0)
						var_135_bool = true;
				}
				if(var_135_bool != 0)
					var_0_object->AddReply(534506, 40595, 36147); //@t
				bool var_151_bool;
				func_1648(var_1_object);
				if(var_151_bool != 0)
					var_0_object->AddReply(538711, 40619, 40618); //@t
				var_0_object->AddReply(514515, -1, 15754); //@t
				var_0_object->AddReply(538691, -1, 40594); //@t
				return 0;
			}
			if(var_7_cvector == 40619) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(538712); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538714, 40622, 40621); //@t
				var_0_object->AddReply(538713, -1, 40620); //@t
				return 0;
			}
			if(var_7_cvector == 40622) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(538715); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538716, 40624, 40623); //@t
				return 0;
			}
			if(var_7_cvector == 40624) {
				func_198(var_8_bool, "Smile");
				var_0_object->SetMessage(538717); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538718, -1, 40625); //@t
				var_0_object->AddReply(538719, -1, 40626); //@t
				return 0;
			}
			if(var_7_cvector == 40595) {
				func_198(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(538692); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538693, 40616, 40596); //@t
				var_0_object->AddReply(538699, 40604, 40603); //@t
				return 0;
			}
			if(var_7_cvector == 40604) {
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(538700); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538701, 40607, 40605); //@t
				var_0_object->AddReply(538702, 40609, 40606); //@t
				return 0;
			}
			if(var_7_cvector == 40609) {
				func_198(var_8_bool, "Fear");
				var_0_object->SetMessage(538705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538707, 40600, 40612); //@t
				var_0_object->AddReply(538708, 40600, 40613); //@t
				return 0;
			}
			if(var_7_cvector == 40607) {
				func_198(var_8_bool, "Grin");
				var_0_object->SetMessage(538703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538704, -1, 40608); //@t
				var_0_object->AddReply(538706, 40600, 40610); //@t
				return 0;
			}
			if(var_7_cvector == 40616) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(538709); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538710, 40597, 40617); //@t
				return 0;
			}
			if(var_7_cvector == 40597) {
				func_198(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(538694); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538695, 40600, 40598); //@t
				var_0_object->AddReply(538696, 40600, 40599); //@t
				return 0;
			}
			if(var_7_cvector == 40600) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(538697); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538698, 36148, 40602); //@t
				return 0;
			}
			if(var_7_cvector == 36148) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(534507); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534508, 36150, 36149); //@t
				return 0;
			}
			if(var_7_cvector == 36150) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(534509); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534510, -1, 36151); //@t
				return 0;
			}
			if(var_7_cvector == 15575) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(514352); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514353, 15577, 15576); //@t
				var_0_object->AddReply(538679, 15579, 40577); //@t
				return 0;
			}
			if(var_7_cvector == 15577) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(514354); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514355, 15579, 15578); //@t
				var_0_object->AddReply(538681, 15581, 40581); //@t
				return 0;
			}
			if(var_7_cvector == 15579) {
				func_198(var_8_bool, "Grin");
				var_0_object->SetMessage(514356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514357, 15581, 15580); //@t
				return 0;
			}
			if(var_7_cvector == 15581) {
				func_198(var_8_bool, "Grin");
				var_0_object->SetMessage(514358); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514359, 15583, 15582); //@t
				var_0_object->AddReply(538682, 15587, 40583); //@t
				return 0;
			}
			if(var_7_cvector == 15583) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(514360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514361, 15585, 15584); //@t
				return 0;
			}
			if(var_7_cvector == 15585) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(514362); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514363, 15587, 15586); //@t
				return 0;
			}
			if(var_7_cvector == 15587) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(514364); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514365, 15589, 15588); //@t
				var_0_object->AddReply(538683, 40586, 40585); //@t
				var_0_object->AddReply(539687, 41639, 41638); //@t
				return 0;
			}
			if(var_7_cvector == 41639) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(539688); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(539689, 15589, 41640); //@t
				return 0;
			}
			if(var_7_cvector == 40586) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(538684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538686, 40589, 40588); //@t
				return 0;
			}
			if(var_7_cvector == 40589) {
				func_198(var_8_bool, "Sly");
				var_0_object->SetMessage(538687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538688, 40591, 40590); //@t
				return 0;
			}
			if(var_7_cvector == 40591) {
				func_198(var_8_bool, "Neutral");
				var_0_object->SetMessage(538689); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(538690, 15589, 40592); //@t
				var_0_object->AddReply(539690, -1, 41642); //@t
				return 0;
			}
			if(var_7_cvector == 15589) {
				func_198(var_8_bool, "Saveyouall");
				var_0_object->SetMessage(514366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(514367, -1, 15590); //@t
				var_0_object->AddReply(538685, -1, 40587); //@t
				return 0;
			}
			var_3_string = true;
			bool var_376_bool;
			func_1764(var_376_bool);
			if(var_376_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xdd";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_901(var_6_bool);
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
		func_1008();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1023();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_966();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1180(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_935(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_915(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1463(var_53_object);
					var_53_object = var_52_object;
					func_1330(var_51_bool, var_52_object);
				}
			} else {
				func_930(var_7_int);
				func_957();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_957();
		else
			func_1410("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1148();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1171(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_852(var_25_object);
			func_1410("Neutral");
			func_966();
			func_957();
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
	func_1758(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_1756(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_1760(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_1762(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_1739(var_89_int);
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
		var_287_bool = !var_36_bool; //@nz
		if(var_287_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_288_object;
	var_27_object = var_288_object;
	func_1254();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1153(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
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


void func_1537(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
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


void func_901(object var_0_object)
{
	bool var_7_bool;
	func_1180(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1077();
	}
}
EMIT "Return(); Pop(0)";


void func_1544(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1537(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


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


void func_1672(void)
{
	object var_84_object;
	@CreateDiaryEntry(var_84_object, 690, 2, 534538);
	bool var_88_bool; object var_89_object;
	var_84_object = var_89_object;
	func_1711(var_88_bool, var_89_object, 686);
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


void func_1171(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1161(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_915(bool var_32_bool)
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


void func_1685(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 689, 2, 534537);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_1711(var_28_bool, var_29_object, 686);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1561(object var_19_object)
{
	@SetVariable("d11q06KlaraRing", 1);
	func_1685();
	@Trace("d11q06KlaraRing is given");
	object var_47_object;
	var_19_object = var_47_object;
	func_1515(var_47_object, "d11q06KlaraRing", 1);
}


void func_1180(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1660(bool var_200_bool)
{
	int var_202_int;
	func_1479(var_202_int, "ood11Klara1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


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
	func_1764(var_80_bool);
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


void func_930(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1441(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_1764(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1698(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_935(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1153(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


// @pe
void func_1579(void)
{
	bool var_70_bool = false;
	int var_71_int;
	func_1479(var_71_int, "d11q06KapellaRing");
	if(var_71_int != 0) {
		int var_77_int;
		func_1479(var_77_int, "d11q06KlaraRing");
		if(var_77_int != 0)
			var_70_bool = true;
	}
	if(var_70_bool != 0) {
		@SetVariable("d11q06", 2);
		func_1672();
	}
}


void func_1711(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_1698(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1456(void)
{
	bool var_10_bool;
	func_1764(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
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


void func_1077(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1180(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1544(var_25_int);
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
			func_1537(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1132;
			goto Label_1143;
			}
				Label_1132:
					bool var_45_bool;
					func_1146(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1138;
			}
		}
	Label_1143:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1138:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1463(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_957(void)
{
	float var_299_float;
	@rand(var_299_float, 8, 16);
	@SetTimer(10, var_299_float);
}


void func_1469(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_198(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_1764(var_213_bool);
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


// @pe
void func_1606(void)
{
	@SetVariable("ood11Klara2", 1);
}


void func_966(void)
{
	@KillTimer(10);
}


void func_1479(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1739(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x6da";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_1612(void)
{
	@SetVariable("ood11Klara3", 1);
}


void func_1484(int var_63_int, int var_64_int)
{
	object var_66_object;
	@CreateIntVector(var_66_object);
	var_66_object->add(var_63_int);
	var_66_object->add(var_64_int);
	@SendWorldWndMessage(3, var_66_object);
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
		func_1660(var_1_object);
		if(var_200_bool != 0) {
			object var_208_object; object var_209_object;
			var_208_object = var_1_object;
			var_209_object = var_0_object;
			func_1618();
			func_198(var_194_object, "Neutral");
			var_0_object->SetMessage(514350); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(514351, 15575, 15574); //@t
			var_0_object->AddReply(538680, 15575, 40578); //@t
		} else {
					func_198(var_194_object, "Saveyouall");
					var_0_object->SetMessage(514514); //@t
					var_0_object->ClearReplies(); //@t
					bool var_256_bool = false;
					bool var_257_bool;
					func_1624(var_1_object);
					if(var_257_bool != 0) {
						bool var_263_bool;
						func_1636(var_1_object);
						if(var_263_bool != 0)
							var_256_bool = true;
					}
					if(var_256_bool != 0)
						var_0_object->AddReply(534506, 40595, 36147); //@t
					bool var_272_bool;
					func_1648(var_1_object);
					if(var_272_bool != 0)
						var_0_object->AddReply(538711, 40619, 40618); //@t
					var_0_object->AddReply(514515, -1, 15754); //@t
					var_0_object->AddReply(538691, -1, 40594); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_1764(var_236_bool);
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
					goto Label_197;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_197:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1618(void)
{
	@SetVariable("ood11Klara1", 1);
}


// @pe
void func_852(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1367(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1528(var_153_int);
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


// @pe
void func_1624(bool var_257_bool)
{
	int var_259_int;
	func_1479(var_259_int, "d11q06");
	if(var_259_int == 1)
		var_257_bool = true;
	var_257_bool = false;
}


void func_1496(object var_52_object, object var_53_object, int var_54_int)
{
	int var_58_int;
	var_53_object->GetItemID(var_58_int);
	int var_59_int;
	@GetInvItemProperty(var_59_int, var_58_int, "Category");
	bool var_60_bool;
	var_52_object->AddItem(var_60_bool, var_53_object, var_59_int, var_54_int);
	if(!var_60_bool) { //@nz
		var_52_object->DropItems(var_53_object, var_54_int);
	} else {
		int var_63_int; int var_64_int;
		var_58_int = var_63_int;
		var_54_int = var_64_int;
		func_1484(var_63_int, var_64_int);
	}
	
}


void func_1756(int var_86_int)
{
	var_86_int = 515540;
}


void func_1758(int var_85_int)
{
	var_85_int = 502865;
}


void func_1760(string var_87_string)
{
	var_87_string = "ui/NPC_Klara.png";
}


void func_1762(string var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png";
}


// @pe
void func_1636(bool var_263_bool)
{
	int var_265_int;
	func_1479(var_265_int, "ood11Klara2");
	if(var_265_int == 0) {
		var_263_bool = true;
		return 0;
	}
	var_263_bool = false;
}


void func_1764(bool var_80_bool)
{
	var_80_bool = true;
}


void func_1254(void)
{
	bool var_290_bool;
	@CameraSwitchToNormal(true);
	bool var_292_bool;
	func_1764(var_292_bool);
	if(var_292_bool != 0) {
	} else {
		@HasAnimationTrack(var_290_bool, "head");
		if(var_290_bool == 0) goto Label_1271;
		@UnlookAsync("head");
	}
Label_1271:
	
}


void func_1515(object var_47_object, string var_48_string, int var_49_int)
{
	object var_51_object;
	@CreateInvItem(var_51_object);
	var_51_object->SetItemName(var_48_string);
	object var_52_object; object var_53_object; int var_54_int;
	var_47_object = var_52_object;
	var_51_object = var_53_object;
	var_49_int = var_54_int;
	func_1496(var_52_object, var_53_object, var_54_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1648(bool var_272_bool)
{
	int var_274_int;
	func_1479(var_274_int, "ood11Klara3");
	if(var_274_int == 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


// @pe
void func_1008(void)
{
	func_1148();
	func_966();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1528(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1146(bool var_45_bool)
{
	var_45_bool = true;
}


void func_1148(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1023(void)
{
	@StopGroup0();
	func_966();
	func_1410("Neutral");
	func_957();
}


