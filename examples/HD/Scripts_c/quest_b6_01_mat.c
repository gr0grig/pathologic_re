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
			func_1584();
			if(var_8_bool == 21809) {
				object var_13_object; object var_14_object;
				var_13_object = var_1_object;
				var_14_object = var_0_object;
				func_1712();
			}
			if(var_8_bool == 21822) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1712();
			}
			if(var_8_bool == 21834) {
				object var_46_object; object var_47_object;
				var_46_object = var_1_object;
				var_47_object = var_0_object;
				func_1712();
			}
			if(var_8_bool == 21895) {
				object var_50_object = var_1_object;
				func_1721(var_0_object);
				object var_91_object = var_1_object;
				func_1770(var_0_object);
				object var_117_object; object var_118_object;
				var_117_object = var_1_object;
				var_118_object = var_0_object;
				func_1758();
				object var_121_object = var_1_object;
				func_1786(var_0_object);
			}
			if(var_8_bool == 21890) {
				object var_147_object = var_1_object;
				func_1721(var_0_object);
				object var_149_object = var_1_object;
				func_1770(var_0_object);
				object var_151_object = var_1_object;
				func_1786(var_0_object);
				object var_153_object; object var_154_object;
				var_153_object = var_1_object;
				var_154_object = var_0_object;
				func_1758();
			}
			if(var_8_bool == 29926) {
				object var_157_object; object var_158_object;
				var_157_object = var_1_object;
				var_158_object = var_0_object;
				func_1764();
			}
			if(var_7_cvector == 21800) {
				bool var_163_bool;
				func_1809(var_1_object);
				if(var_163_bool != 0) {
					object var_171_object; object var_172_object;
					var_171_object = var_1_object;
					var_172_object = var_0_object;
					func_1706();
					func_222(var_8_bool, "Patronage");
					var_0_object->SetMessage(520595); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(520596, 21802, 21801); //@t
					var_0_object->AddReply(520621, 29795, 21829); //@t
					return 0;
				}
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(520622); //@t
				var_0_object->ClearReplies(); //@t
				bool var_201_bool;
				func_1821(var_1_object);
				if(var_201_bool != 0)
					var_0_object->AddReply(520623, 21833, 21832); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_1833(var_211_bool, var_1_object);
				if(var_211_bool != 0) {
					bool var_219_bool;
					func_1843(var_1_object);
					if(var_219_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_object->AddReply(520626, 21836, 21835); //@t
				bool var_228_bool = false;
				bool var_229_bool;
				func_1843(var_1_object);
				if(var_229_bool != 0) {
					bool var_231_bool;
					func_1855(var_231_bool, var_1_object);
					if(var_231_bool != 0)
						var_228_bool = true;
				}
				if(var_228_bool != 0)
					var_0_object->AddReply(520686, 21897, 21896); //@t
				bool var_245_bool;
				func_1797(var_1_object);
				if(var_245_bool != 0)
					var_0_object->AddReply(528534, 29927, 29926); //@t
				var_0_object->AddReply(520629, -1, 21838); //@t
				return 0;
			}
			if(var_7_cvector == 29927) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(528535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528536, 29929, 29928); //@t
				return 0;
			}
			if(var_7_cvector == 29929) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528537); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528538, 29931, 29930); //@t
				return 0;
			}
			if(var_7_cvector == 29931) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528539); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528540, 29933, 29932); //@t
				return 0;
			}
			if(var_7_cvector == 29933) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528541); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528542, 29935, 29934); //@t
				return 0;
			}
			if(var_7_cvector == 29935) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528543); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528544, 29937, 29936); //@t
				return 0;
			}
			if(var_7_cvector == 29937) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528546, -1, 29938); //@t
				return 0;
			}
			if(var_7_cvector == 21897) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(520687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520689, 21900, 21899); //@t
				var_0_object->AddReply(520688, -1, 21898); //@t
				return 0;
			}
			if(var_7_cvector == 21900) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(520690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520691, -1, 21901); //@t
				var_0_object->AddReply(520692, -1, 21902); //@t
				return 0;
			}
			if(var_7_cvector == 21836) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(520627); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520628, 21885, 21837); //@t
				var_0_object->AddReply(520677, 21887, 21886); //@t
				return 0;
			}
			if(var_7_cvector == 21887) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(520678); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520679, 21885, 21888); //@t
				return 0;
			}
			if(var_7_cvector == 21885) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(520676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520681, 21892, 21891); //@t
				var_0_object->AddReply(520680, -1, 21890); //@t
				return 0;
			}
			if(var_7_cvector == 21892) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(520682); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520683, 21894, 21893); //@t
				var_0_object->AddReply(528420, 29803, 29802); //@t
				return 0;
			}
			if(var_7_cvector == 29803) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(528421); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528422, 21894, 29804); //@t
				return 0;
			}
			if(var_7_cvector == 21894) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(520684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520685, -1, 21895); //@t
				return 0;
			}
			if(var_7_cvector == 21833) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(520624); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520625, -1, 21834); //@t
				return 0;
			}
			if(var_7_cvector == 21802) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(520597); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528414, 29795, 29794); //@t
				return 0;
			}
			if(var_7_cvector == 29795) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(528415); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528416, 29798, 29797); //@t
				var_0_object->AddReply(528418, 21806, 29799); //@t
				return 0;
			}
			if(var_7_cvector == 29798) {
				func_222(var_8_bool, "Discontent");
				var_0_object->SetMessage(528417); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520598, 21804, 21803); //@t
				var_0_object->AddReply(520620, 21808, 21827); //@t
				return 0;
			}
			if(var_7_cvector == 21804) {
				func_222(var_8_bool, "Patronage");
				var_0_object->SetMessage(520599); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520600, 21806, 21805); //@t
				return 0;
			}
			if(var_7_cvector == 21806) {
				func_222(var_8_bool, "Neutral");
				var_0_object->SetMessage(520601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520602, 21808, 21807); //@t
				var_0_object->AddReply(520605, 21811, 21810); //@t
				return 0;
			}
			if(var_7_cvector == 21811) {
				func_222(var_8_bool, "Untrust");
				var_0_object->SetMessage(520606); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520607, 21813, 21812); //@t
				var_0_object->AddReply(520617, 21824, 21823); //@t
				return 0;
			}
			if(var_7_cvector == 21824) {
				func_222(var_8_bool, "Untrust");
				var_0_object->SetMessage(520618); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520619, 21815, 21825); //@t
				return 0;
			}
			if(var_7_cvector == 21813) {
				func_222(var_8_bool, "Untrust");
				var_0_object->SetMessage(520608); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520609, 21815, 21814); //@t
				var_0_object->AddReply(520616, -1, 21822); //@t
				return 0;
			}
			if(var_7_cvector == 21815) {
				func_222(var_8_bool, "Untrust");
				var_0_object->SetMessage(520610); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520611, 21817, 21816); //@t
				var_0_object->AddReply(520615, 21817, 21821); //@t
				return 0;
			}
			if(var_7_cvector == 21817) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(520612); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520613, 21808, 21818); //@t
				var_0_object->AddReply(520614, -1, 21820); //@t
				return 0;
			}
			if(var_7_cvector == 21808) {
				func_222(var_8_bool, "Rage");
				var_0_object->SetMessage(520603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(520604, -1, 21809); //@t
				var_0_object->AddReply(528419, -1, 29801); //@t
				return 0;
			}
			var_3_string = true;
			bool var_478_bool;
			func_2027(var_478_bool);
			if(var_478_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xf5";
	
	}

}


