// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool)
	{
		if(1 != 0) {
			func_1543();
			if(var_7_bool == 23336) {
				object var_12_object; object var_13_object;
				var_12_object = var_1_object;
				var_13_object = var_0_object;
				func_1580();
			}
			if(var_7_bool == 23902) {
				object var_18_object; object var_19_object;
				var_18_object = var_1_object;
				var_19_object = var_0_object;
				func_1586();
			}
			if(var_7_bool == 23903) {
				object var_24_object; object var_25_object;
				var_24_object = var_1_object;
				var_25_object = var_0_object;
				func_1592();
			}
			if(var_7_bool == 23909) {
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_1598();
			}
			if(var_7_bool == 23916) {
				object var_36_object; object var_37_object;
				var_36_object = var_1_object;
				var_37_object = var_0_object;
				func_1604();
			}
			if(var_7_bool == 23957) {
				object var_42_object; object var_43_object;
				var_42_object = var_1_object;
				var_43_object = var_0_object;
				func_1610();
			}
			if(var_7_bool == 23967) {
				object var_48_object; object var_49_object;
				var_48_object = var_1_object;
				var_49_object = var_0_object;
				func_1616();
			}
			if(var_6_int == 23335) {
				bool var_54_bool;
				func_1730(var_1_object);
				if(!var_54_bool) { //@nz
					func_273(var_7_bool, "Confusion");
					var_0_object->SetMessage(522168); //@t
					var_0_object->ClearReplies(); //@t
					bool var_81_bool;
					func_1646(var_1_object);
					if(var_81_bool != 0)
						var_0_object->AddReply(522169, 23901, 23336); //@t
					bool var_90_bool;
					func_1658(var_1_object);
					if(var_90_bool != 0)
						var_0_object->AddReply(522721, 23904, 23902); //@t
					bool var_99_bool;
					func_1670(var_1_object);
					if(var_99_bool != 0)
						var_0_object->AddReply(522722, 23905, 23903); //@t
					bool var_108_bool = false;
					bool var_109_bool = false;
					bool var_110_bool;
					func_1622(var_1_object);
					if(!var_110_bool) { //@nz
						bool var_117_bool;
						func_1634(var_1_object);
						if(!var_117_bool) //@nz
							var_109_bool = true;
					}
					if(var_109_bool != 0) {
						bool var_124_bool;
						func_1682(var_1_object);
						if(var_124_bool != 0)
							var_108_bool = true;
					}
					if(var_108_bool != 0)
						var_0_object->AddReply(522728, 23910, 23909); //@t
					bool var_133_bool;
					func_1694(var_1_object);
					if(var_133_bool != 0)
						var_0_object->AddReply(522735, 23921, 23916); //@t
					bool var_142_bool = false;
					bool var_143_bool;
					func_1622(var_1_object);
					if(var_143_bool != 0) {
						bool var_145_bool;
						func_1706(var_1_object);
						if(var_145_bool != 0)
							var_142_bool = true;
					}
					if(var_142_bool != 0)
						var_0_object->AddReply(522774, 23968, 23957); //@t
					bool var_154_bool = false;
					bool var_155_bool;
					func_1634(var_1_object);
					if(var_155_bool != 0) {
						bool var_157_bool;
						func_1718(var_1_object);
						if(var_157_bool != 0)
							var_154_bool = true;
					}
					if(var_154_bool != 0)
						var_0_object->AddReply(522784, 23978, 23967); //@t
					var_0_object->AddReply(522727, -1, 23908); //@t
					return 0;
				}
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(523161); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(523162, -1, 24364); //@t
				var_0_object->AddReply(523168, -1, 24370); //@t
				var_0_object->AddReply(523169, -1, 24371); //@t
				return 0;
			}
			if(var_6_int == 23978) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522795); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522798, -1, 23981); //@t
				var_0_object->AddReply(522796, 23980, 23979); //@t
				return 0;
			}
			if(var_6_int == 23980) {
				func_273(var_7_bool, "Arrogance");
				var_0_object->SetMessage(522797); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522800, -1, 23983); //@t
				var_0_object->AddReply(522799, 23984, 23982); //@t
				return 0;
			}
			if(var_6_int == 23984) {
				func_273(var_7_bool, "Arrogance");
				var_0_object->SetMessage(522801); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522802, -1, 23985); //@t
				var_0_object->AddReply(522803, 23987, 23986); //@t
				return 0;
			}
			if(var_6_int == 23987) {
				func_273(var_7_bool, "Arrogance");
				var_0_object->SetMessage(522804); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522805, -1, 23988); //@t
				var_0_object->AddReply(522806, -1, 23989); //@t
				return 0;
			}
			if(var_6_int == 23968) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522785); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522786, 23970, 23969); //@t
				return 0;
			}
			if(var_6_int == 23970) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522787); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522788, 23972, 23971); //@t
				return 0;
			}
			if(var_6_int == 23972) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522789); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522790, 23974, 23973); //@t
				return 0;
			}
			if(var_6_int == 23974) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522791); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522792, 23976, 23975); //@t
				var_0_object->AddReply(540111, -1, 42078); //@t
				return 0;
			}
			if(var_6_int == 23976) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522793); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522794, -1, 23977); //@t
				return 0;
			}
			if(var_6_int == 23921) {
				func_273(var_7_bool, "Isee");
				var_0_object->SetMessage(522740); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522741, 23923, 23922); //@t
				return 0;
			}
			if(var_6_int == 23923) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522742); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522743, -1, 23924); //@t
				var_0_object->AddReply(522744, -1, 23925); //@t
				return 0;
			}
			if(var_6_int == 23910) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522729); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522730, -1, 23911); //@t
				var_0_object->AddReply(540108, 42076, 42075); //@t
				return 0;
			}
			if(var_6_int == 42076) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(540109); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540110, -1, 42077); //@t
				return 0;
			}
			if(var_6_int == 23905) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522724); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522725, 23920, 23906); //@t
				var_0_object->AddReply(522726, -1, 23907); //@t
				return 0;
			}
			if(var_6_int == 23920) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522739); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522770, 23954, 23953); //@t
				var_0_object->AddReply(522769, -1, 23952); //@t
				return 0;
			}
			if(var_6_int == 23954) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522771); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522772, -1, 23955); //@t
				var_0_object->AddReply(522773, -1, 23956); //@t
				return 0;
			}
			if(var_6_int == 23904) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522723); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522732, 23914, 23913); //@t
				return 0;
			}
			if(var_6_int == 23914) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522733); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522734, -1, 23915); //@t
				return 0;
			}
			if(var_6_int == 23901) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522720); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522731, 23917, 23912); //@t
				var_0_object->AddReply(522745, 23927, 23926); //@t
				var_0_object->AddReply(522753, 23936, 23935); //@t
				var_0_object->AddReply(522766, 23950, 23949); //@t
				return 0;
			}
			if(var_6_int == 23950) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522767); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522768, -1, 23951); //@t
				return 0;
			}
			if(var_6_int == 23936) {
				func_273(var_7_bool, "Neutral");
				var_0_object->SetMessage(522754); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522755, 23938, 23937); //@t
				return 0;
			}
			if(var_6_int == 23938) {
				func_273(var_7_bool, "Arrogance");
				var_0_object->SetMessage(522756); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522757, -1, 23939); //@t
				var_0_object->AddReply(522758, -1, 23940); //@t
				return 0;
			}
			if(var_6_int == 23927) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522746); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522747, 23929, 23928); //@t
				var_0_object->AddReply(522775, 23959, 23958); //@t
				return 0;
			}
			if(var_6_int == 23959) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522776); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522777, 23961, 23960); //@t
				return 0;
			}
			if(var_6_int == 23961) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522778); //@t
				var_0_object->ClearReplies(); //@t
				bool var_397_bool;
				func_1622(var_1_object);
				if(!var_397_bool) //@nz
					var_0_object->AddReply(522779, -1, 23962); //@t
				bool var_403_bool;
				func_1622(var_1_object);
				if(var_403_bool != 0)
					var_0_object->AddReply(522780, 23964, 23963); //@t
				return 0;
			}
			if(var_6_int == 23964) {
				func_273(var_7_bool, "Arrogance");
				var_0_object->SetMessage(522781); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522783, -1, 23966); //@t
				var_0_object->AddReply(522782, -1, 23965); //@t
				return 0;
			}
			if(var_6_int == 23929) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522748); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522749, 23932, 23930); //@t
				var_0_object->AddReply(522750, -1, 23931); //@t
				return 0;
			}
			if(var_6_int == 23932) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522751); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522752, 23917, 23933); //@t
				return 0;
			}
			if(var_6_int == 23917) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522736); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522737, 23919, 23918); //@t
				return 0;
			}
			if(var_6_int == 23919) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522738); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522759, 23945, 23941); //@t
				var_0_object->AddReply(522760, 23943, 23942); //@t
				return 0;
			}
			if(var_6_int == 23943) {
				func_273(var_7_bool, "Confusion");
				var_0_object->SetMessage(522761); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522762, 23945, 23944); //@t
				return 0;
			}
			if(var_6_int == 23945) {
				func_273(var_7_bool, "Threat");
				var_0_object->SetMessage(522763); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(522764, -1, 23947); //@t
				var_0_object->AddReply(522765, -1, 23948); //@t
				return 0;
			}
			var_3_string = true;
			bool var_469_bool;
			func_1767(var_469_bool);
			if(var_469_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x128";
	
	}

}


