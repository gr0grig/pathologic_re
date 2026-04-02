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
			func_1860();
			if(var_8_bool == 13943) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_2013();
			}
			if(var_8_bool == 3807) {
				object var_19_object = var_1_object;
				func_1987(var_0_object);
				object var_66_object; object var_67_object;
				var_66_object = var_1_object;
				var_67_object = var_0_object;
				func_2001();
			}
			if(var_8_bool == 3812) {
				object var_72_object = var_1_object;
				func_1987(var_0_object);
				object var_74_object; object var_75_object;
				var_74_object = var_1_object;
				var_75_object = var_0_object;
				func_2001();
			}
			if(var_8_bool == 13944) {
				object var_78_object; object var_79_object;
				var_78_object = var_1_object;
				var_79_object = var_0_object;
				func_2033();
			}
			if(var_8_bool == 11872) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_1977();
			}
			if(var_8_bool == 11873) {
				object var_102_object; object var_103_object;
				var_102_object = var_1_object;
				var_103_object = var_0_object;
				func_2019();
			}
			if(var_8_bool == 11871) {
				object var_119_object; object var_120_object;
				var_119_object = var_1_object;
				var_120_object = var_0_object;
				func_1977();
			}
			if(var_8_bool == 11876) {
				object var_123_object; object var_124_object;
				var_123_object = var_1_object;
				var_124_object = var_0_object;
				func_2019();
			}
			if(var_7_cvector == 13931) {
				bool var_127_bool = false;
				bool var_128_bool = false;
				bool var_129_bool;
				func_2051(var_1_object);
				if(var_129_bool != 0) {
					bool var_137_bool;
					func_2063(var_1_object);
					if(!var_137_bool) //@nz
						var_128_bool = true;
				}
				if(var_128_bool != 0) {
					bool var_144_bool;
					func_2039(var_1_object);
					if(!var_144_bool) //@nz
						var_127_bool = true;
				}
				if(var_127_bool != 0) {
					object var_151_object; object var_152_object;
					var_151_object = var_1_object;
					var_152_object = var_0_object;
					func_2007();
					func_301(var_8_bool, "Neutral");
					var_0_object->SetMessage(512737); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(512738, 13933, 13932); //@t
					var_0_object->AddReply(512744, 13965, 13938); //@t
					var_0_object->AddReply(512745, 13954, 13939); //@t
					return 0;
				}
				bool var_177_bool = false;
				bool var_178_bool;
				func_2063(var_1_object);
				if(!var_178_bool) { //@nz
					bool var_181_bool;
					func_2039(var_1_object);
					if(!var_181_bool) //@nz
						var_177_bool = true;
				}
				if(var_177_bool != 0) {
					func_301(var_8_bool, "Neutral");
					var_0_object->SetMessage(533081); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533082, -1, 34594); //@t
					var_0_object->AddReply(536138, -1, 37897); //@t
					return 0;
				}
				bool var_192_bool = true;
				bool var_193_bool;
				func_2063(var_1_object);
				if(var_193_bool != 1) {
					bool var_195_bool;
					func_2039(var_1_object);
					if(var_195_bool != 1)
						var_192_bool = false;
				}
				if(var_192_bool != 0) {
					func_301(var_8_bool, "Neutral");
					var_0_object->SetMessage(512748); //@t
					var_0_object->ClearReplies(); //@t
					bool var_199_bool;
					func_2075(var_1_object);
					if(var_199_bool != 0)
						var_0_object->AddReply(512749, 3753, 13943); //@t
					bool var_208_bool = false;
					bool var_209_bool = false;
					bool var_210_bool = false;
					bool var_211_bool;
					func_2123(var_1_object);
					if(var_211_bool != 0) {
						bool var_217_bool;
						func_2087(var_1_object);
						if(var_217_bool != 0)
							var_210_bool = true;
					}
					if(var_210_bool != 0) {
						bool var_223_bool;
						func_2099(var_1_object);
						if(!var_223_bool) //@nz
							var_209_bool = true;
					}
					if(var_209_bool != 0) {
						bool var_230_bool;
						func_2111(var_1_object);
						if(!var_230_bool) //@nz
							var_208_bool = true;
					}
					if(var_208_bool != 0)
						var_0_object->AddReply(512750, 11864, 13944); //@t
					var_0_object->AddReply(512769, -1, 13968); //@t
					return 0;
				}
			}
			if(var_7_cvector == 11864) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(510739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510740, 11866, 11865); //@t
				var_0_object->AddReply(510752, 11866, 11879); //@t
				return 0;
			}
			if(var_7_cvector == 11866) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(510741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510742, 11868, 11867); //@t
				var_0_object->AddReply(510751, 11870, 11877); //@t
				return 0;
			}
			if(var_7_cvector == 11868) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(510743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510744, 11870, 11869); //@t
				var_0_object->AddReply(510749, 11870, 11874); //@t
				var_0_object->AddReply(510750, -1, 11876); //@t
				return 0;
			}
			if(var_7_cvector == 11870) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(510745); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(510747, -1, 11872); //@t
				var_0_object->AddReply(510748, -1, 11873); //@t
				var_0_object->AddReply(510746, -1, 11871); //@t
				return 0;
			}
			if(var_7_cvector == 3753) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503483); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503484, 3756, 3754); //@t
				var_0_object->AddReply(503485, 3778, 3755); //@t
				var_0_object->AddReply(503508, 3763, 3783); //@t
				return 0;
			}
			if(var_7_cvector == 3778) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503505); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503506, 3775, 3779); //@t
				var_0_object->AddReply(503507, 3763, 3781); //@t
				return 0;
			}
			if(var_7_cvector == 3756) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503486); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503487, 3775, 3757); //@t
				var_0_object->AddReply(503488, 3770, 3758); //@t
				var_0_object->AddReply(503489, 3760, 3759); //@t
				var_0_object->AddReply(503491, 3763, 3761); //@t
				return 0;
			}
			if(var_7_cvector == 3760) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503490); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503492, 3763, 3762); //@t
				var_0_object->AddReply(503509, 3786, 3785); //@t
				return 0;
			}
			if(var_7_cvector == 3786) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503510); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503511, 3788, 3787); //@t
				var_0_object->AddReply(503515, 3766, 3793); //@t
				return 0;
			}
			if(var_7_cvector == 3788) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503512); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503513, 3775, 3789); //@t
				var_0_object->AddReply(503514, 3766, 3791); //@t
				return 0;
			}
			if(var_7_cvector == 3763) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503493); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503494, 3766, 3764); //@t
				var_0_object->AddReply(503495, 3766, 3765); //@t
				return 0;
			}
			if(var_7_cvector == 3766) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503496); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503497, 3771, 3769); //@t
				var_0_object->AddReply(503501, 3797, 3773); //@t
				var_0_object->AddReply(503502, -1, 3774); //@t
				return 0;
			}
			if(var_7_cvector == 3797) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503518, -1, 3798); //@t
				var_0_object->AddReply(503519, -1, 3799); //@t
				var_0_object->AddReply(503520, 3801, 3800); //@t
				return 0;
			}
			if(var_7_cvector == 3801) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503522, 3804, 3802); //@t
				var_0_object->AddReply(503523, -1, 3803); //@t
				return 0;
			}
			if(var_7_cvector == 3804) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503524); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503525, 3770, 3805); //@t
				return 0;
			}
			if(var_7_cvector == 3771) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503499); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503500, 3770, 3772); //@t
				var_0_object->AddReply(503516, -1, 3796); //@t
				return 0;
			}
			if(var_7_cvector == 3770) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503498); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503526, -1, 3807); //@t
				var_0_object->AddReply(503527, 3809, 3808); //@t
				return 0;
			}
			if(var_7_cvector == 3809) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503528); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503529, 3811, 3810); //@t
				return 0;
			}
			if(var_7_cvector == 3811) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503530); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503531, -1, 3812); //@t
				var_0_object->AddReply(503532, -1, 3813); //@t
				return 0;
			}
			if(var_7_cvector == 3775) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(503503); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(503504, 3770, 3776); //@t
				return 0;
			}
			if(var_7_cvector == 13965) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512768, 13933, 13966); //@t
				return 0;
			}
			if(var_7_cvector == 13933) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512740, 13935, 13934); //@t
				var_0_object->AddReply(512746, 13935, 13940); //@t
				var_0_object->AddReply(512747, 13935, 13941); //@t
				return 0;
			}
			if(var_7_cvector == 13935) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512741); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512742, 13937, 13936); //@t
				var_0_object->AddReply(512751, 13947, 13945); //@t
				var_0_object->AddReply(512752, 13937, 13946); //@t
				return 0;
			}
			if(var_7_cvector == 13947) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512753); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512754, 13949, 13948); //@t
				var_0_object->AddReply(538781, -1, 40701); //@t
				return 0;
			}
			if(var_7_cvector == 13949) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512755); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512756, -1, 13950); //@t
				var_0_object->AddReply(512757, -1, 13951); //@t
				return 0;
			}
			if(var_7_cvector == 13937) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512743); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512758, 13954, 13952); //@t
				var_0_object->AddReply(512759, 13954, 13953); //@t
				return 0;
			}
			if(var_7_cvector == 13954) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512760); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512761, 13957, 13956); //@t
				return 0;
			}
			if(var_7_cvector == 13957) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512762); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512763, 13959, 13958); //@t
				return 0;
			}
			if(var_7_cvector == 13959) {
				func_301(var_8_bool, "Neutral");
				var_0_object->SetMessage(512764); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(512765, -1, 13960); //@t
				var_0_object->AddReply(512766, -1, 13961); //@t
				return 0;
			}
			var_3_string = true;
			bool var_542_bool;
			func_2240(var_542_bool);
			if(var_542_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x144";
	
	}

}