maintask task_2
{
	// @pe
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1029(var_6_bool);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, string var_7_string)
	{
		bool var_9_bool;
		if(var_7_string == "cleanup") {
			var_1_object = true;
			@IsLoaded(var_9_bool);
			if(!var_9_bool) { //@nz
				object var_13_object;
				func_1591(var_13_object);
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
			func_1591(var_8_object);
			@RemoveActor(var_8_object);
			@Hold();
		}
		func_1136();
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool)
	{
		func_1151();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			func_1094();
			bool var_11_bool = false;
			bool var_12_bool;
			func_1308(var_12_bool);
			if(var_12_bool != 0) {
				bool var_15_bool;
				func_1063(var_15_bool);
				if(var_15_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				bool var_32_bool;
				func_1043(var_32_bool);
				if(var_32_bool != 0) {
					bool var_51_bool; object var_52_object;
					object var_53_object;
					func_1591(var_53_object);
					var_53_object = var_52_object;
					func_1458(var_51_bool, var_52_object);
				}
			} else {
				func_1058(var_7_int);
				func_1085();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, bool var_7_bool)
	{
		if(var_7_bool != 0)
			func_1085();
		else
			func_1538("Neutral");
	
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, cvector var_5_cvector, bool var_6_bool, object var_7_object)
	{
		bool var_9_bool;
		@IsOverrideActive(var_9_bool);
		if(!var_9_bool) { //@nz
			disable OnUse;
			func_1276();
			bool var_11_bool; object var_12_object;
			var_7_object = var_12_object;
			func_1299(var_11_bool, var_12_object);
			enable OnUse;
			object var_25_object;
			var_7_object = var_25_object;
			func_980(var_25_object);
			func_1538("Neutral");
			func_1094();
			func_1085();
		}
	}

}


void func_0(object var_0_object, int var_26_int, object var_27_object)
{
	var_0_object = var_27_object;
	bool var_37_bool; object var_38_object;
	var_27_object = var_38_object;
	func_1313(var_37_bool, var_38_object, 70.0);
	if(!var_37_bool) { //@nz
		var_26_int = -2;
		return 8;
	}
	object var_33_object;
	@CreateDialog(var_33_object);
	int var_85_int;
	func_2021(var_85_int);
	var_33_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2019(var_86_int);
	var_33_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2023(var_87_string);
	var_33_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2025(var_88_string);
	var_33_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2002(var_89_int);
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
	func_1591(var_100_object);
	var_100_object = var_99_object;
	func_1400(var_98_bool, var_99_object);
	object var_193_object; object var_194_object;
	var_27_object = var_193_object;
	var_33_object = var_194_object;
	TaskCall(1);
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object);
	TaskReturn();
	bool var_36_bool;
	var_33_object->IsDialogEnd(var_36_bool);
	
	for(;;) {
		var_312_bool = !var_36_bool; //@nz
		if(var_312_bool == 0) goto Label_70;
		@sync();
		var_33_object->IsDialogEnd(var_36_bool);
	}
	
Label_70:
	object var_313_object;
	var_27_object = var_313_object;
	func_1382();
	@StopDialog(var_33_object);
	var_33_object->GetReturnValue(-1);
	int var_35_int = var_26_int;
}
EMIT "Stack[-4] = 0";


void func_1281(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_1538(string var_238_string)
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


// @pe
void func_1797(bool var_300_bool)
{
	int var_302_int;
	func_1607(var_302_int, "oob6Mat2");
	if(var_302_int == 0) {
		var_300_bool = true;
		return 0;
	}
	var_300_bool = false;
}


void func_1029(object var_0_object)
{
	bool var_7_bool;
	func_1308(var_7_bool);
	if(!var_7_bool) //@nz
		@Hold();
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1205();
	}
}
EMIT "Return(); Pop(0)";


void func_1289(bool var_15_bool, cvector var_16_cvector)
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


void func_1274(bool var_45_bool)
{
	var_45_bool = true;
}


// @pe
void func_1809(bool var_200_bool)
{
	int var_202_int;
	func_1607(var_202_int, "oob6Mat1");
	if(var_202_int == 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_1554(string var_216_string, bool var_217_bool)
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


void func_1299(bool var_11_bool, object var_12_object)
{
	cvector var_14_cvector;
	var_12_object->GetPosition(var_14_cvector);
	bool var_15_bool; cvector var_16_cvector;
	var_14_cvector = var_16_cvector;
	func_1289(var_15_bool, var_16_cvector);
	var_15_bool = var_11_bool;
}


void func_1043(bool var_32_bool)
{
	object var_34_object;
	@FindActor(var_34_object, "player");
	if(!var_34_object) //@nz
		var_32_bool = false;
	bool var_37_bool; object var_38_object;
	var_34_object = var_38_object;
	func_1299(var_37_bool, var_38_object);
	var_37_bool = var_32_bool;
}
EMIT "Stack[-1] = 0";


void func_1308(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


// @pe
void func_1821(bool var_256_bool)
{
	int var_258_int;
	func_1607(var_258_int, "b6q01");
	if(var_258_int == 2)
		var_256_bool = true;
	var_256_bool = false;
}


void func_1313(bool var_37_bool, object var_38_object, float var_39_float)
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
	func_1597(var_64_cvector, (var_53_cvector ^ [0.0, 1.0, 0.0]));
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
	func_2027(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_57_bool, "head");
		if(var_57_bool == 0) goto Label_1376;
		@LookAsyncCamera("head");
	}
Label_1376:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_37_bool = true;
	
}


void func_1058(object var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0);
	var_85_float = GetByIndex(var_0_object, 2);
	@RotateAsync(var_84_float, var_85_float);
}


void func_1569(bool var_132_bool, string var_133_string)
{
	bool var_135_bool;
	bool var_136_bool;
	func_2027(var_136_bool);
	if(var_136_bool != 0) {
		@lshHasSpeech(var_135_bool, var_133_string);
		if(var_135_bool != 0) {
			@lshPlaySpeech(var_133_string);
			var_132_bool = true;
		}
	}
	var_132_bool = false;
}


void func_1063(bool var_15_bool)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	if(!var_18_object) { //@nz
		var_15_bool = false;
		return 4;
	}
	float var_22_float; object var_23_object;
	func_1281(var_22_float, var_23_object);
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
void func_1833(bool var_266_bool, object var_267_object)
{
	object var_269_object;
	var_267_object = var_269_object;
	bool var_268_bool;
	func_1865(var_268_bool, var_269_object);
	if(var_268_bool != 0) {
		var_266_bool = true;
		return 0;
	}
	var_266_bool = false;
}


void func_1584(void)
{
	bool var_10_bool;
	func_2027(var_10_bool);
	if(var_10_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1843(bool var_274_bool)
{
	int var_276_int;
	func_1607(var_276_int, "b6q01");
	if(var_276_int == 3)
		var_274_bool = true;
	var_274_bool = false;
}


void func_1591(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_1085(void)
{
	float var_324_float;
	@rand(var_324_float, 8, 16);
	@SetTimer(10, var_324_float);
}


void func_1597(cvector var_64_cvector, cvector var_65_cvector)
{
	float var_68_float = sqrt(var_65_cvector | var_65_cvector);
	if(var_68_float < 0.000001)
		var_64_cvector = [0.0, 0.0, 0.0];
	var_64_cvector = var_65_cvector / var_68_float;
}


// @pe
void func_1855(bool var_286_bool, object var_287_object)
{
	object var_289_object;
	var_287_object = var_289_object;
	bool var_288_bool;
	func_1872(var_288_bool, var_289_object);
	if(var_288_bool != 0) {
		var_286_bool = true;
		return 0;
	}
	var_286_bool = false;
}


void func_1094(void)
{
	@KillTimer(10);
}


void func_1607(int var_202_int, string var_203_string)
{
	int var_205_int;
	@GetVariable(var_203_string, var_205_int);
	var_205_int = var_202_int;
}


void func_1865(bool var_268_bool, object var_269_object)
{
	int var_271_int;
	var_269_object->GetItemCountOfType(var_271_int, "alpha_pills");
	var_268_bool = var_271_int >= 50;
}


void func_1612(int var_140_int, int var_141_int)
{
	object var_143_object;
	@CreateIntVector(var_143_object);
	var_143_object->add(var_140_int);
	var_143_object->add(var_141_int);
	@SendWorldWndMessage(3, var_143_object);
}
EMIT "Stack[-1] = 0";


void func_1872(bool var_288_bool, object var_289_object)
{
	int var_291_int;
	var_289_object->GetItemCountOfType(var_291_int, "alpha_pills");
	var_288_bool = false;
	if(var_291_int > 0) {
		if(var_291_int < 50)
			var_288_bool = true;
	}
}


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
			func_1706();
			func_222(var_194_object, "Patronage");
			var_0_object->SetMessage(520595); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(520596, 21802, 21801); //@t
			var_0_object->AddReply(520621, 29795, 21829); //@t
		} else {
					func_222(var_194_object, "Neutral");
					var_0_object->SetMessage(520622); //@t
					var_0_object->ClearReplies(); //@t
					bool var_256_bool;
					func_1821(var_1_object);
					if(var_256_bool != 0)
						var_0_object->AddReply(520623, 21833, 21832); //@t
					bool var_265_bool = false;
					bool var_266_bool;
					func_1833(var_266_bool, var_1_object);
					if(var_266_bool != 0) {
						bool var_274_bool;
						func_1843(var_1_object);
						if(var_274_bool != 0)
							var_265_bool = true;
					}
					if(var_265_bool != 0)
						var_0_object->AddReply(520626, 21836, 21835); //@t
					bool var_283_bool = false;
					bool var_284_bool;
					func_1843(var_1_object);
					if(var_284_bool != 0) {
						bool var_286_bool;
						func_1855(var_286_bool, var_1_object);
						if(var_286_bool != 0)
							var_283_bool = true;
					}
					if(var_283_bool != 0)
						var_0_object->AddReply(520686, 21897, 21896); //@t
					bool var_300_bool;
					func_1797(var_1_object);
					if(var_300_bool != 0)
						var_0_object->AddReply(528534, 29927, 29926); //@t
					var_0_object->AddReply(520629, -1, 21838); //@t
		}
	}
	for(;;) {
		bool var_236_bool;
		func_2027(var_236_bool);
		if(var_236_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1538(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_221;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_221:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


void func_1624(object var_129_object, object var_130_object, int var_131_int)
{
	int var_135_int;
	var_130_object->GetItemID(var_135_int);
	int var_136_int;
	@GetInvItemProperty(var_136_int, var_135_int, "Category");
	bool var_137_bool;
	var_129_object->AddItem(var_137_bool, var_130_object, var_136_int, var_131_int);
	if(!var_137_bool) { //@nz
		var_129_object->DropItems(var_130_object, var_131_int);
	} else {
		int var_140_int; int var_141_int;
		var_135_int = var_140_int;
		var_131_int = var_141_int;
		func_1612(var_140_int, var_141_int);
	}
	
}


void func_1885(void)
{
	object var_18_object;
	@CreateDiaryEntry(var_18_object, 363, 1, 525663);
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_1924(var_22_bool, var_23_object, 265);
}
EMIT "Stack[-1] = 0";


void func_1382(void)
{
	bool var_315_bool;
	@CameraSwitchToNormal(true);
	bool var_317_bool;
	func_2027(var_317_bool);
	if(var_317_bool != 0) {
	} else {
		@HasAnimationTrack(var_315_bool, "head");
		if(var_315_bool == 0) goto Label_1399;
		@UnlookAsync("head");
	}
Label_1399:
	
}


void func_1898(void)
{
	object var_73_object;
	@CreateDiaryEntry(var_73_object, 364, 1, 525664);
	bool var_77_bool; object var_78_object;
	var_73_object = var_78_object;
	func_1924(var_77_bool, var_78_object, 265);
}
EMIT "Stack[-1] = 0";


void func_1643(object var_124_object, string var_125_string, int var_126_int)
{
	object var_128_object;
	@CreateInvItem(var_128_object);
	var_128_object->SetItemName(var_125_string);
	object var_129_object; object var_130_object; int var_131_int;
	var_124_object = var_129_object;
	var_128_object = var_130_object;
	var_126_int = var_131_int;
	func_1624(var_129_object, var_130_object, var_131_int);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1136(void)
{
	func_1276();
	func_1094();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_1911(object var_31_object)
{
	object var_33_object;
	@GetDiaryRoot(var_33_object);
	if(!var_33_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_31_object = false;
	}
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_1400(bool var_98_bool, object var_99_object)
{
	int var_105_int; int var_106_int;
	@GetVariable("voice_common", var_105_int);
	if(var_105_int != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1458(var_109_bool, var_110_object);
		if(!var_109_bool) { //@nz
			bool var_140_bool; object var_141_object;
			var_99_object = var_141_object;
			func_1495(var_140_bool, var_141_object);
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
		func_1495(var_185_bool, var_186_object);
		if(!var_185_bool) { //@nz
			bool var_188_bool; object var_189_object;
			var_99_object = var_189_object;
			func_1458(var_188_bool, var_189_object);
			if(!var_188_bool) { //@nz
				var_98_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1456;
	
Label_1456:
	var_98_bool = true;
	
}


void func_1656(bool var_82_bool, string var_83_string, string var_84_string)
{
	object var_86_object;
	@FindActor(var_86_object, var_83_string);
	if(var_86_object == null)
		var_82_bool = false;
	@Trigger(var_86_object, var_84_string);
	var_82_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1151(void)
{
	@StopGroup0();
	func_1094();
	func_1538("Neutral");
	func_1085();
}


void func_1668(float var_69_float)
{
	float var_71_float;
	@GetGameTime(var_71_float);
	var_71_float = var_69_float;
}


void func_1924(bool var_22_bool, object var_23_object, int var_24_int)
{
	object var_31_object;
	func_1911(var_31_object);
	object var_28_object;
	var_31_object = var_28_object;
	object var_29_object;
	var_28_object->Find(var_24_int, var_29_object);
	if(!var_29_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_24_int);
		var_22_bool = false;
	}
	var_29_object->AddChild(var_23_object);
	@SendWorldWndMessage(7);
	int var_30_int;
	var_23_object->GetCategory(var_30_int);
	@SetDiarySection(var_30_int);
	var_22_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1673(int var_153_int)
{
	float var_155_float;
	@GetGameTime(var_155_float);
	var_153_int = 1 + (var_155_float / 24);
}


void func_1682(string var_31_string, int var_32_int)
{
	string var_34_string = "idle";
	if(var_32_int != 0)
		var_34_string += var_32_int;
	var_34_string = var_31_string;
}


void func_1689(int var_25_int)
{
	int var_28_int; bool var_29_bool;
	var_28_int = 0;
	
	for(;;) {
		string var_31_string; int var_32_int;
		var_28_int = var_32_int;
		func_1682(var_31_string, var_32_int);
		@HasAnimation(var_29_bool, "all", var_31_string);
		if(!var_29_bool) //@nz
			break;
		var_28_int += 1;
	}
	var_28_int = var_25_int;
}


void func_1952(object var_58_object)
{
	object var_61_object; object var_62_object;
	@GetMainOutdoorScene(var_61_object);
	if(var_61_object == null) {
		@Trace("Can't find main outdoor scene");
		var_62_object = null;
		var_62_object = var_58_object;
	}
	var_61_object->GetMap(var_62_object);
	var_62_object = var_58_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1706(void)
{
	@SetVariable("oob6Mat1", 1);
}


// @pe
void func_1712(void)
{
	@SetVariable("b6q01", 3);
	func_1885();
}


void func_1969(object var_93_object, string var_94_string, float var_95_float)
{
	object var_103_object;
	@GetMainOutdoorScene(var_103_object);
	if(var_103_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_101_cvector;
	cvector var_102_cvector;
	bool var_104_bool;
	var_103_object->GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector);
	if(!var_104_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_94_string) + " doesnt exist");
	var_103_object->GetMap(var_93_object);
	if(var_93_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_114_float = GetByIndex(var_101_cvector, 0);
	var_115_float = GetByIndex(var_101_cvector, 2);
	var_93_object->SetMapParams(var_114_float, var_115_float, var_95_float);
}
EMIT "Stack[-2] = 0";


void func_1458(bool var_109_bool, object var_110_object)
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
		func_1569(var_132_bool, var_133_string);
		var_132_bool = var_109_bool;
		return 10;

	}
}


void func_1205(void)
{
	bool var_19_bool; int var_20_int; int var_21_int; bool var_22_bool;
	@WaitForAnimEnd();
	bool var_23_bool;
	func_1308(var_23_bool);
	if(!var_23_bool) //@nz
		return 12;
	int var_25_int;
	func_1689(var_25_int);
	int var_17_int;
	var_25_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_38_bool = false;
		if(var_18_int < 5) {
			bool var_41_bool;
			func_1308(var_41_bool);
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
			func_1682(var_52_string, var_53_int);
			@PlayAnimation("all", var_52_string);
			@WaitForAnimEnd(var_22_bool);
			var_54_bool = !var_22_bool; //@nz
			if(var_54_bool == 0) goto Label_1260;
			goto Label_1271;
			}
				Label_1260:
					bool var_45_bool;
					func_1274(var_45_bool);
					var_46_bool = !var_45_bool; //@nz
					if(var_46_bool == 0) goto Label_1266;
			}
		}
	Label_1271:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_1266:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1721(object var_50_object)
{
	@SetVariable("b6q01", 4);
	object var_58_object;
	func_1952(var_58_object);
	object var_54_object;
	var_58_object = var_54_object;
	float var_69_float;
	func_1668(var_69_float);
	var_54_object->AddMark("b6q01MatGotoByk", "pt_b6q01_bull", 1, 530992, var_69_float);
	func_1898();
	int var_55_int;
	var_50_object->RemoveItemByType(var_55_int, "alpha_pills", 50);
	bool var_82_bool;
	func_1656(var_82_bool, "quest_b6_01", "init_altar");
	bool var_88_bool;
	func_1656(var_88_bool, "quest_b6_01", "clean_termitnik");
}
EMIT "Stack[-2] = 0";


void func_2002(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x7e1";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


// @pe
void func_980(object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	TaskCall(0);
	int var_26_int;
	func_0(var_28_object, var_26_int, var_27_object);
	TaskReturn();
}


void func_1495(bool var_140_bool, object var_141_object)
{
	bool var_149_bool; int var_150_int; string var_151_string;
	int var_153_int;
	func_1673(var_153_int);
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
		func_1569(var_172_bool, var_173_string);
		var_172_bool = var_140_bool;
		return 10;

	}
}


// @pe
void func_222(object var_2_object, string var_212_string)
{
	bool var_213_bool;
	func_2027(var_213_bool);
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
	func_1554(var_216_string, var_217_bool);
	var_2_object = var_212_string;
	
}


// @pe
void func_1758(void)
{
	@TriggerWorld("playsound", "giveitem");
}


void func_2019(int var_86_int)
{
	var_86_int = 515545;
}


// @pe
void func_1764(void)
{
	@SetVariable("oob6Mat2", 1);
}


void func_2021(int var_85_int)
{
	var_85_int = 502870;
}


void func_2023(string var_87_string)
{
	var_87_string = "ui/NPC_Mat.png";
}


void func_2025(string var_88_string)
{
	var_88_string = "ui/NPC_Mat_b.png";
}


// @pe
void func_1770(object var_92_object)
{
	object var_96_object;
	func_1952(var_96_object);
	object var_93_object;
	var_96_object = var_93_object;
	func_1969(var_93_object, "pt_map_kurgan", (float)2);
	object var_116_object;
	func_1952(var_116_object);
	var_92_object->ShowMap(var_116_object);
}


void func_2027(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_1786(object var_121_object)
{
	@Trace("recipe1 is given");
	object var_124_object;
	var_121_object = var_124_object;
	func_1643(var_124_object, "recipe1", 1);
}


void func_1276(void)
{
	@StopAnimation();
	@StopGroup0();
}


