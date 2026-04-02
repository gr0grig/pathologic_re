// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, cvector var_7_cvector, bool var_8_bool)
	{
		if(1 != 0) {
			func_1412();
			if(var_8_bool == 24461) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1489();
			}
			if(var_8_bool == 24478) {
				object var_19_object; object var_20_object;
				var_19_object = var_1_object;
				var_20_object = var_0_object;
				func_1489();
			}
			if(var_8_bool == 24467) {
				object var_23_object; object var_24_object;
				var_23_object = var_1_object;
				var_24_object = var_0_object;
				func_1489();
			}
			if(var_8_bool == 24468) {
				object var_27_object; object var_28_object;
				var_27_object = var_1_object;
				var_28_object = var_0_object;
				func_1489();
			}
			if(var_8_bool == 23272) {
				object var_31_object; object var_32_object;
				var_31_object = var_1_object;
				var_32_object = var_0_object;
				func_1495();
			}
			if(var_8_bool == 36215) {
				object var_37_object; object var_38_object;
				var_37_object = var_1_object;
				var_38_object = var_0_object;
				func_1501();
			}
			if(var_7_cvector == 23268) {
				bool var_43_bool = true;
				bool var_44_bool = false;
				bool var_45_bool;
				func_1507(var_1_object);
				if(var_45_bool != 0) {
					bool var_53_bool;
					func_1531(var_1_object);
					if(var_53_bool != 0)
						var_44_bool = true;
				}
				if(var_44_bool != 1) {
					bool var_59_bool = false;
					bool var_60_bool;
					func_1519(var_1_object);
					if(var_60_bool != 0) {
						bool var_66_bool;
						func_1531(var_1_object);
						if(var_66_bool != 0)
							var_59_bool = true;
					}
					if(var_59_bool != 1)
						var_43_bool = false;
				}
				if(var_43_bool != 0) {
					object var_68_object; object var_69_object;
					var_68_object = var_1_object;
					var_69_object = var_0_object;
					func_1483();
					func_271(var_8_bool, "Neutral");
					var_0_object->SetMessage(522101); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(522102, 24452, 23269); //@t
					var_0_object->AddReply(522103, 24448, 23270); //@t
					return 0;
				}
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(522104); //@t
				var_0_object->ClearReplies(); //@t
				bool var_93_bool = false;
				bool var_94_bool = false;
				bool var_95_bool;
				func_1507(var_1_object);
				if(var_95_bool != 0) {
					bool var_97_bool;
					func_1519(var_1_object);
					if(var_97_bool != 0)
						var_94_bool = true;
				}
				if(var_94_bool != 0) {
					bool var_99_bool;
					func_1543(var_1_object);
					if(!var_99_bool) //@nz
						var_93_bool = true;
				}
				if(var_93_bool != 0)
					var_0_object->AddReply(523263, 24464, 24463); //@t
				bool var_109_bool = false;
				bool var_110_bool;
				func_1543(var_1_object);
				if(var_110_bool != 0) {
					bool var_112_bool;
					func_1555(var_1_object);
					if(var_112_bool != 0)
						var_109_bool = true;
				}
				if(var_109_bool != 0)
					var_0_object->AddReply(522105, 24443, 23272); //@t
				bool var_121_bool = false;
				bool var_122_bool;
				func_1567(var_1_object);
				if(var_122_bool != 0) {
					bool var_128_bool;
					func_1579(var_1_object);
					if(var_128_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0)
					var_0_object->AddReply(534577, 36216, 36215); //@t
				var_0_object->AddReply(523242, -1, 24442); //@t
				return 0;
			}
			if(var_7_cvector == 36216) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(534578); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534579, 36219, 36217); //@t
				var_0_object->AddReply(534580, -1, 36218); //@t
				return 0;
			}
			if(var_7_cvector == 36219) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(534581); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(534582, -1, 36220); //@t
				var_0_object->AddReply(534583, -1, 36221); //@t
				return 0;
			}
			if(var_7_cvector == 24443) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523243); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523244, -1, 24444); //@t
				var_0_object->AddReply(523245, 24446, 24445); //@t
				return 0;
			}
			if(var_7_cvector == 24446) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523246); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523247, -1, 24447); //@t
				return 0;
			}
			if(var_7_cvector == 24464) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523264); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523265, 24466, 24465); //@t
				return 0;
			}
			if(var_7_cvector == 24466) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523266); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523267, -1, 24467); //@t
				var_0_object->AddReply(523268, -1, 24468); //@t
				return 0;
			}
			if(var_7_cvector == 24448) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523248); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523250, 24452, 24450); //@t
				var_0_object->AddReply(523249, 24452, 24449); //@t
				return 0;
			}
			if(var_7_cvector == 24452) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523252); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523253, 24451, 24453); //@t
				return 0;
			}
			if(var_7_cvector == 24451) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523251); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523254, 24456, 24454); //@t
				var_0_object->AddReply(523255, 24469, 24455); //@t
				return 0;
			}
			if(var_7_cvector == 24469) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523269); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523270, 24456, 24470); //@t
				return 0;
			}
			if(var_7_cvector == 24456) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523256); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523257, 24458, 24457); //@t
				var_0_object->AddReply(523271, 24473, 24472); //@t
				return 0;
			}
			if(var_7_cvector == 24473) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523272); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523273, 24475, 24474); //@t
				var_0_object->AddReply(523275, 24475, 24476); //@t
				return 0;
			}
			if(var_7_cvector == 24475) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523274); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523276, -1, 24478); //@t
				var_0_object->AddReply(523277, -1, 24479); //@t
				return 0;
			}
			if(var_7_cvector == 24458) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523258); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523259, 24460, 24459); //@t
				return 0;
			}
			if(var_7_cvector == 24460) {
				func_271(var_8_bool, "Neutral");
				var_0_object->SetMessage(523260); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523261, -1, 24461); //@t
				var_0_object->AddReply(523262, -1, 24462); //@t
				return 0;
			}
			var_3_string = true;
			bool var_275_bool;
			func_1481(var_275_bool);
			if(var_275_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x126";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_871(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1419(var_13_object);
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
			func_1419(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_984();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_999();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_942();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1156(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_911(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_891(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1419(var_53_object);
					var_53_object = var_52_object;
					func_1304(var_51_bool, var_52_object);
				}
			} else {
				func_906(var_7_int);
				func_933();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_933();
		else
			func_1384("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1124();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1147(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_822(var_25_object);
			func_1384("Neutral");
			func_942();
			func_933();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1156(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


void func_891(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1147(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1412(void)
{
	bool var_10_bool;
	func_1481(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1156(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1543(bool var_268_bool)
{
	int var_270_int;
	func_1435(var_270_int, "b11q01KlaraWillHelp");
	if(var_270_int != 0) {
		var_268_bool = true;
		return 0;
	}
	var_268_bool = false;
}


void func_1161(bool var_132_bool, object var_133_object, float var_134_float)
{
	cvector var_145_cvector; bool var_152_bool;
	var_133_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_133_object->GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_153_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_154_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_154_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_155_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_157_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_157_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_159_cvector;
	func_1425(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_149_cvector = ((var_147_cvector * var_134_float) + (var_159_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_132_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_172_float = GetByIndex(var_149_cvector, 0);
	var_173_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_172_float, var_173_float);
	bool var_174_bool;
	func_1481(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1223;
		@LookAsyncCamera("head");
	}
Label_1223:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_906(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1419(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1419(var_39_object);
	var_39_object = var_38_object;
	func_1246(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1161(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_1475(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_1473(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_1477(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_1479(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_1591(var_183_int);
	var_33_object->SetPlayerName(var_183_int);
	bool var_34_bool;
	@IsOverrideActive(var_34_bool);
	if(var_34_bool != 0) {
		var_26_int = -2;
		return 8;
	}
	@DoDialog(var_33_object);
	object var_192_object; object var_193_object;
	var_27_object = var_192_object;
	var_33_object = var_193_object;
	TaskCall(2);
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_309_bool = !var_36_bool; //@nz
		if(var_309_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_310_object;
	var_27_object = var_310_object;
	func_1229();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_271(object var_2_object, string var_228_string)
{
	bool var_229_bool;
	func_1481(var_229_bool);
	if(!var_229_bool) //@nz
		return 0;
	if(var_228_string == var_2_object)
		return 0;
	string var_232_string; bool var_233_bool;
	var_228_string = var_232_string;
	if(var_228_string == "")
		var_233_bool = false;
	else
		var_233_bool = true;
	func_1391(var_232_string, var_233_bool);
	var_2_object = var_228_string;
	
}


void func_911(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1129(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1425(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


// @pe
void func_1555(bool var_281_bool)
{
	int var_283_int;
	func_1435(var_283_int, "oob11Klara2");
	if(var_283_int == 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


// @pe
void func_1531(bool var_209_bool)
{
	int var_211_int;
	func_1435(var_211_int, "oob11Klara1");
	if(var_211_int == 0) {
		var_209_bool = true;
		return 0;
	}
	var_209_bool = false;
}


void func_1304(bool var_48_bool, object var_49_object)
{
	string var_55_string; bool var_57_bool; int var_58_int; string var_59_string;
	var_55_string = "c";
	int var_56_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_49_object->HasProperty((var_55_string + (var_56_int + 1)), var_57_bool);
			if(!var_57_bool) { //@nz
			} else {
				var_56_int += 1;
			}
		}
		if(!var_56_int) { //@nz
			var_48_bool = false;
			return 10;
		}
		var_58_int = 0;
		if(var_56_int > 1)
			@irand(var_58_int, var_56_int);
		var_49_object->GetProperty((var_55_string + (var_58_int + 1)), var_59_string);
		bool var_71_bool; string var_72_string;
		var_59_string = var_72_string;
		func_1397(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


void func_1435(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


void func_1053(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1156(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1456(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1156(var_55_bool);
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0) {
			if(!var_31_int) { //@nz
				@Sleep(3, var_33_bool);
				if(!var_33_bool) { //@nz
				} else {
			} else {
			@irand(var_34_int, var_31_int);
			@irand(var_35_int, 5);
			if(var_35_int != 0)
				var_34_int = 0;
			string var_66_string; int var_67_int;
			var_34_int = var_67_int;
			func_1449(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1108;
			goto Label_1119;
			}
				Label_1108:
					bool var_59_bool;
					func_1122(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1114;
			}
		}
	Label_1119:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1114:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


// @pe
void func_1567(bool var_291_bool)
{
	int var_293_int;
	func_1435(var_293_int, "b9KlaraLetter");
	if(var_293_int != 0) {
		var_291_bool = true;
		return 0;
	}
	var_291_bool = false;
}


void func_1440(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


void func_933(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1449(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


// @pe
void func_1579(bool var_297_bool)
{
	int var_299_int;
	func_1435(var_299_int, "oob11Klara3");
	if(var_299_int == 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


void func_942(void)
{
	@KillTimer(10);
}


void func_1456(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1449(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


// @pe
void func_822(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1591(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x646";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1341(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1440(var_92_int);
	string var_86_string = ("d" + var_92_int) + "m";
	int var_87_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_80_object->HasProperty((var_86_string + (var_87_int + 1)), var_88_bool);
			if(!var_88_bool) { //@nz
			} else {
				var_87_int += 1;
			}
		}
		if(!var_87_int) { //@nz
			var_79_bool = false;
			return 10;
		}
		var_89_int = 0;
		if(var_87_int > 1)
			@irand(var_89_int, var_87_int);
		var_80_object->GetProperty((var_86_string + (var_89_int + 1)), var_90_string);
		bool var_111_bool; string var_112_string;
		var_90_string = var_112_string;
		func_1397(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


void func_1473(int var_180_int)
{
	var_180_int = 515540;
}


void func_1475(int var_179_int)
{
	var_179_int = 502865;
}


void func_1477(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


void func_1479(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


void func_1481(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1483(void)
{
	@SetVariable("oob11Klara1", 1);
}


void func_1229(void)
{
	bool var_312_bool;
	@CameraSwitchToNormal();
	bool var_313_bool;
	func_1481(var_313_bool);
	if(var_313_bool != 0) {
	} else {
		@HasAnimationTrack(var_312_bool, "head");
		if(var_312_bool == 0) goto Label_1245;
		@UnlookAsync("head");
	}
Label_1245:
	
}


// @pe
void func_1489(void)
{
	@SetVariable("b11q01KlaraWillHelp", 1);
}


// @pe
void func_1495(void)
{
	@SetVariable("oob11Klara2", 1);
}


// @pe
void func_984(void)
{
	func_1124();
	func_942();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


// @pe
void func_1501(void)
{
	@SetVariable("oob11Klara3", 1);
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool = true;
		bool var_200_bool = false;
		bool var_201_bool;
		func_1507(var_1_object);
		if(var_201_bool != 0) {
			bool var_209_bool;
			func_1531(var_1_object);
			if(var_209_bool != 0)
				var_200_bool = true;
		}
		if(var_200_bool != 1) {
			bool var_215_bool = false;
			bool var_216_bool;
			func_1519(var_1_object);
			if(var_216_bool != 0) {
				bool var_222_bool;
				func_1531(var_1_object);
				if(var_222_bool != 0)
					var_215_bool = true;
			}
			if(var_215_bool != 1)
				var_199_bool = false;
		}
		if(var_199_bool != 0) {
			object var_224_object; object var_225_object;
			var_224_object = var_1_object;
			var_225_object = var_0_object;
			func_1483();
			func_271(var_193_object, "Neutral");
			var_0_object->SetMessage(522101); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(522102, 24452, 23269); //@t
			var_0_object->AddReply(522103, 24448, 23270); //@t
		} else {
					func_271(var_193_object, "Neutral");
					var_0_object->SetMessage(522104); //@t
					var_0_object->ClearReplies(); //@t
					bool var_262_bool = false;
					bool var_263_bool = false;
					bool var_264_bool;
					func_1507(var_1_object);
					if(var_264_bool != 0) {
						bool var_266_bool;
						func_1519(var_1_object);
						if(var_266_bool != 0)
							var_263_bool = true;
					}
					if(var_263_bool != 0) {
						bool var_268_bool;
						func_1543(var_1_object);
						if(!var_268_bool) //@nz
							var_262_bool = true;
					}
					if(var_262_bool != 0)
						var_0_object->AddReply(523263, 24464, 24463); //@t
					bool var_278_bool = false;
					bool var_279_bool;
					func_1543(var_1_object);
					if(var_279_bool != 0) {
						bool var_281_bool;
						func_1555(var_1_object);
						if(var_281_bool != 0)
							var_278_bool = true;
					}
					if(var_278_bool != 0)
						var_0_object->AddReply(522105, 24443, 23272); //@t
					bool var_290_bool = false;
					bool var_291_bool;
					func_1567(var_1_object);
					if(var_291_bool != 0) {
						bool var_297_bool;
						func_1579(var_1_object);
						if(var_297_bool != 0)
							var_290_bool = true;
					}
					if(var_290_bool != 0)
						var_0_object->AddReply(534577, 36216, 36215); //@t
					var_0_object->AddReply(523242, -1, 24442); //@t
		}
	}
	for(;;) {
		bool var_247_bool;
		func_1481(var_247_bool);
		if(var_247_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1384(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_270;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_270:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x62";


void func_1246(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1304(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1341(var_79_bool, var_80_object);
			if(!var_79_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@irand(var_45_int, 2);
		if(var_45_int != 0)
			@SetVariable("voice_common", ((var_44_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_124_bool; object var_125_object;
		var_38_object = var_125_object;
		func_1341(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1304(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1302;
	
Label_1302:
	var_37_bool = true;
	
}


void func_1122(bool var_59_bool)
{
	var_59_bool = true;
}


// @pe
void func_1507(bool var_201_bool)
{
	int var_203_int;
	func_1435(var_203_int, "b11q01");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_1124(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_871(object var_0_object)
{
	bool var_7_bool;
	func_1156(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_867();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1053();
	}
}
EMIT "Return(); Pop(0)";


void func_1384(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_999(void)
{
	@StopGroup0();
	func_942();
	func_1384("Neutral");
	func_933();
}


void func_1129(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


// @pe
void func_1519(bool var_216_bool)
{
	int var_218_int;
	func_1435(var_218_int, "b11q01");
	if(var_218_int == 1)
		var_216_bool = true;
	var_216_bool = false;
}


void func_1391(string var_232_string, bool var_233_bool)
{
	float var_238_float; float var_239_float;
	@lshGetAnimTimes(var_232_string, var_238_float, var_239_float);
	@lshPlayAnimation(var_238_float, var_239_float, var_233_bool);
}


void func_1137(bool var_15_bool, cvector var_16_cvector)
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


void func_1397(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_1481(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1147(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1137(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