maintask task_2
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, object var_6_object)
	{
		object var_8_object;
		var_6_object = var_8_object;
		TaskCall(0);
		int var_7_int;
		func_0(var_9_object, var_7_int, var_8_object);
		TaskReturn();
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_object = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_1270(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_1550(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_object = false;
		}
	
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_object != 0) {
			bool var_8_bool;
			func_1270(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_1550(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_0(object var_0_object, int var_7_int, object var_8_object)
{
	var_0_object = var_8_object;
	bool var_18_bool; object var_19_object;
	var_8_object = var_19_object;
	func_1272(var_18_bool, var_19_object, 70.0);
	if(!var_18_bool) { //@nz
		var_7_int = -2;
		return 8;
	}
	object var_14_object;
	@CreateDialog(var_14_object);
	int var_66_int;
	func_1761(var_66_int);
	var_14_object->SetNPCName(var_66_int);
	int var_67_int;
	func_1759(var_67_int);
	var_14_object->SetNPCDescription(var_67_int);
	string var_68_string;
	func_1763(var_68_string);
	var_14_object->SetPhoto(var_68_string);
	string var_69_string;
	func_1765(var_69_string);
	var_14_object->SetPhoto2(var_69_string);
	int var_70_int;
	func_1742(var_70_int);
	var_14_object->SetPlayerName(var_70_int);
	bool var_15_bool;
	@IsOverrideActive(var_15_bool);
	if(var_15_bool != 0) {
		var_7_int = -2;
		return 8;
	}
	@DoDialog(var_14_object);
	bool var_79_bool; object var_80_object;
	object var_81_object;
	func_1550(var_81_object);
	var_81_object = var_80_object;
	func_1359(var_79_bool, var_80_object);
	object var_174_object; object var_175_object;
	var_8_object = var_174_object;
	var_14_object = var_175_object;
	TaskCall(1);
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object);
	TaskReturn();
	bool var_17_bool;
	var_14_object->IsDialogEnd(var_17_bool);
	
	for(;;) {
		var_325_bool = !var_17_bool; //@nz
		if(var_325_bool == 0) goto Label_70;
		@sync();
		var_14_object->IsDialogEnd(var_17_bool);
	}
	
Label_70:
	object var_326_object;
	var_8_object = var_326_object;
	func_1341();
	@StopDialog(var_14_object);
	var_14_object->GetReturnValue(-1);
	int var_16_int = var_7_int;
}
EMIT "Stack[-4] = 0";


void func_1272(bool var_18_bool, object var_19_object, float var_20_float)
{
	cvector var_31_cvector; bool var_38_bool;
	var_19_object->GetPosition(var_31_cvector);
	float var_30_float;
	var_19_object->GetEyesHeight(var_30_float);
	var_39_float = GetByIndex(var_31_cvector, 1);
	SetByIndex(var_31_cvector, 1) = (var_39_float + var_30_float);
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	@GetEyesHeight(var_30_float);
	var_40_float = GetByIndex(var_32_cvector, 1);
	SetByIndex(var_32_cvector, 1) = (var_40_float + var_30_float);
	cvector var_33_cvector = var_31_cvector - var_32_cvector;
	var_41_float = GetByIndex(var_33_cvector, 1);
	SetByIndex(var_33_cvector, 1) = (float)0;
	var_43_float = sqrt(var_33_cvector | var_33_cvector);
	var_33_cvector /= var_43_float;
	cvector var_34_cvector = -var_33_cvector;
	cvector var_45_cvector;
	func_1556(var_45_cvector, (var_34_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_35_cvector = ((var_33_cvector * var_20_float) + (var_45_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_37_bool;
	@IsOverrideActive(var_37_bool);
	if(var_37_bool != 0)
		var_18_bool = false;
	@StopWorld();
	@CameraTransit((var_32_cvector + var_35_cvector), var_34_cvector, true);
	var_59_float = GetByIndex(var_35_cvector, 0);
	var_60_float = GetByIndex(var_35_cvector, 2);
	@Rotate(var_59_float, var_60_float);
	bool var_61_bool;
	func_1767(var_61_bool);
	if(var_61_bool != 0) {
	} else {
		@HasAnimationTrack(var_38_bool, "head");
		if(var_38_bool == 0) goto Label_1335;
		@LookAsyncCamera("head");
	}
Label_1335:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_18_bool = true;
	
}


// @pe
void func_1670(bool var_226_bool)
{
	int var_228_int;
	func_1566(var_228_int, "oob12AglajaSobor3");
	if(var_228_int == 0) {
		var_226_bool = true;
		return 0;
	}
	var_226_bool = false;
}


void func_1543(void)
{
	bool var_9_bool;
	func_1767(var_9_bool);
	if(var_9_bool != 0)
		@lshStopSpeech();
}


void func_1417(bool var_90_bool, object var_91_object)
{
	string var_97_string; bool var_99_bool; int var_100_int; string var_101_string;
	var_97_string = "c";
	int var_98_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_91_object->HasProperty((var_97_string + (var_98_int + 1)), var_99_bool);
			if(!var_99_bool) { //@nz
			} else {
				var_98_int += 1;
			}
		}
		if(!var_98_int) { //@nz
			var_90_bool = false;
			return 10;
		}
		var_100_int = 0;
		if(var_98_int > 1)
			@irand(var_100_int, var_98_int);
		var_91_object->GetProperty((var_97_string + (var_100_int + 1)), var_101_string);
		bool var_113_bool; string var_114_string;
		var_101_string = var_114_string;
		func_1528(var_113_bool, var_114_string);
		var_113_bool = var_90_bool;
		return 10;

	}
}


void func_1550(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_273(object var_2_object, string var_190_string)
{
	bool var_191_bool;
	func_1767(var_191_bool);
	if(!var_191_bool) //@nz
		return 0;
	if(var_190_string == var_2_object)
		return 0;
	string var_194_string; bool var_195_bool;
	var_190_string = var_194_string;
	if(var_190_string == "")
		var_195_bool = false;
	else
		var_195_bool = true;
	func_1513(var_194_string, var_195_bool);
	var_2_object = var_190_string;
	
}


// @pe
void func_1682(bool var_251_bool)
{
	int var_253_int;
	func_1566(var_253_int, "oob12AglajaSobor4");
	if(var_253_int == 0) {
		var_251_bool = true;
		return 0;
	}
	var_251_bool = false;
}


void func_1556(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_49_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_49_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_49_float;
}


void func_1566(int var_183_int, string var_184_string)
{
	int var_186_int;
	@GetVariable(var_184_string, var_186_int);
	var_186_int = var_183_int;
}


// @pe
void func_1694(bool var_260_bool)
{
	int var_262_int;
	func_1566(var_262_int, "oob12AglajaSobor5");
	if(var_262_int == 0) {
		var_260_bool = true;
		return 0;
	}
	var_260_bool = false;
}


void func_1571(int var_134_int)
{
	float var_136_float;
	@GetGameTime(var_136_float);
	var_134_int = 1 + (var_136_float / 24);
}


// @pe
void func_1706(bool var_272_bool)
{
	int var_274_int;
	func_1566(var_274_int, "oob12AglajaSobor6");
	if(var_274_int == 0) {
		var_272_bool = true;
		return 0;
	}
	var_272_bool = false;
}


// @pe
void func_1580(void)
{
	@SetVariable("oob12AglajaSobor1", 1);
}


void func_1454(bool var_121_bool, object var_122_object)
{
	bool var_130_bool; int var_131_int; string var_132_string;
	int var_134_int;
	func_1571(var_134_int);
	string var_128_string = ("d" + var_134_int) + "m";
	int var_129_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_122_object->HasProperty((var_128_string + (var_129_int + 1)), var_130_bool);
			if(!var_130_bool) { //@nz
			} else {
				var_129_int += 1;
			}
		}
		if(!var_129_int) { //@nz
			var_121_bool = false;
			return 10;
		}
		var_131_int = 0;
		if(var_129_int > 1)
			@irand(var_131_int, var_129_int);
		var_122_object->GetProperty((var_128_string + (var_131_int + 1)), var_132_string);
		bool var_153_bool; string var_154_string;
		var_132_string = var_154_string;
		func_1528(var_153_bool, var_154_string);
		var_153_bool = var_121_bool;
		return 10;

	}
}


// @pe
void func_1586(void)
{
	@SetVariable("oob12AglajaSobor2", 1);
}


// @pe
void func_1718(bool var_284_bool)
{
	int var_286_int;
	func_1566(var_286_int, "oob12AglajaSobor7");
	if(var_286_int == 0) {
		var_284_bool = true;
		return 0;
	}
	var_284_bool = false;
}


// @pe
void func_1592(void)
{
	@SetVariable("oob12AglajaSobor3", 1);
}


void func_1341(void)
{
	bool var_328_bool;
	@CameraSwitchToNormal(true);
	bool var_330_bool;
	func_1767(var_330_bool);
	if(var_330_bool != 0) {
	} else {
		@HasAnimationTrack(var_328_bool, "head");
		if(var_328_bool == 0) goto Label_1358;
		@UnlookAsync("head");
	}
Label_1358:
	
}


// @pe
void func_1598(void)
{
	@SetVariable("oob12AglajaSobor4", 1);
}


// @pe
void func_1730(bool var_181_bool)
{
	int var_183_int;
	func_1566(var_183_int, "game_final");
	if(var_183_int != 0) {
		var_181_bool = true;
		return 0;
	}
	var_181_bool = false;
}


// @pe
void func_1604(void)
{
	@SetVariable("oob12AglajaSobor5", 1);
}


// @pe
void func_1610(void)
{
	@SetVariable("oob12AglajaSobor6", 1);
}


void func_1742(int var_70_int)
{
	int var_72_int;
	@GetVariable("branch", var_72_int);
	if(var_72_int == 0) {
		var_70_int = 1;
		return 2;
	EMIT "GOTO 0x6dd";
	}
	if(var_72_int == 1) {
		var_70_int = 2;
		return 2;
	}
	var_70_int = 3;
}


void func_1359(bool var_79_bool, object var_80_object)
{
	int var_86_int; int var_87_int;
	@GetVariable("voice_common", var_86_int);
	if(var_86_int != 0) {
		bool var_90_bool; object var_91_object;
		var_80_object = var_91_object;
		func_1417(var_90_bool, var_91_object);
		if(!var_90_bool) { //@nz
			bool var_121_bool; object var_122_object;
			var_80_object = var_122_object;
			func_1454(var_121_bool, var_122_object);
			if(!var_121_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@irand(var_87_int, 2);
		if(var_87_int != 0)
			@SetVariable("voice_common", ((var_86_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_166_bool; object var_167_object;
		var_80_object = var_167_object;
		func_1454(var_166_bool, var_167_object);
		if(!var_166_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_80_object = var_170_object;
			func_1417(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_79_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_1415;
	
Label_1415:
	var_79_bool = true;
	
}


// @pe
void func_1616(void)
{
	@SetVariable("oob12AglajaSobor7", 1);
}


// @pe
void func_81(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_174_object, object var_175_object)
{
	var_0_object = var_175_object;
	var_1_object = var_174_object;
	var_3_string = false;
	if(1 != 0) {
		bool var_181_bool;
		func_1730(var_1_object);
		if(!var_181_bool) { //@nz
			func_273(var_175_object, "Confusion");
			var_0_object->SetMessage(522168); //@t
			var_0_object->ClearReplies(); //@t
			bool var_208_bool;
			func_1646(var_1_object);
			if(var_208_bool != 0)
				var_0_object->AddReply(522169, 23901, 23336); //@t
			bool var_217_bool;
			func_1658(var_1_object);
			if(var_217_bool != 0)
				var_0_object->AddReply(522721, 23904, 23902); //@t
			bool var_226_bool;
			func_1670(var_1_object);
			if(var_226_bool != 0)
				var_0_object->AddReply(522722, 23905, 23903); //@t
			bool var_235_bool = false;
			bool var_236_bool = false;
			bool var_237_bool;
			func_1622(var_1_object);
			if(!var_237_bool) { //@nz
				bool var_244_bool;
				func_1634(var_1_object);
				if(!var_244_bool) //@nz
					var_236_bool = true;
			}
			if(var_236_bool != 0) {
				bool var_251_bool;
				func_1682(var_1_object);
				if(var_251_bool != 0)
					var_235_bool = true;
			}
			if(var_235_bool != 0)
				var_0_object->AddReply(522728, 23910, 23909); //@t
			bool var_260_bool;
			func_1694(var_1_object);
			if(var_260_bool != 0)
				var_0_object->AddReply(522735, 23921, 23916); //@t
			bool var_269_bool = false;
			bool var_270_bool;
			func_1622(var_1_object);
			if(var_270_bool != 0) {
				bool var_272_bool;
				func_1706(var_1_object);
				if(var_272_bool != 0)
					var_269_bool = true;
			}
			if(var_269_bool != 0)
				var_0_object->AddReply(522774, 23968, 23957); //@t
			bool var_281_bool = false;
			bool var_282_bool;
			func_1634(var_1_object);
			if(var_282_bool != 0) {
				bool var_284_bool;
				func_1718(var_1_object);
				if(var_284_bool != 0)
					var_281_bool = true;
			}
			if(var_281_bool != 0)
				var_0_object->AddReply(522784, 23978, 23967); //@t
			var_0_object->AddReply(522727, -1, 23908); //@t
		} else {
					func_273(var_175_object, "Neutral");
					var_0_object->SetMessage(523161); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(523162, -1, 24364); //@t
					var_0_object->AddReply(523168, -1, 24370); //@t
					var_0_object->AddReply(523169, -1, 24371); //@t
		}
	}
	for(;;) {
		bool var_296_bool;
		func_1767(var_296_bool);
		if(var_296_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_string != 0) {
				} else {
					func_1497(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_string != 0) {
					goto Label_272;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_272:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x55";


// @pe
void func_1622(bool var_237_bool)
{
	int var_239_int;
	func_1566(var_239_int, "b12q01ChildsAreVisited");
	if(var_239_int != 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_1497(string var_298_string)
{
	bool var_302_bool; float var_303_float; float var_304_float;
	@lshHasAnimation(var_302_bool, var_298_string);
	if(var_302_bool != 0) {
		@lshGetAnimTimes(var_298_string, var_303_float, var_304_float);
		@lshPlayAnimation(var_303_float, var_304_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_298_string);
	}
	
}


void func_1759(int var_67_int)
{
	var_67_int = 515527;
}


void func_1761(int var_66_int)
{
	var_66_int = 513334;
}


// @pe
void func_1634(bool var_244_bool)
{
	int var_246_int;
	func_1566(var_246_int, "b12q01TheaterIsVisited");
	if(var_246_int != 0) {
		var_244_bool = true;
		return 0;
	}
	var_244_bool = false;
}


void func_1763(string var_68_string)
{
	var_68_string = "ui/NPC_Aglaja.png";
}


void func_1765(string var_69_string)
{
	var_69_string = "ui/NPC_Aglaja_b.png";
}


void func_1767(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1513(string var_194_string, bool var_195_bool)
{
	bool var_201_bool; float var_202_float; float var_203_float;
	@lshHasAnimation(var_201_bool, var_194_string);
	if(var_201_bool != 0) {
		@lshGetAnimTimes(var_194_string, var_202_float, var_203_float);
		@lshPlayAnimation(var_202_float, var_203_float, var_195_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_194_string);
	}
	
}


// @pe
void func_1646(bool var_208_bool)
{
	int var_210_int;
	func_1566(var_210_int, "oob12AglajaSobor1");
	if(var_210_int == 0) {
		var_208_bool = true;
		return 0;
	}
	var_208_bool = false;
}


void func_1270(bool var_8_bool)
{
	var_8_bool = true;
}


void func_1528(bool var_113_bool, string var_114_string)
{
	bool var_116_bool;
	bool var_117_bool;
	func_1767(var_117_bool);
	if(var_117_bool != 0) {
		@lshHasSpeech(var_116_bool, var_114_string);
		if(var_116_bool != 0) {
			@lshPlaySpeech(var_114_string);
			var_113_bool = true;
		}
	}
	var_113_bool = false;
}


// @pe
void func_1658(bool var_217_bool)
{
	int var_219_int;
	func_1566(var_219_int, "oob12AglajaSobor2");
	if(var_219_int == 0) {
		var_217_bool = true;
		return 0;
	}
	var_217_bool = false;
}