maintask task_3
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1319(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1867(var_13_object);
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
			func_1867(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1432();
	}

	// @pe
		void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
		{
		func_1447();
		}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_1390();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1604(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_1359(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_1339(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1867(var_53_object);
					var_53_object = var_52_object;
					func_1752(var_51_bool, var_52_object);
				}
			} else {
				func_1354(var_7_int);
				func_1381();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_1381();
		else
			func_1832("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1572();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1595(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_1270(var_25_object);
			func_1832("Neutral");
			func_1390();
			func_1381();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_11_bool;
	func_1604(var_11_bool);
	if(!var_11_bool) goto Label_0; //@nz
}


// @pe
void func_2051(bool var_201_bool)
{
	int var_203_int;
	func_1883(var_203_int, "ood6Klara1");
	if(var_203_int == 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


void func_13(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	object var_39_object;
	func_1867(var_39_object);
	var_39_object = var_38_object;
	func_1694(var_37_bool, var_38_object);
	bool var_132_bool; object var_133_object;
	var_27_object = var_133_object;
	func_1609(var_132_bool, var_133_object, 70.0);
	if(!var_132_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_179_int;
	func_2234(var_179_int);
	var_33_object->SetNPCName(var_179_int);
	int var_180_int;
	func_2232(var_180_int);
	var_33_object->SetNPCDescription(var_180_int);
	string var_181_string;
	func_2236(var_181_string);
	var_33_object->SetPhoto(var_181_string);
	string var_182_string;
	func_2238(var_182_string);
	var_33_object->SetPhoto2(var_182_string);
	int var_183_int;
	func_2215(var_183_int);
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
		var_328_bool = !var_36_bool; //@nz
		if(var_328_bool == 0) goto Label_83;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_83:
	object var_329_object;
	var_27_object = var_329_object;
	func_1677();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2063(bool var_209_bool)
{
	int var_211_int;
	func_1883(var_211_int, "d6q01");
	if(var_211_int == 3)
		var_209_bool = true;
	var_209_bool = false;
}


// @pe
void func_2075(bool var_284_bool)
{
	int var_286_int;
	func_1883(var_286_int, "ood6Klara2");
	if(var_286_int == 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


void func_1570(bool var_59_bool)
{
	var_59_bool = true;
}


void func_1572(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2087(bool var_302_bool)
{
	int var_304_int;
	func_1883(var_304_int, "microscope_d6q01_klara_blood");
	if(var_304_int != 0) {
		var_302_bool = true;
		return 0;
	}
	var_302_bool = false;
}


void func_1832(string var_14_string)
{
	float var_17_float; float var_18_float;
	@lshGetAnimTimes(var_14_string, var_17_float, var_18_float);
	@lshPlayAnimation(var_17_float, var_18_float, false);
}


void func_1319(object var_0_object)
{
	bool var_7_bool;
	func_1604(var_7_bool);
	if(!var_7_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_1315();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1501();
	}
}
EMIT "Return(); Pop(0)";


void func_1577(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


// @pe
void func_301(object var_2_object, string var_227_string)
{
	bool var_228_bool;
	func_2240(var_228_bool);
	if(!var_228_bool) //@nz
		return 0;
	if(var_227_string == var_2_object)
		return 0;
	string var_231_string; bool var_232_bool;
	var_227_string = var_231_string;
	if(var_227_string == "")
		var_232_bool = false;
	else
		var_232_bool = true;
	func_1839(var_231_string, var_232_bool);
	var_2_object = var_227_string;
	
}


void func_1839(string var_231_string, bool var_232_bool)
{
	float var_237_float; float var_238_float;
	@lshGetAnimTimes(var_231_string, var_237_float, var_238_float);
	@lshPlayAnimation(var_237_float, var_238_float, var_232_bool);
}


void func_1585(bool var_15_bool, cvector var_16_cvector)
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


// @pe
void func_2099(bool var_308_bool)
{
	int var_310_int;
	func_1883(var_310_int, "d6q01");
	if(var_310_int == 1000)
		var_308_bool = true;
	var_308_bool = false;
}


void func_1845(bool var_71_bool, string var_72_string)
{
	bool var_74_bool;
	bool var_75_bool;
	func_2240(var_75_bool);
	if(var_75_bool != 0) {
		@lshHasSpeech(var_74_bool, var_72_string);
		if(var_74_bool != 0) {
			@lshPlaySpeech(var_72_string);
			var_71_bool = true;
		}
	}
	var_71_bool = false;
}


void func_1595(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1585(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1339(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1595(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2111(bool var_315_bool)
{
	int var_317_int;
	func_1883(var_317_int, "d6q01");
	if(var_317_int == -1)
		var_315_bool = true;
	var_315_bool = false;
}


void func_1604(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_1860(void)
{
	bool var_10_bool;
	func_2240(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


void func_1609(bool var_132_bool, object var_133_object, float var_134_float)
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
	func_1873(var_159_cvector, (var_148_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2240(var_174_bool);
	if(var_174_bool != 0) {
	} else {
		@HasAnimationTrack(var_152_bool, "head");
		if(var_152_bool == 0) goto Label_1671;
		@LookAsyncCamera("head");
	}
Label_1671:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_132_bool = true;
	
}


void func_1354(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1867(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2123(bool var_296_bool)
{
	int var_298_int;
	func_1883(var_298_int, "ood6Klara3");
	if(var_298_int == 0) {
		var_296_bool = true;
		return 0;
	}
	var_296_bool = false;
}


void func_1359(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1577(var_22_float, var_23_object);
	if(var_22_float > 90000.0) {
		var_15_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_23_object);
	var_19_bool = var_15_bool;
}
EMIT "Stack[-2] = 0";


void func_1873(cvector var_159_cvector, cvector var_160_cvector)
{
	float var_163_float = sqrt(var_160_cvector | var_160_cvector);
	if(var_163_float < 0.000001)
		var_159_cvector = [0.0, 0.0, 0.0];
	var_159_cvector = var_160_cvector / var_163_float;
}


void func_2135(void)
{
	object var_22_object;
	@CreateDiaryEntry(var_22_object, 163, 1, 515405);
	bool var_26_bool; object var_27_object;
	var_22_object = var_27_object;
	func_2187(var_26_bool, var_27_object, 111);
}
EMIT "Stack[-1] = 0";


void func_1883(int var_203_int, string var_204_string)
{
	int var_206_int;
	@GetVariable(var_204_string, var_206_int);
	var_206_int = var_203_int;
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_192_object, object var_193_object)
{
	var_0_object = var_193_object;
	var_1_object = var_192_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_199_bool = false;
		bool var_200_bool = false;
		bool var_201_bool;
		func_2051(var_1_object);
		if(var_201_bool != 0) {
			bool var_209_bool;
			func_2063(var_1_object);
			if(!var_209_bool) //@nz
				var_200_bool = true;
		}
		if(var_200_bool != 0) {
			bool var_216_bool;
			func_2039(var_1_object);
			if(!var_216_bool) //@nz
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			object var_223_object; object var_224_object;
			var_223_object = var_1_object;
			var_224_object = var_0_object;
			func_2007();
			func_301(var_193_object, "Neutral");
			var_0_object->SetMessage(512737); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(512738, 13933, 13932); //@t
			var_0_object->AddReply(512744, 13965, 13938); //@t
			var_0_object->AddReply(512745, 13954, 13939); //@t
		} else {
					bool var_262_bool = false;
					bool var_263_bool;
					func_2063(var_1_object);
					if(!var_263_bool) { //@nz
						bool var_266_bool;
						func_2039(var_1_object);
						if(!var_266_bool) //@nz
							var_262_bool = true;
					}
					if(var_262_bool == 0) goto Label_191;
					func_301(var_193_object, "Neutral");
					var_0_object->SetMessage(533081); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(533082, -1, 34594); //@t
					var_0_object->AddReply(536138, -1, 37897); //@t
		}
	}
Label_271:
	for(;;) {
		bool var_249_bool;
		func_2240(var_249_bool);
		if(var_249_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1832(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_300;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_300:
			return 0;

		}

	}
	
Label_191:
	bool var_277_bool = true;
	bool var_278_bool;
	func_2063(var_1_object);
	if(var_278_bool != 1) {
		bool var_280_bool;
		func_2039(var_1_object);
		if(var_280_bool != 1)
			var_277_bool = false;
	}
	if(var_277_bool != 0) {
		func_301(var_193_object, "Neutral");
		var_0_object->SetMessage(512748); //@t
		var_0_object->ClearReplies(); //@t
		bool var_284_bool;
		func_2075(var_1_object);
		if(var_284_bool != 0)
			var_0_object->AddReply(512749, 3753, 13943); //@t
		bool var_293_bool = false;
		bool var_294_bool = false;
		bool var_295_bool = false;
		bool var_296_bool;
		func_2123(var_1_object);
		if(var_296_bool != 0) {
			bool var_302_bool;
			func_2087(var_1_object);
			if(var_302_bool != 0)
				var_295_bool = true;
		}
		if(var_295_bool != 0) {
			bool var_308_bool;
			func_2099(var_1_object);
			if(!var_308_bool) //@nz
				var_294_bool = true;
		}
		if(var_294_bool != 0) {
			bool var_315_bool;
			func_2111(var_1_object);
			if(!var_315_bool) //@nz
				var_293_bool = true;
		}
		if(var_293_bool != 0)
			var_0_object->AddReply(512750, 11864, 13944); //@t
		var_0_object->AddReply(512769, -1, 13968); //@t
		goto Label_271;
	}
}
EMIT "GOTO 0x62";


void func_1888(int var_61_int, int var_62_int)
{
	object var_64_object;
	@CreateIntVector(var_64_object);
	var_64_object->add(var_61_int);
	var_64_object->add(var_62_int);
	@SendWorldWndMessage(3, var_64_object);
}
EMIT "Stack[-1] = 0";


void func_2148(void)
{
	object var_107_object;
	@CreateDiaryEntry(var_107_object, 122, 1, 513745);
	bool var_111_bool; object var_112_object;
	var_107_object = var_112_object;
	func_2187(var_111_bool, var_112_object, 111);
}
EMIT "Stack[-1] = 0";


void func_1381(void)
{
	float var_21_float;
	@rand(var_21_float, 8, 16);
	@SetTimer(10, var_21_float);
}


void func_1900(object var_50_object, object var_51_object, int var_52_int)
{
	int var_56_int;
	var_51_object->GetItemID(var_56_int);
	int var_57_int;
	@GetInvItemProperty(var_57_int, var_56_int, "Category");
	bool var_58_bool;
	var_50_object->AddItem(var_58_bool, var_51_object, var_57_int, var_52_int);
	if(!var_58_bool) { //@nz
		var_50_object->DropItems(var_51_object, var_52_int);
	} else {
		int var_61_int; int var_62_int;
		var_56_int = var_61_int;
		var_52_int = var_62_int;
		func_1888(var_61_int, var_62_int);
	}
	
}


void func_1390(void)
{
	@KillTimer(10);
}


void func_2161(void)
{
	object var_87_object;
	@CreateDiaryEntry(var_87_object, 635, 1, 533083);
	bool var_91_bool; object var_92_object;
	var_87_object = var_92_object;
	func_2187(var_91_bool, var_92_object, 111);
}
EMIT "Stack[-1] = 0";


void func_2174(object var_35_object)
{
	object var_37_object;
	@GetDiaryRoot(var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_35_object = false;
	}
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_1919(object var_45_object, string var_46_string, int var_47_int)
{
	object var_49_object;
	@CreateInvItem(var_49_object);
	var_49_object->SetItemName(var_46_string);
	object var_50_object; object var_51_object; int var_52_int;
	var_45_object = var_50_object;
	var_49_object = var_51_object;
	var_47_int = var_52_int;
	func_1900(var_50_object, var_51_object, var_52_int);
}
EMIT "Stack[-1] = 0";


void func_2187(bool var_26_bool, object var_27_object, int var_28_int)
{
	object var_35_object;
	func_2174(var_35_object);
	object var_32_object;
	var_35_object = var_32_object;
	object var_33_object;
	var_32_object->Find(var_28_int, var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_28_int);
		var_26_bool = false;
	}
	var_33_object->AddChild(var_27_object);
	@SendWorldWndMessage(7);
	int var_34_int;
	var_27_object->GetCategory(var_34_int);
	@SetDiarySection(var_34_int);
	var_26_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1932(bool var_94_bool, string var_95_string, string var_96_string)
{
	object var_98_object;
	@FindActor(var_98_object, var_95_string);
	if(var_98_object == null)
		var_94_bool = false;
	@Trigger(var_98_object, var_96_string);
	var_94_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1677(void)
{
	bool var_331_bool;
	@CameraSwitchToNormal();
	bool var_332_bool;
	func_2240(var_332_bool);
	if(var_332_bool != 0) {
	} else {
		@HasAnimationTrack(var_331_bool, "head");
		if(var_331_bool == 0) goto Label_1693;
		@UnlookAsync("head");
	}
Label_1693:
	
}


void func_1944(int var_92_int)
{
	float var_94_float;
	@GetGameTime(var_94_float);
	var_92_int = 1 + (var_94_float / 24);
}


// @pe
void func_1432(void)
{
	func_1572();
	func_1390();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1694(bool var_37_bool, object var_38_object)
{
	int var_44_int; int var_45_int;
	@GetVariable("voice_common", var_44_int);
	if(var_44_int != 0) {
		bool var_48_bool; object var_49_object;
		var_38_object = var_49_object;
		func_1752(var_48_bool, var_49_object);
		if(!var_48_bool) { //@nz
			bool var_79_bool; object var_80_object;
			var_38_object = var_80_object;
			func_1789(var_79_bool, var_80_object);
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
		func_1789(var_124_bool, var_125_object);
		if(!var_124_bool) { //@nz
			bool var_127_bool; object var_128_object;
			var_38_object = var_128_object;
			func_1752(var_127_bool, var_128_object);
			if(!var_127_bool) { //@nz
				var_37_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1750;
	
Label_1750:
	var_37_bool = true;
	
}


void func_1953(string var_45_string, int var_46_int)
{
	string var_48_string = "idle";
	if(var_46_int != 0)
		var_48_string += var_46_int;
	var_48_string = var_45_string;
}


void func_2215(int var_183_int)
{
	int var_185_int;
	@GetVariable("branch", var_185_int);
	if(var_185_int == 0) {
		var_183_int = 1;
		return 2;
	EMIT "GOTO 0x8b6";
	}
	if(var_185_int == 1) {
		var_183_int = 2;
		return 2;
	}
	var_183_int = 3;
}


void func_1447(void)
{
	@StopGroup0();
	func_1390();
	func_1832("Neutral");
	func_1381();
}


void func_1960(int var_39_int)
{
	int var_42_int; bool var_43_bool;
	var_42_int = 0;
	
	for(;;) {
		string var_45_string; int var_46_int;
		var_42_int = var_46_int;
		func_1953(var_45_string, var_46_int);
		@HasAnimation(var_43_bool, "all", var_45_string);
		if(!var_43_bool) //@nz
			break;
		var_42_int += 1;
	}
	var_42_int = var_39_int;
}


void func_2232(int var_180_int)
{
	var_180_int = 515540;
}


// @pe
void func_1977(void)
{
	func_2161();
	bool var_94_bool;
	func_1932(var_94_bool, "quest_d6_01", "completed");
}


void func_2234(int var_179_int)
{
	var_179_int = 502865;
}


void func_2236(string var_181_string)
{
	var_181_string = "ui/NPC_Klara.png";
}


void func_2238(string var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png";
}


void func_2240(bool var_75_bool)
{
	var_75_bool = true;
}


// @pe
void func_1987(object var_19_object)
{
	func_2135();
	@Trace("klara blood is given");
	object var_45_object;
	var_19_object = var_45_object;
	func_1919(var_45_object, "d6q01_klara_blood", 1);
}


// @pe
void func_2001(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_2007(void)
{
	@SetVariable("ood6Klara1", 1);
}


void func_1752(bool var_48_bool, object var_49_object)
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
		func_1845(var_71_bool, var_72_string);
		var_71_bool = var_48_bool;
		return 10;

	}
}


// @pe
void func_2013(void)
{
	@SetVariable("ood6Klara2", 1);
}


void func_1501(void)
{
	bool var_33_bool; int var_34_int; int var_35_int; bool var_36_bool;
	@WaitForAnimEnd();
	bool var_37_bool;
	func_1604(var_37_bool);
	if(!var_37_bool) //@nz
		return 12;
	int var_39_int;
	func_1960(var_39_int);
	int var_31_int;
	var_39_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_52_bool = false;
		if(var_32_int < 5) {
			bool var_55_bool;
			func_1604(var_55_bool);
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
			func_1953(var_66_string, var_67_int);
			@PlayAnimation("all", var_66_string);
			@WaitForAnimEnd(var_36_bool);
			var_68_bool = !var_36_bool; //@nz
			if(var_68_bool == 0) goto Label_1556;
			goto Label_1567;
			}
				Label_1556:
					bool var_59_bool;
					func_1570(var_59_bool);
					var_60_bool = !var_59_bool; //@nz
					if(var_60_bool == 0) goto Label_1562;
			}
		}
	Label_1567:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1562:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


// @pe
void func_2019(void)
{
	@SetVariable("d6q01KlaraVolonteer", 1);
	func_2148();
	bool var_114_bool;
	func_1932(var_114_bool, "quest_d6_01", "completed");
}


// @pe
void func_2033(void)
{
	@SetVariable("ood6Klara3", 1);
}


// @pe
void func_1270(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(1);
	int var_26_int;
	func_13(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


// @pe
void func_2039(bool var_216_bool)
{
	int var_218_int;
	func_1883(var_218_int, "d6q01");
	if(var_218_int == 4)
		var_216_bool = true;
	var_216_bool = false;
}


void func_1789(bool var_79_bool, object var_80_object)
{
	bool var_88_bool; int var_89_int; string var_90_string;
	int var_92_int;
	func_1944(var_92_int);
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
		func_1845(var_111_bool, var_112_string);
		var_111_bool = var_79_bool;
		return 10;

	}
}


