// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		@StopGroup0();
		@sync();
	}

}


task task_1
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, cvector var_32_cvector)
	{
		bool var_33_bool;
		func_3040(var_33_bool);
		if(var_33_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, object var_8_object, object var_9_object, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_33_cvector == 33378) {
				object var_38_object = var_1_object;
				func_3167(var_0_bool);
			}
			if(var_32_bool == 33377) {
				func_192(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531971); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531972, -1, 33378); //@t
				var_0_bool->AddReply(531973, -1, 33379); //@t
				return 0;
			}
			var_3_object = true;
			bool var_62_bool;
			func_3040(var_62_bool);
			if(var_62_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xd7";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, int var_11_int, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_32_bool == 36906) {
				func_408(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535231); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535232, 36953, 36907); //@t
				var_0_bool->AddReply(535233, -1, 36908); //@t
				var_0_bool->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_32_bool == 36953) {
				func_408(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535277); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535278, 36957, 36954); //@t
				var_0_bool->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_32_bool == 36957) {
				func_408(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(535281); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(535282, -1, 36958); //@t
				var_0_bool->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_object = true;
			bool var_80_bool;
			func_3040(var_80_bool);
			if(var_80_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x1af";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_32_bool == 19127) {
				func_657(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(517994); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(517995, 23147, 19128); //@t
				return 0;
			}
			if(var_32_bool == 23147) {
				func_657(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(521978); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521979, 23149, 23148); //@t
				var_0_bool->AddReply(521984, -1, 23153); //@t
				return 0;
			}
			if(var_32_bool == 23149) {
				func_657(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(521980); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521981, 23151, 23150); //@t
				var_0_bool->AddReply(521985, 23157, 23154); //@t
				return 0;
			}
			if(var_32_bool == 23151) {
				func_657(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(521982); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521987, -1, 23156); //@t
				var_0_bool->AddReply(521983, 23157, 23152); //@t
				var_0_bool->AddReply(521986, -1, 23155); //@t
				return 0;
			}
			if(var_32_bool == 23157) {
				func_657(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(521988); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(521989, -1, 23158); //@t
				var_0_bool->AddReply(521990, -1, 23159); //@t
				return 0;
			}
			var_3_object = true;
			bool var_97_bool;
			func_3040(var_97_bool);
			if(var_97_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x2a8";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, int var_21_int, int var_22_int, object var_23_object, object var_24_object, object var_25_object, string var_26_string, bool var_27_bool, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_33_cvector == 32376) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_bool;
				func_3076();
			}
			if(var_33_cvector == 32374) {
				object var_81_object; object var_82_object;
				var_81_object = var_1_object;
				var_82_object = var_0_bool;
				func_3076();
			}
			if(var_33_cvector == 32379) {
				object var_85_object = var_1_object;
				func_3093(var_0_bool);
				object var_118_object = var_1_object;
				func_3054(var_0_bool);
				object var_139_object; object var_140_object;
				var_139_object = var_1_object;
				var_140_object = var_0_bool;
				func_3064();
				object var_143_object; object var_144_object;
				var_143_object = var_1_object;
				var_144_object = var_0_bool;
				func_3155();
				object var_159_object = var_1_object;
				func_3127(var_0_bool);
			}
			if(var_33_cvector == 32403) {
				object var_187_object; object var_188_object;
				var_187_object = var_1_object;
				var_188_object = var_0_bool;
				func_3143();
			}
			if(var_33_cvector == 20575) {
				object var_209_object; object var_210_object;
				var_209_object = var_1_object;
				var_210_object = var_0_bool;
				func_3048();
			}
			if(var_33_cvector == 20583) {
				object var_215_object; object var_216_object;
				var_215_object = var_1_object;
				var_216_object = var_0_bool;
				func_3048();
			}
			if(var_33_cvector == 20595) {
				object var_219_object; object var_220_object;
				var_219_object = var_1_object;
				var_220_object = var_0_bool;
				func_3048();
			}
			if(var_33_cvector == 20594) {
				object var_223_object; object var_224_object;
				var_223_object = var_1_object;
				var_224_object = var_0_bool;
				func_3048();
			}
			if(var_33_cvector == 20587) {
				object var_227_object = var_1_object;
				func_3167(var_0_bool);
			}
			if(var_32_bool == 32369) {
				bool var_232_bool;
				func_3172(var_1_object);
				if(var_232_bool != 0) {
					object var_238_object; object var_239_object;
					var_238_object = var_1_object;
					var_239_object = var_0_bool;
					func_3070();
					object var_242_object; object var_243_object;
					var_242_object = var_1_object;
					var_243_object = var_0_bool;
					func_3121();
					func_1056(var_33_cvector, "Neutral");
					var_0_bool->SetMessage(531038); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(531227, 32541, 32540); //@t
					var_0_bool->AddReply(531231, 32545, 32544); //@t
					return 0;
				}
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(518214); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_267_bool;
				func_3196(var_1_object);
				if(var_267_bool != 0)
					var_0_bool->AddReply(531041, 32373, 32372); //@t
				bool var_276_bool = false;
				bool var_277_bool = false;
				bool var_278_bool;
				func_3208(var_278_bool, var_1_object);
				if(var_278_bool != 0) {
					bool var_287_bool;
					func_3184(var_1_object);
					if(var_287_bool != 0)
						var_277_bool = true;
				}
				if(var_277_bool != 0) {
					bool var_293_bool;
					func_3242(var_1_object);
					if(!var_293_bool) //@nz
						var_276_bool = true;
				}
				if(var_276_bool != 0)
					var_0_bool->AddReply(531048, 32378, 32377); //@t
				bool var_303_bool = false;
				bool var_304_bool;
				func_3230(var_1_object);
				if(var_304_bool != 0) {
					bool var_310_bool;
					func_3218(var_1_object);
					if(!var_310_bool) //@nz
						var_303_bool = true;
				}
				if(var_303_bool != 0)
					var_0_bool->AddReply(531081, 32402, 32401); //@t
				bool var_320_bool;
				func_3278(var_1_object);
				if(var_320_bool != 0)
					var_0_bool->AddReply(519410, 20576, 20575); //@t
				var_0_bool->AddReply(518215, 20584, 19328); //@t
				var_0_bool->AddReply(518216, -1, 19329); //@t
				return 0;
			}
			if(var_32_bool == 20584) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519420, 20586, 20585); //@t
				var_0_bool->AddReply(519424, 20586, 20589); //@t
				return 0;
			}
			if(var_32_bool == 20586) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519421); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519422, -1, 20587); //@t
				var_0_bool->AddReply(519423, -1, 20588); //@t
				return 0;
			}
			if(var_32_bool == 20576) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519411); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519412, 20578, 20577); //@t
				var_0_bool->AddReply(519425, 20582, 20591); //@t
				return 0;
			}
			if(var_32_bool == 20578) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519413); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519414, 20580, 20579); //@t
				var_0_bool->AddReply(519426, 20582, 20592); //@t
				return 0;
			}
			if(var_32_bool == 20580) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519415); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519416, 20582, 20581); //@t
				var_0_bool->AddReply(519427, -1, 20594); //@t
				return 0;
			}
			if(var_32_bool == 20582) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(519417); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(519418, -1, 20583); //@t
				var_0_bool->AddReply(519428, -1, 20595); //@t
				return 0;
			}
			if(var_32_bool == 32402) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531082); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531217, 32529, 32528); //@t
				var_0_bool->AddReply(531221, 32536, 32532); //@t
				return 0;
			}
			if(var_32_bool == 32529) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531218); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531219, 32531, 32530); //@t
				var_0_bool->AddReply(531222, 32536, 32533); //@t
				return 0;
			}
			if(var_32_bool == 32536) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531224); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531225, -1, 32538); //@t
				var_0_bool->AddReply(531226, -1, 32539); //@t
				return 0;
			}
			if(var_32_bool == 32531) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531220); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531083, -1, 32403); //@t
				return 0;
			}
			if(var_32_bool == 32378) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531049); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531214, 32526, 32524); //@t
				var_0_bool->AddReply(531215, 32526, 32525); //@t
				return 0;
			}
			if(var_32_bool == 32526) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531216); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531050, -1, 32379); //@t
				return 0;
			}
			if(var_32_bool == 32373) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531042); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531043, -1, 32374); //@t
				return 0;
			}
			if(var_32_bool == 32545) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531232); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531233, 32541, 32546); //@t
				var_0_bool->AddReply(531234, -1, 32547); //@t
				return 0;
			}
			if(var_32_bool == 32541) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531228); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531238, 32553, 32552); //@t
				var_0_bool->AddReply(531229, 32543, 32542); //@t
				return 0;
			}
			if(var_32_bool == 32543) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531230); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531235, -1, 32549); //@t
				var_0_bool->AddReply(531240, 32553, 32554); //@t
				return 0;
			}
			if(var_32_bool == 32553) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531239); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531236, 32551, 32550); //@t
				return 0;
			}
			if(var_32_bool == 32551) {
				func_1056(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(531237); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(531045, -1, 32376); //@t
				var_0_bool->AddReply(531040, -1, 32371); //@t
				return 0;
			}
			var_3_object = true;
			bool var_503_bool;
			func_3040(var_503_bool);
			if(var_503_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x437";
	
	}

}


task task_10
{
}


task task_11
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, int var_26_int, int var_27_int, object var_28_object, object var_29_object, object var_30_object, string var_31_string, bool var_32_bool, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_33_cvector == 20030) {
				object var_38_object; object var_39_object;
				var_38_object = var_1_object;
				var_39_object = var_0_bool;
				func_3042();
			}
			if(var_33_cvector == 33368) {
				object var_44_object = var_1_object;
				func_3167(var_0_bool);
			}
			if(var_32_bool == 20028) {
				func_1868(var_33_cvector, "Smile");
				var_0_bool->SetMessage(518917); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_62_bool = false;
				bool var_63_bool;
				func_3254(var_1_object);
				if(var_63_bool != 0) {
					bool var_71_bool;
					func_3266(var_1_object);
					if(var_71_bool != 0)
						var_62_bool = true;
				}
				if(var_62_bool != 0)
					var_0_bool->AddReply(518919, 20031, 20030); //@t
				var_0_bool->AddReply(531963, -1, 33368); //@t
				var_0_bool->AddReply(518918, -1, 20029); //@t
				return 0;
			}
			if(var_32_bool == 20031) {
				func_1868(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(518920); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518923, 20039, 20034); //@t
				var_0_bool->AddReply(518921, 20033, 20032); //@t
				return 0;
			}
			if(var_32_bool == 20033) {
				func_1868(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(518922); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518924, 20037, 20035); //@t
				var_0_bool->AddReply(518925, -1, 20036); //@t
				return 0;
			}
			if(var_32_bool == 20037) {
				func_1868(var_33_cvector, "Untrust");
				var_0_bool->SetMessage(518926); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518927, -1, 20038); //@t
				return 0;
			}
			if(var_32_bool == 20039) {
				func_1868(var_33_cvector, "Grin");
				var_0_bool->SetMessage(518928); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518930, 20042, 20041); //@t
				var_0_bool->AddReply(518929, -1, 20040); //@t
				return 0;
			}
			if(var_32_bool == 20042) {
				func_1868(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(518931); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(518932, -1, 20043); //@t
				return 0;
			}
			var_3_object = true;
			bool var_130_bool;
			func_3040(var_130_bool);
			if(var_130_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x763";
	
	}

}


task task_12
{
}


task task_13
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, int var_31_int, int var_32_int, cvector var_33_cvector)
	{
		if(1 != 0) {
			func_2886();
			if(var_32_int == 42563) {
				func_2211(var_33_cvector, "Neutral");
				var_0_bool->SetMessage(540554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(540555, -1, 42564); //@t
				var_0_bool->AddReply(540794, -1, 42843); //@t
				return 0;
			}
			var_3_object = true;
			bool var_57_bool;
			func_3040(var_57_bool);
			if(var_57_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8ba";
	
	}

}


maintask task_14
{
	// @pe
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		func_2279(var_31_cvector);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, int var_32_int)
	{
		if(var_32_int == 10) {
			func_2350();
			bool var_36_bool = false;
			bool var_37_bool;
			func_2571(var_37_bool);
			if(var_37_bool != 0) {
				bool var_40_bool;
				func_2319(var_40_bool);
				if(var_40_bool != 0)
					var_36_bool = true;
			}
			if(var_36_bool != 0) {
				bool var_57_bool;
				func_2299(var_57_bool);
				if(var_57_bool != 0) {
					bool var_76_bool; object var_77_object;
					object var_78_object;
					func_2919(var_78_object);
					var_78_object = var_77_object;
					func_2719(var_76_bool, var_77_object);
				}
			} else {
				func_2314(var_32_int);
				func_2341();
			}
		}
	
	}

	// @pe
	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
	{
		func_2532();
		func_2350();
		@lshStopSpeech();
		@lshStopAnimation();
		@StopAsync();
		@Hold();
	}

		void OnLoad(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector)
		{
		@StopGroup0();
		func_2350();
		func_2858("Neutral");
		func_2341();
		}

	// @pe
	void OnLSHAnimationEnd(bool bCycled, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, bool var_32_bool)
	{
		if(var_32_bool != 0)
			func_2341();
		else
			func_2858("Neutral");
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool, object var_21_object, object var_22_object, object var_23_object, string var_24_string, bool var_25_bool, object var_26_object, object var_27_object, object var_28_object, string var_29_string, bool var_30_bool, cvector var_31_cvector, object var_32_object)
	{
		bool var_33_bool; bool var_34_bool;
		@IsOverrideActive(var_34_bool);
		if(!var_34_bool) { //@nz
			disable OnUse;
			func_2532();
			bool var_36_bool; object var_37_object;
			var_32_object = var_37_object;
			func_2562(var_36_bool, var_37_object);
			enable OnUse;
			object var_50_object;
			func_3530(var_50_object, var_33_bool, var_34_bool, var_50_object);
			func_2858("Neutral");
			func_2350();
			func_2341();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_36_bool;
	func_2571(var_36_bool);
	if(!var_36_bool) goto Label_0; //@nz
}


void func_2562(bool var_36_bool, object var_37_object)
{
	cvector var_39_cvector;
	var_37_object->GetPosition(var_39_cvector);
	bool var_40_bool; cvector var_41_cvector;
	var_39_cvector = var_41_cvector;
	func_2552(var_40_bool, var_41_cvector);
	var_40_bool = var_36_bool;
}


// @pe
void func_3076(void)
{
	@SetVariable("b2q03", 1);
	func_3301();
	func_3314();
	bool var_73_bool;
	func_2976(var_73_bool, "quest_b2_03", "place_maria");
}


void func_264(bool var_0_bool, int var_679_int, object var_680_object)
{
	var_0_bool = var_680_object;
	bool var_690_bool; object var_691_object;
	object var_692_object;
	func_2919(var_692_object);
	var_692_object = var_691_object;
	func_2661(var_690_bool, var_691_object);
	bool var_693_bool; object var_694_object;
	var_680_object = var_694_object;
	func_2576(var_693_bool, var_694_object, 70.0);
	if(!var_693_bool) { //@nz
		var_679_int = -2;
		return 8;
	}
	object var_686_object;
	@CreateDialog(var_686_object);
	int var_697_int;
	func_3034(var_697_int);
	var_686_object->SetNPCName(var_697_int);
	int var_698_int;
	func_3032(var_698_int);
	var_686_object->SetNPCDescription(var_698_int);
	string var_699_string;
	func_3036(var_699_string);
	var_686_object->SetPhoto(var_699_string);
	string var_700_string;
	func_3038(var_700_string);
	var_686_object->SetPhoto2(var_700_string);
	int var_701_int;
	func_3513(var_701_int);
	var_686_object->SetPlayerName(var_701_int);
	bool var_687_bool;
	@IsOverrideActive(var_687_bool);
	if(var_687_bool != 0) {
		var_679_int = -2;
		return 8;
	}
	@DoDialog(var_686_object);
	object var_703_object; object var_704_object;
	var_680_object = var_703_object;
	var_686_object = var_704_object;
	TaskCall(5);
	func_345(var_705_object, var_706_object, var_707_string, var_708_bool, var_703_object, var_704_object);
	TaskReturn();
	bool var_689_bool;
	var_686_object->IsDialogEnd(var_689_bool);
	
	for(;;) {
		var_736_bool = !var_689_bool; //@nz
		if(var_736_bool == 0) goto Label_334;
		@sync();
		var_686_object->IsDialogEnd(var_689_bool);
	}
	
Label_334:
	object var_737_object;
	var_680_object = var_737_object;
	func_2644();
	@StopDialog(var_686_object);
	var_686_object->GetReturnValue(-1);
	int var_688_int = var_679_int;
}
EMIT "Stack[-4] = 0";


void func_2314(bool var_0_bool)
{
	var_109_float = GetByIndex(var_0_bool, 0);
	var_110_float = GetByIndex(var_0_bool, 2);
	@RotateAsync(var_109_float, var_110_float);
}


void func_523(bool var_0_bool, int var_111_int, object var_112_object)
{
	var_0_bool = var_112_object;
	bool var_122_bool; object var_123_object;
	object var_124_object;
	func_2919(var_124_object);
	var_124_object = var_123_object;
	func_2661(var_122_bool, var_123_object);
	bool var_212_bool; object var_213_object;
	var_112_object = var_213_object;
	func_2576(var_212_bool, var_213_object, 70.0);
	if(!var_212_bool) { //@nz
		var_111_int = -2;
		return 8;
	}
	object var_118_object;
	@CreateDialog(var_118_object);
	int var_259_int;
	func_3034(var_259_int);
	var_118_object->SetNPCName(var_259_int);
	int var_260_int;
	func_3032(var_260_int);
	var_118_object->SetNPCDescription(var_260_int);
	string var_261_string;
	func_3036(var_261_string);
	var_118_object->SetPhoto(var_261_string);
	string var_262_string;
	func_3038(var_262_string);
	var_118_object->SetPhoto2(var_262_string);
	int var_263_int;
	func_3513(var_263_int);
	var_118_object->SetPlayerName(var_263_int);
	bool var_119_bool;
	@IsOverrideActive(var_119_bool);
	if(var_119_bool != 0) {
		var_111_int = -2;
		return 8;
	}
	@DoDialog(var_118_object);
	object var_272_object; object var_273_object;
	var_112_object = var_272_object;
	var_118_object = var_273_object;
	TaskCall(7);
	func_604(var_274_object, var_275_object, var_276_string, var_277_bool, var_272_object, var_273_object);
	TaskReturn();
	bool var_121_bool;
	var_118_object->IsDialogEnd(var_121_bool);
	
	for(;;) {
		var_308_bool = !var_121_bool; //@nz
		if(var_308_bool == 0) goto Label_593;
		@sync();
		var_118_object->IsDialogEnd(var_121_bool);
	}
	
Label_593:
	object var_309_object;
	var_112_object = var_309_object;
	func_2644();
	@StopDialog(var_118_object);
	var_118_object->GetReturnValue(-1);
	int var_120_int = var_111_int;
}
EMIT "Stack[-4] = 0";


void func_2571(bool var_32_bool)
{
	bool var_34_bool;
	@IsLoaded(var_34_bool);
	var_34_bool = var_32_bool;
}


// @pe
void func_13(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_499_bool;
		func_3040(var_499_bool);
		if(var_499_bool == 0) goto Label_28;
		func_2858("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_37:
	}
	if(false == 0) goto Label_37;
	return 0;
	
Label_28:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_3340(void)
{
	object var_200_object;
	@CreateDiaryEntry(var_200_object, 592, 2, 531080);
	bool var_204_bool; object var_205_object;
	var_200_object = var_205_object;
	func_3392(var_204_bool, var_205_object, 585);
}
EMIT "Stack[-1] = 0";


void func_2319(bool var_40_bool)
{
	object var_43_object;
	@FindActor(var_43_object, "player");
	if(!var_43_object) { //@nz
		var_40_bool = false;
		return 4;
	}
	float var_47_float; object var_48_object;
	func_2537(var_47_float, var_48_object);
	if(var_47_float > 90000.0) {
		var_40_bool = false;
		return 4;
	}
	bool var_44_bool;
	@CanSee(var_44_bool, var_48_object);
	var_44_bool = var_40_bool;
}
EMIT "Stack[-2] = 0";


void func_2576(bool var_212_bool, object var_213_object, float var_214_float)
{
	cvector var_225_cvector; bool var_232_bool;
	var_213_object->GetPosition(var_225_cvector);
	float var_224_float;
	var_213_object->GetEyesHeight(var_224_float);
	var_233_float = GetByIndex(var_225_cvector, 1);
	SetByIndex(var_225_cvector, 1) = (var_233_float + var_224_float);
	cvector var_226_cvector;
	@GetPosition(var_226_cvector);
	@GetEyesHeight(var_224_float);
	var_234_float = GetByIndex(var_226_cvector, 1);
	SetByIndex(var_226_cvector, 1) = (var_234_float + var_224_float);
	cvector var_227_cvector = var_225_cvector - var_226_cvector;
	var_235_float = GetByIndex(var_227_cvector, 1);
	SetByIndex(var_227_cvector, 1) = (float)0;
	var_237_float = sqrt(var_227_cvector | var_227_cvector);
	var_227_cvector /= var_237_float;
	cvector var_228_cvector = -var_227_cvector;
	cvector var_239_cvector;
	func_2925(var_239_cvector, (var_228_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_229_cvector = ((var_227_cvector * var_214_float) + (var_239_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_231_bool;
	@IsOverrideActive(var_231_bool);
	if(var_231_bool != 0)
		var_212_bool = false;
	@StopWorld();
	@CameraTransit((var_226_cvector + var_229_cvector), var_228_cvector);
	var_252_float = GetByIndex(var_229_cvector, 0);
	var_253_float = GetByIndex(var_229_cvector, 2);
	@Rotate(var_252_float, var_253_float);
	bool var_254_bool;
	func_3040(var_254_bool);
	if(var_254_bool != 0) {
	} else {
		@HasAnimationTrack(var_232_bool, "head");
		if(var_232_bool == 0) goto Label_2638;
		@LookAsyncCamera("head");
	}
Label_2638:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_212_bool = true;
	
}


void func_3093(object var_85_object)
{
	object var_91_object;
	func_3420(var_91_object);
	object var_89_object;
	var_91_object = var_89_object;
	float var_102_float;
	func_2988(var_102_float);
	var_89_object->AddMark("b2q03GoodShop", "pt_b2q03_good_shop", 3, 531061, var_102_float);
	func_3327();
	int var_90_int;
	var_85_object->RemoveItemByType(var_90_int, "grass_brown_tvir", 10);
	bool var_115_bool;
	func_2976(var_115_bool, "quest_b2_03", "completed");
}
EMIT "Stack[-2] = 0";


void func_2072(bool var_0_bool, int var_740_int, object var_741_object)
{
	var_0_bool = var_741_object;
	bool var_751_bool; object var_752_object;
	object var_753_object;
	func_2919(var_753_object);
	var_753_object = var_752_object;
	func_2661(var_751_bool, var_752_object);
	bool var_754_bool; object var_755_object;
	var_741_object = var_755_object;
	func_2576(var_754_bool, var_755_object, 70.0);
	if(!var_754_bool) { //@nz
		var_740_int = -2;
		return 8;
	}
	object var_747_object;
	@CreateDialog(var_747_object);
	int var_758_int;
	func_3034(var_758_int);
	var_747_object->SetNPCName(var_758_int);
	int var_759_int;
	func_3032(var_759_int);
	var_747_object->SetNPCDescription(var_759_int);
	string var_760_string;
	func_3036(var_760_string);
	var_747_object->SetPhoto(var_760_string);
	string var_761_string;
	func_3038(var_761_string);
	var_747_object->SetPhoto2(var_761_string);
	int var_762_int;
	func_3513(var_762_int);
	var_747_object->SetPlayerName(var_762_int);
	bool var_748_bool;
	@IsOverrideActive(var_748_bool);
	if(var_748_bool != 0) {
		var_740_int = -2;
		return 8;
	}
	@DoDialog(var_747_object);
	object var_764_object; object var_765_object;
	var_741_object = var_764_object;
	var_747_object = var_765_object;
	TaskCall(13);
	func_2153(var_766_object, var_767_object, var_768_string, var_769_bool, var_764_object, var_765_object);
	TaskReturn();
	bool var_750_bool;
	var_747_object->IsDialogEnd(var_750_bool);
	
	for(;;) {
		var_794_bool = !var_750_bool; //@nz
		if(var_794_bool == 0) goto Label_2142;
		@sync();
		var_747_object->IsDialogEnd(var_750_bool);
	}
	
Label_2142:
	object var_795_object;
	var_741_object = var_795_object;
	func_2644();
	@StopDialog(var_747_object);
	var_747_object->GetReturnValue(-1);
	int var_749_int = var_740_int;
}
EMIT "Stack[-4] = 0";


void func_3353(void)
{
	object var_192_object;
	@CreateDiaryEntry(var_192_object, 591, 2, 531079);
	bool var_196_bool; object var_197_object;
	var_192_object = var_197_object;
	func_3392(var_196_bool, var_197_object, 588);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1056(object var_2_object, string var_369_string)
{
	bool var_370_bool;
	func_3040(var_370_bool);
	if(!var_370_bool) //@nz
		return 0;
	if(var_369_string == var_2_object)
		return 0;
	string var_373_string; bool var_374_bool;
	var_369_string = var_373_string;
	if(var_369_string == "")
		var_374_bool = false;
	else
		var_374_bool = true;
	func_2865(var_373_string, var_374_bool);
	var_2_object = var_369_string;
	
}


void func_2341(void)
{
	float var_46_float;
	@rand(var_46_float, 8, 16);
	@SetTimer(10, var_46_float);
}


void func_3366(void)
{
	object var_152_object;
	@CreateDiaryEntry(var_152_object, 612, 2, 531559);
	bool var_156_bool; object var_157_object;
	var_152_object = var_157_object;
	func_3392(var_156_bool, var_157_object, 588);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2854(void)
{
	@CameraSwitchToNormal();
}


void func_2858(string var_39_string)
{
	float var_42_float; float var_43_float;
	@lshGetAnimTimes(var_39_string, var_42_float, var_43_float);
	@lshPlayAnimation(var_42_float, var_43_float, false);
}


void func_813(bool var_0_bool, int var_322_int, object var_323_object)
{
	var_0_bool = var_323_object;
	bool var_333_bool; object var_334_object;
	object var_335_object;
	func_2919(var_335_object);
	var_335_object = var_334_object;
	func_2661(var_333_bool, var_334_object);
	bool var_336_bool; object var_337_object;
	var_323_object = var_337_object;
	func_2576(var_336_bool, var_337_object, 70.0);
	if(!var_336_bool) { //@nz
		var_322_int = -2;
		return 8;
	}
	object var_329_object;
	@CreateDialog(var_329_object);
	int var_340_int;
	func_3034(var_340_int);
	var_329_object->SetNPCName(var_340_int);
	int var_341_int;
	func_3032(var_341_int);
	var_329_object->SetNPCDescription(var_341_int);
	string var_342_string;
	func_3036(var_342_string);
	var_329_object->SetPhoto(var_342_string);
	string var_343_string;
	func_3038(var_343_string);
	var_329_object->SetPhoto2(var_343_string);
	int var_344_int;
	func_3513(var_344_int);
	var_329_object->SetPlayerName(var_344_int);
	bool var_330_bool;
	@IsOverrideActive(var_330_bool);
	if(var_330_bool != 0) {
		var_322_int = -2;
		return 8;
	}
	@DoDialog(var_329_object);
	object var_346_object; object var_347_object;
	var_323_object = var_346_object;
	var_329_object = var_347_object;
	TaskCall(9);
	func_894(var_348_object, var_349_object, var_350_string, var_351_bool, var_346_object, var_347_object);
	TaskReturn();
	bool var_332_bool;
	var_329_object->IsDialogEnd(var_332_bool);
	
	for(;;) {
		var_462_bool = !var_332_bool; //@nz
		if(var_462_bool == 0) goto Label_883;
		@sync();
		var_329_object->IsDialogEnd(var_332_bool);
	}
	
Label_883:
	object var_463_object;
	var_323_object = var_463_object;
	func_2644();
	@StopDialog(var_329_object);
	var_329_object->GetReturnValue(-1);
	int var_331_int = var_322_int;
}
EMIT "Stack[-4] = 0";


void func_2350(void)
{
	@KillTimer(10);
}


// @pe
void func_3121(void)
{
	@SetVariable("b2AndreiVisit", 1);
}


void func_2865(string var_283_string, bool var_284_bool)
{
	float var_289_float; float var_290_float;
	@lshGetAnimTimes(var_283_string, var_289_float, var_290_float);
	@lshPlayAnimation(var_289_float, var_290_float, var_284_bool);
}


// @pe
void func_1791(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_532_object, object var_533_object)
{
	var_0_bool = var_533_object;
	var_1_object = var_532_object;
	var_3_object = false;
	if(1 != 0) {
		func_1868(var_533_object, "Smile");
		var_0_bool->SetMessage(518917); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_548_bool = false;
		bool var_549_bool;
		func_3254(var_1_object);
		if(var_549_bool != 0) {
			bool var_555_bool;
			func_3266(var_1_object);
			if(var_555_bool != 0)
				var_548_bool = true;
		}
		if(var_548_bool != 0)
			var_0_bool->AddReply(518919, 20031, 20030); //@t
		var_0_bool->AddReply(531963, -1, 33368); //@t
		var_0_bool->AddReply(518918, -1, 20029); //@t
		goto Label_1838;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x703";
	}
Label_1838:
	bool var_570_bool;
	func_3040(var_570_bool);
	if(var_570_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2858(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1867;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1867:
		return 0;

	}
	
}


void func_3379(object var_56_object)
{
	object var_58_object;
	@GetDiaryRoot(var_58_object);
	if(!var_58_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_56_object = false;
	}
	var_58_object = var_56_object;
}
EMIT "Stack[-1] = 0";


void func_53(bool var_0_bool, int var_611_int, object var_612_object)
{
	var_0_bool = var_612_object;
	bool var_622_bool; object var_623_object;
	object var_624_object;
	func_2919(var_624_object);
	var_624_object = var_623_object;
	func_2661(var_622_bool, var_623_object);
	bool var_625_bool; object var_626_object;
	var_612_object = var_626_object;
	func_2576(var_625_bool, var_626_object, 70.0);
	if(!var_625_bool) { //@nz
		var_611_int = -2;
		return 8;
	}
	object var_618_object;
	@CreateDialog(var_618_object);
	int var_629_int;
	func_3034(var_629_int);
	var_618_object->SetNPCName(var_629_int);
	int var_630_int;
	func_3032(var_630_int);
	var_618_object->SetNPCDescription(var_630_int);
	string var_631_string;
	func_3036(var_631_string);
	var_618_object->SetPhoto(var_631_string);
	string var_632_string;
	func_3038(var_632_string);
	var_618_object->SetPhoto2(var_632_string);
	int var_633_int;
	func_3513(var_633_int);
	var_618_object->SetPlayerName(var_633_int);
	bool var_619_bool;
	@IsOverrideActive(var_619_bool);
	if(var_619_bool != 0) {
		var_611_int = -2;
		return 8;
	}
	@DoDialog(var_618_object);
	object var_635_object; object var_636_object;
	var_612_object = var_635_object;
	var_618_object = var_636_object;
	TaskCall(3);
	func_134(var_637_object, var_638_object, var_639_string, var_640_bool, var_635_object, var_636_object);
	TaskReturn();
	bool var_621_bool;
	var_618_object->IsDialogEnd(var_621_bool);
	
	for(;;) {
		var_665_bool = !var_621_bool; //@nz
		if(var_665_bool == 0) goto Label_123;
		@sync();
		var_618_object->IsDialogEnd(var_621_bool);
	}
	
Label_123:
	object var_666_object;
	var_612_object = var_666_object;
	func_2644();
	@StopDialog(var_618_object);
	var_618_object->GetReturnValue(-1);
	int var_620_int = var_611_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3127(object var_160_object)
{
	object var_164_object;
	func_3420(var_164_object);
	object var_161_object;
	var_164_object = var_161_object;
	func_3437(var_161_object, "pt_b2q03_good_shop", (float)2);
	object var_184_object;
	func_3420(var_184_object);
	var_160_object->ShowMap(var_184_object);
}


void func_2871(bool var_156_bool, string var_157_string)
{
	bool var_159_bool;
	bool var_160_bool;
	func_3040(var_160_bool);
	if(var_160_bool != 0) {
		@lshHasSpeech(var_159_bool, var_157_string);
		if(var_159_bool != 0) {
			@lshPlaySpeech(var_157_string);
			var_156_bool = true;
		}
	}
	var_156_bool = false;
}


// @pe
void func_3064(void)
{
	@TriggerWorld("playsound", "givemoney");
}


void func_3392(bool var_47_bool, object var_48_object, int var_49_int)
{
	object var_56_object;
	func_3379(var_56_object);
	object var_53_object;
	var_56_object = var_53_object;
	object var_54_object;
	var_53_object->Find(var_49_int, var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_49_int);
		var_47_bool = false;
	}
	var_54_object->AddChild(var_48_object);
	@SendWorldWndMessage(7);
	int var_55_int;
	var_48_object->GetCategory(var_55_int);
	@SetDiarySection(var_55_int);
	var_47_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2886(void)
{
	bool var_35_bool;
	func_3040(var_35_bool);
	if(var_35_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_3143(void)
{
	@SetVariable("b2q03_1", 2);
	func_3353();
	func_3340();
}


// @pe
void func_1868(object var_2_object, string var_539_string)
{
	bool var_540_bool;
	func_3040(var_540_bool);
	if(!var_540_bool) //@nz
		return 0;
	if(var_539_string == var_2_object)
		return 0;
	string var_543_string; bool var_544_bool;
	var_539_string = var_543_string;
	if(var_539_string == "")
		var_544_bool = false;
	else
		var_544_bool = true;
	func_2865(var_543_string, var_544_bool);
	var_2_object = var_539_string;
	
}


void func_2893(string var_98_string, int var_99_int, int var_100_int)
{
	bool var_102_bool;
	int var_104_int;
	var_99_int = var_104_int;
	int var_105_int;
	var_100_int = var_105_int;
	bool var_103_bool;
	func_2935(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0)
		@AddItem(var_102_bool, var_98_string, 0);
}


// @pe
void func_3155(void)
{
	int var_145_int;
	func_2940(var_145_int, "b2q03_1");
	if(var_145_int != 0)
		func_3366();
}


void func_2644(void)
{
	bool var_311_bool;
	@CameraSwitchToNormal();
	bool var_312_bool;
	func_3040(var_312_bool);
	if(var_312_bool != 0) {
	} else {
		@HasAnimationTrack(var_311_bool, "head");
		if(var_311_bool == 0) goto Label_2660;
		@UnlookAsync("head");
	}
Label_2660:
	
}


void func_2904(string var_68_string, int var_69_int, int var_70_int, int var_71_int)
{
	int var_74_int; bool var_75_bool;
	int var_77_int;
	var_69_int = var_77_int;
	int var_78_int;
	var_70_int = var_78_int;
	bool var_76_bool;
	func_2935(var_76_bool, var_77_int, var_78_int);
	if(var_76_bool != 0) {
		@irand(var_74_int, var_71_int);
		@AddItem(var_75_bool, var_68_string, 0, (var_74_int + 1));
	}
}


// @pe
void func_345(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_703_object, object var_704_object)
{
	var_0_bool = var_704_object;
	var_1_object = var_703_object;
	var_3_object = false;
	if(1 != 0) {
		func_408(var_704_object, "Neutral");
		var_0_bool->SetMessage(535231); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(535232, 36953, 36907); //@t
		var_0_bool->AddReply(535233, -1, 36908); //@t
		var_0_bool->AddReply(535280, -1, 36956); //@t
		goto Label_378;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x15d";
	}
Label_378:
	bool var_728_bool;
	func_3040(var_728_bool);
	if(var_728_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2858(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_407;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_407:
		return 0;

	}
	
}


// @pe
void func_604(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_272_object, object var_273_object)
{
	var_0_bool = var_273_object;
	var_1_object = var_272_object;
	var_3_object = false;
	if(1 != 0) {
		func_657(var_273_object, "Neutral");
		var_0_bool->SetMessage(517994); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(517995, 23147, 19128); //@t
		goto Label_627;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x260";
	}
Label_627:
	bool var_295_bool;
	func_3040(var_295_bool);
	if(var_295_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2858(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_656;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_656:
		return 0;

	}
	
}


void func_3420(object var_91_object)
{
	object var_94_object; object var_95_object;
	@GetMainOutdoorScene(var_94_object);
	if(var_94_object == null) {
		@Trace("Can't find main outdoor scene");
		var_95_object = null;
		var_95_object = var_91_object;
	}
	var_94_object->GetMap(var_95_object);
	var_95_object = var_91_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3167(object var_45_object)
{
	var_45_object->SetReturnValue(1000);
}


// @pe
void func_3172(bool var_353_bool)
{
	int var_355_int;
	func_2940(var_355_int, "oob2Andrei2");
	if(var_355_int == 0) {
		var_353_bool = true;
		return 0;
	}
	var_353_bool = false;
}


void func_2661(bool var_122_bool, object var_123_object)
{
	int var_129_int; int var_130_int;
	@GetVariable("voice_common", var_129_int);
	if(var_129_int != 0) {
		bool var_133_bool; object var_134_object;
		var_123_object = var_134_object;
		func_2719(var_133_bool, var_134_object);
		if(!var_133_bool) { //@nz
			bool var_164_bool; object var_165_object;
			var_123_object = var_165_object;
			func_2756(var_164_bool, var_165_object);
			if(!var_164_bool) { //@nz
				var_122_bool = false;
				return 4;
			}
		}
		@irand(var_130_int, 2);
		if(var_130_int != 0)
			@SetVariable("voice_common", ((var_129_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_204_bool; object var_205_object;
		var_123_object = var_205_object;
		func_2756(var_204_bool, var_205_object);
		if(!var_204_bool) { //@nz
			bool var_207_bool; object var_208_object;
			var_123_object = var_208_object;
			func_2719(var_207_bool, var_208_object);
			if(!var_207_bool) { //@nz
				var_122_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2717;
	
Label_2717:
	var_122_bool = true;
	
}


void func_2919(object var_124_object)
{
	object var_126_object;
	@self(var_126_object);
	var_126_object = var_124_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2153(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_764_object, object var_765_object)
{
	var_0_bool = var_765_object;
	var_1_object = var_764_object;
	var_3_object = false;
	if(1 != 0) {
		func_2211(var_765_object, "Neutral");
		var_0_bool->SetMessage(540554); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(540555, -1, 42564); //@t
		var_0_bool->AddReply(540794, -1, 42843); //@t
		goto Label_2181;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x86d";
	}
Label_2181:
	bool var_786_bool;
	func_3040(var_786_bool);
	if(var_786_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2858(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_2210;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2210:
		return 0;

	}
	
}


void func_2925(cvector var_239_cvector, cvector var_240_cvector)
{
	float var_243_float = sqrt(var_240_cvector | var_240_cvector);
	if(var_243_float < 0.000001)
		var_239_cvector = [0.0, 0.0, 0.0];
	var_239_cvector = var_240_cvector / var_243_float;
}


void func_3437(object var_161_object, string var_162_string, float var_163_float)
{
	object var_171_object;
	@GetMainOutdoorScene(var_171_object);
	if(var_171_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_169_cvector;
	cvector var_170_cvector;
	bool var_172_bool;
	var_171_object->GetLocator(var_162_string, var_172_bool, var_169_cvector, var_170_cvector);
	if(!var_172_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_162_string) + " doesnt exist");
	var_171_object->GetMap(var_161_object);
	if(var_161_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_182_float = GetByIndex(var_169_cvector, 0);
	var_183_float = GetByIndex(var_169_cvector, 2);
	var_161_object->SetMapParams(var_182_float, var_183_float, var_163_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3184(bool var_414_bool)
{
	int var_416_int;
	func_2940(var_416_int, "b2q03");
	if(var_416_int == 1)
		var_414_bool = true;
	var_414_bool = false;
}


void func_2935(bool var_76_bool, int var_77_int, int var_78_int)
{
	int var_80_int;
	@irand(var_80_int, var_78_int);
	var_76_bool = var_80_int < var_77_int;
}


// @pe
void func_3196(bool var_394_bool)
{
	int var_396_int;
	func_2940(var_396_int, "b2q03");
	if(var_396_int == 0) {
		var_394_bool = true;
		return 0;
	}
	var_394_bool = false;
}


void func_2940(int var_355_int, string var_356_string)
{
	int var_358_int;
	@GetVariable(var_356_string, var_358_int);
	var_358_int = var_355_int;
}


// @pe
void func_894(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_346_object, object var_347_object)
{
	var_0_bool = var_347_object;
	var_1_object = var_346_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_353_bool;
		func_3172(var_1_object);
		if(var_353_bool != 0) {
			object var_361_object; object var_362_object;
			var_361_object = var_1_object;
			var_362_object = var_0_bool;
			func_3070();
			object var_365_object; object var_366_object;
			var_365_object = var_1_object;
			var_366_object = var_0_bool;
			func_3121();
			func_1056(var_347_object, "Neutral");
			var_0_bool->SetMessage(531038); //@t
			var_0_bool->ClearReplies(); //@t
			var_0_bool->AddReply(531227, 32541, 32540); //@t
			var_0_bool->AddReply(531231, 32545, 32544); //@t
		} else {
					func_1056(var_347_object, "Neutral");
					var_0_bool->SetMessage(518214); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_394_bool;
					func_3196(var_1_object);
					if(var_394_bool != 0)
						var_0_bool->AddReply(531041, 32373, 32372); //@t
					bool var_403_bool = false;
					bool var_404_bool = false;
					bool var_405_bool;
					func_3208(var_405_bool, var_1_object);
					if(var_405_bool != 0) {
						bool var_414_bool;
						func_3184(var_1_object);
						if(var_414_bool != 0)
							var_404_bool = true;
					}
					if(var_404_bool != 0) {
						bool var_420_bool;
						func_3242(var_1_object);
						if(!var_420_bool) //@nz
							var_403_bool = true;
					}
					if(var_403_bool != 0)
						var_0_bool->AddReply(531048, 32378, 32377); //@t
					bool var_430_bool = false;
					bool var_431_bool;
					func_3230(var_1_object);
					if(var_431_bool != 0) {
						bool var_437_bool;
						func_3218(var_1_object);
						if(!var_437_bool) //@nz
							var_430_bool = true;
					}
					if(var_430_bool != 0)
						var_0_bool->AddReply(531081, 32402, 32401); //@t
					bool var_447_bool;
					func_3278(var_1_object);
					if(var_447_bool != 0)
						var_0_bool->AddReply(519410, 20576, 20575); //@t
					var_0_bool->AddReply(518215, 20584, 19328); //@t
					var_0_bool->AddReply(518216, -1, 19329); //@t
		}
	}
	for(;;) {
		bool var_384_bool;
		func_3040(var_384_bool);
		if(var_384_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2858(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_1055;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_1055:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x382";


void func_2945(int var_134_int, int var_135_int)
{
	object var_137_object;
	@CreateIntVector(var_137_object);
	var_137_object->add(var_134_int);
	var_137_object->add(var_135_int);
	@SendWorldWndMessage(3, var_137_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_134(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_635_object, object var_636_object)
{
	var_0_bool = var_636_object;
	var_1_object = var_635_object;
	var_3_object = false;
	if(1 != 0) {
		func_192(var_636_object, "Neutral");
		var_0_bool->SetMessage(531971); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(531972, -1, 33378); //@t
		var_0_bool->AddReply(531973, -1, 33379); //@t
		goto Label_162;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x8a";
	}
Label_162:
	bool var_657_bool;
	func_3040(var_657_bool);
	if(var_657_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2858(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_191;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_191:
		return 0;

	}
	
}


// @pe
void func_3208(bool var_405_bool, object var_406_object)
{
	object var_408_object;
	var_406_object = var_408_object;
	bool var_407_bool;
	func_3290(var_407_bool, var_408_object);
	if(var_407_bool != 0) {
		var_405_bool = true;
		return 0;
	}
	var_405_bool = false;
}


void func_2957(object var_121_object, int var_122_int)
{
	int var_124_int;
	object var_125_object;
	var_121_object = var_125_object;
	int var_127_int;
	func_2545(var_125_object, "money", var_127_int);
	if(var_127_int > 0) {
		@GetInvItemByName(var_124_int, "Money");
		int var_134_int; int var_135_int;
		var_124_int = var_134_int;
		var_122_int = var_135_int;
		func_2945(var_134_int, var_135_int);
	}
}


void func_3470(void)
{
	int var_67_int;
	func_2993(var_67_int);
	int var_66_int;
	var_67_int = var_66_int;
	func_2904("samopal_ammo", 1, 1, 6);
	func_2904("rifle_ammo", 1, 1, 8);
	func_2904("revolver_ammo", 1, 1, 8);
	func_2904("tvirin", 1, 1, 3);
	if(var_66_int >= 5)
		func_2893("Samopal", 1, 1);
}


// @pe
void func_657(object var_2_object, string var_279_string)
{
	bool var_280_bool;
	func_3040(var_280_bool);
	if(!var_280_bool) //@nz
		return 0;
	if(var_279_string == var_2_object)
		return 0;
	string var_283_string; bool var_284_bool;
	var_279_string = var_283_string;
	if(var_279_string == "")
		var_284_bool = false;
	else
		var_284_bool = true;
	func_2865(var_283_string, var_284_bool);
	var_2_object = var_279_string;
	
}


// @pe
void func_3218(bool var_437_bool)
{
	int var_439_int;
	func_2940(var_439_int, "b2q03");
	if(var_439_int == 1000)
		var_437_bool = true;
	var_437_bool = false;
}


// @pe
void func_408(object var_2_object, string var_710_string)
{
	bool var_711_bool;
	func_3040(var_711_bool);
	if(!var_711_bool) //@nz
		return 0;
	if(var_710_string == var_2_object)
		return 0;
	string var_714_string; bool var_715_bool;
	var_710_string = var_714_string;
	if(var_710_string == "")
		var_715_bool = false;
	else
		var_715_bool = true;
	func_2865(var_714_string, var_715_bool);
	var_2_object = var_710_string;
	
}


void func_2461(void)
{
	bool var_58_bool; int var_59_int; int var_60_int; bool var_61_bool;
	@WaitForAnimEnd();
	bool var_62_bool;
	func_2571(var_62_bool);
	if(!var_62_bool) //@nz
		return 12;
	int var_64_int;
	func_3015(var_64_int);
	int var_56_int;
	var_64_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_77_bool = false;
		if(var_57_int < 5) {
			bool var_80_bool;
			func_2571(var_80_bool);
			if(var_80_bool != 0)
				var_77_bool = true;
		}
		if(var_77_bool != 0) {
			if(!var_56_int) { //@nz
				@Sleep(3, var_58_bool);
				if(!var_58_bool) { //@nz
				} else {
			} else {
			@irand(var_59_int, var_56_int);
			@irand(var_60_int, 5);
			if(var_60_int != 0)
				var_59_int = 0;
			string var_91_string; int var_92_int;
			var_59_int = var_92_int;
			func_3008(var_91_string, var_92_int);
			@PlayAnimation("all", var_91_string);
			@WaitForAnimEnd(var_61_bool);
			var_93_bool = !var_61_bool; //@nz
			if(var_93_bool == 0) goto Label_2516;
			goto Label_2527;
			}
				Label_2516:
					bool var_84_bool;
					func_2530(var_84_bool);
					var_85_bool = !var_84_bool; //@nz
					if(var_85_bool == 0) goto Label_2522;
			}
		}
	Label_2527:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_2522:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


// @pe
void func_3230(bool var_431_bool)
{
	int var_433_int;
	func_2940(var_433_int, "b2q03_1");
	if(var_433_int == 1)
		var_431_bool = true;
	var_431_bool = false;
}


void func_2719(bool var_133_bool, object var_134_object)
{
	string var_140_string; bool var_142_bool; int var_143_int; string var_144_string;
	var_140_string = "c";
	int var_141_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_134_object->HasProperty((var_140_string + (var_141_int + 1)), var_142_bool);
			if(!var_142_bool) { //@nz
			} else {
				var_141_int += 1;
			}
		}
		if(!var_141_int) { //@nz
			var_133_bool = false;
			return 10;
		}
		var_143_int = 0;
		if(var_141_int > 1)
			@irand(var_143_int, var_141_int);
		var_134_object->GetProperty((var_140_string + (var_143_int + 1)), var_144_string);
		bool var_156_bool; string var_157_string;
		var_144_string = var_157_string;
		func_2871(var_156_bool, var_157_string);
		var_156_bool = var_133_bool;
		return 10;

	}
}


void func_2976(bool var_73_bool, string var_74_string, string var_75_string)
{
	object var_77_object;
	@FindActor(var_77_object, var_74_string);
	if(var_77_object == null)
		var_73_bool = false;
	@Trigger(var_77_object, var_75_string);
	var_73_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2211(object var_2_object, string var_771_string)
{
	bool var_772_bool;
	func_3040(var_772_bool);
	if(!var_772_bool) //@nz
		return 0;
	if(var_771_string == var_2_object)
		return 0;
	string var_775_string; bool var_776_bool;
	var_771_string = var_775_string;
	if(var_771_string == "")
		var_776_bool = false;
	else
		var_776_bool = true;
	func_2865(var_775_string, var_776_bool);
	var_2_object = var_771_string;
	
}


// @pe
void func_3242(bool var_420_bool)
{
	int var_422_int;
	func_2940(var_422_int, "b2q03_1");
	if(var_422_int == 2)
		var_420_bool = true;
	var_420_bool = false;
}


void func_2988(float var_102_float)
{
	float var_104_float;
	@GetGameTime(var_104_float);
	var_104_float = var_102_float;
}


void func_1710(bool var_0_bool, int var_508_int, object var_509_object)
{
	var_0_bool = var_509_object;
	bool var_519_bool; object var_520_object;
	object var_521_object;
	func_2919(var_521_object);
	var_521_object = var_520_object;
	func_2661(var_519_bool, var_520_object);
	bool var_522_bool; object var_523_object;
	var_509_object = var_523_object;
	func_2576(var_522_bool, var_523_object, 70.0);
	if(!var_522_bool) { //@nz
		var_508_int = -2;
		return 8;
	}
	object var_515_object;
	@CreateDialog(var_515_object);
	int var_526_int;
	func_3034(var_526_int);
	var_515_object->SetNPCName(var_526_int);
	int var_527_int;
	func_3032(var_527_int);
	var_515_object->SetNPCDescription(var_527_int);
	string var_528_string;
	func_3036(var_528_string);
	var_515_object->SetPhoto(var_528_string);
	string var_529_string;
	func_3038(var_529_string);
	var_515_object->SetPhoto2(var_529_string);
	int var_530_int;
	func_3513(var_530_int);
	var_515_object->SetPlayerName(var_530_int);
	bool var_516_bool;
	@IsOverrideActive(var_516_bool);
	if(var_516_bool != 0) {
		var_508_int = -2;
		return 8;
	}
	@DoDialog(var_515_object);
	object var_532_object; object var_533_object;
	var_509_object = var_532_object;
	var_515_object = var_533_object;
	TaskCall(11);
	func_1791(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object);
	TaskReturn();
	bool var_518_bool;
	var_515_object->IsDialogEnd(var_518_bool);
	
	for(;;) {
		var_578_bool = !var_518_bool; //@nz
		if(var_578_bool == 0) goto Label_1780;
		@sync();
		var_515_object->IsDialogEnd(var_518_bool);
	}
	
Label_1780:
	object var_579_object;
	var_509_object = var_579_object;
	func_2644();
	@StopDialog(var_515_object);
	var_515_object->GetReturnValue(-1);
	int var_517_int = var_508_int;
}
EMIT "Stack[-4] = 0";


void func_2993(int var_58_int)
{
	float var_60_float;
	@GetGameTime(var_60_float);
	var_58_int = 1 + (var_60_float / 24);
}


// @pe
void func_3254(bool var_549_bool)
{
	int var_551_int;
	func_2940(var_551_int, "b5q01");
	if(var_551_int == 1)
		var_549_bool = true;
	var_549_bool = false;
}


void func_3513(int var_263_int)
{
	int var_265_int;
	@GetVariable("branch", var_265_int);
	if(var_265_int == 0) {
		var_263_int = 1;
		return 2;
	EMIT "GOTO 0xdc8";
	}
	if(var_265_int == 1) {
		var_263_int = 2;
		return 2;
	}
	var_263_int = 3;
}


// @pe
void func_3002(bool var_318_bool, int var_319_int)
{
	int var_320_int;
	func_2993(var_320_int);
	var_318_bool = var_320_int == var_319_int;
}


// @pe
void func_192(object var_2_object, string var_642_string)
{
	bool var_643_bool;
	func_3040(var_643_bool);
	if(!var_643_bool) //@nz
		return 0;
	if(var_642_string == var_2_object)
		return 0;
	string var_646_string; bool var_647_bool;
	var_642_string = var_646_string;
	if(var_642_string == "")
		var_647_bool = false;
	else
		var_647_bool = true;
	func_2865(var_646_string, var_647_bool);
	var_2_object = var_642_string;
	
}


void func_3008(string var_70_string, int var_71_int)
{
	string var_73_string = "idle";
	if(var_71_int != 0)
		var_73_string += var_71_int;
	var_73_string = var_70_string;
}


// @pe
void func_3266(bool var_555_bool)
{
	int var_557_int;
	func_2940(var_557_int, "oob5Andrei1");
	if(var_557_int == 0) {
		var_555_bool = true;
		return 0;
	}
	var_555_bool = false;
}


void func_2756(bool var_164_bool, object var_165_object)
{
	bool var_173_bool; int var_174_int; string var_175_string;
	int var_177_int;
	func_2993(var_177_int);
	string var_171_string = ("d" + var_177_int) + "m";
	int var_172_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_165_object->HasProperty((var_171_string + (var_172_int + 1)), var_173_bool);
			if(!var_173_bool) { //@nz
			} else {
				var_172_int += 1;
			}
		}
		if(!var_172_int) { //@nz
			var_164_bool = false;
			return 10;
		}
		var_174_int = 0;
		if(var_172_int > 1)
			@irand(var_174_int, var_172_int);
		var_165_object->GetProperty((var_171_string + (var_174_int + 1)), var_175_string);
		bool var_191_bool; string var_192_string;
		var_175_string = var_192_string;
		func_2871(var_191_bool, var_192_string);
		var_191_bool = var_164_bool;
		return 10;

	}
}


void func_3015(int var_64_int)
{
	int var_67_int; bool var_68_bool;
	var_67_int = 0;
	
	for(;;) {
		string var_70_string; int var_71_int;
		var_67_int = var_71_int;
		func_3008(var_70_string, var_71_int);
		@HasAnimation(var_68_bool, "all", var_70_string);
		if(!var_68_bool) //@nz
			break;
		var_67_int += 1;
	}
	var_67_int = var_64_int;
}


void func_3530(object var_50_object, object var_324_object, object var_510_object, object var_613_object)
{
	int var_54_int;
	@GetVariable("tr_andrei", var_54_int);
	int var_58_int;
	func_2993(var_58_int);
	if(var_54_int != var_58_int) {
		func_3470();
		int var_108_int;
		func_2993(var_108_int);
		@SetVariable("tr_andrei", var_108_int);
	}
	int var_55_int;
	@GetVariable("mt_andrei", var_55_int);
	if(!var_55_int) { //@nz
		int var_111_int; object var_112_object;
		var_50_object = var_112_object;
		TaskCall(6);
		func_523(var_113_object, var_111_int, var_112_object);
		TaskReturn();
		@SetVariable("mt_andrei", 1);
	}
	bool var_318_bool;
	func_3002(var_318_bool, 2);
	if(var_318_bool != 0) {
		int var_322_int; object var_323_object;
		var_50_object = var_323_object;
		TaskCall(8);
		func_813(var_324_object, var_322_int, var_323_object);
		TaskReturn();
		if(1000 == var_324_object) {
			bool var_465_bool; object var_466_object;
			var_50_object = var_466_object;
			func_2799(var_465_bool, var_466_object);
			if(!var_465_bool) //@nz
				return 6;
			object var_497_object;
			var_50_object = var_497_object;
			TaskCall(1);
			func_13(var_497_object);
			TaskReturn();
			object var_504_object;
			var_50_object = var_504_object;
			func_2854();
		}
		return 6;
	}
	bool var_505_bool;
	func_3002(var_505_bool, 5);
	if(var_505_bool != 0) {
		int var_508_int; object var_509_object;
		var_50_object = var_509_object;
		TaskCall(10);
		func_1710(var_510_object, var_508_int, var_509_object);
		TaskReturn();
		if(1000 == var_510_object) {
			bool var_581_bool; object var_582_object;
			var_50_object = var_582_object;
			func_2799(var_581_bool, var_582_object);
			if(!var_581_bool) //@nz
				return 6;
			object var_584_object;
			var_50_object = var_584_object;
			TaskCall(1);
			func_13(var_584_object);
			TaskReturn();
			object var_586_object;
			var_50_object = var_586_object;
			func_2854();
		}
		return 6;
	}
	bool var_587_bool = true;
	bool var_588_bool = true;
	bool var_589_bool = true;
	bool var_590_bool = true;
	bool var_591_bool = true;
	bool var_592_bool = true;
	bool var_593_bool = true;
	bool var_594_bool;
	func_3002(var_594_bool, 3);
	if(var_594_bool != 1) {
		bool var_596_bool;
		func_3002(var_596_bool, 4);
		if(var_596_bool != 1)
			var_593_bool = false;
	}
	if(var_593_bool != 1) {
		bool var_598_bool;
		func_3002(var_598_bool, 6);
		if(var_598_bool != 1)
			var_592_bool = false;
	}
	if(var_592_bool != 1) {
		bool var_600_bool;
		func_3002(var_600_bool, 7);
		if(var_600_bool != 1)
			var_591_bool = false;
	}
	if(var_591_bool != 1) {
		bool var_602_bool;
		func_3002(var_602_bool, 8);
		if(var_602_bool != 1)
			var_590_bool = false;
	}
	if(var_590_bool != 1) {
		bool var_604_bool;
		func_3002(var_604_bool, 9);
		if(var_604_bool != 1)
			var_589_bool = false;
	}
	if(var_589_bool != 1) {
		bool var_606_bool;
		func_3002(var_606_bool, 10);
		if(var_606_bool != 1)
			var_588_bool = false;
	}
	if(var_588_bool != 1) {
		bool var_608_bool;
		func_3002(var_608_bool, 11);
		if(var_608_bool != 1)
			var_587_bool = false;
	}
	if(var_587_bool != 0) {
		int var_611_int; object var_612_object;
		var_50_object = var_612_object;
		TaskCall(2);
		func_53(var_613_object, var_611_int, var_612_object);
		TaskReturn();
		if(1000 == var_613_object) {
			bool var_668_bool; object var_669_object;
			var_50_object = var_669_object;
			func_2799(var_668_bool, var_669_object);
			if(!var_668_bool) //@nz
				return 6;
			object var_671_object;
			var_50_object = var_671_object;
			TaskCall(1);
			func_13(var_671_object);
			TaskReturn();
			object var_673_object;
			var_50_object = var_673_object;
			func_2854();
		}
		return 6;
	}
	int var_56_int;
	@GetVariable("d12_andrei", var_56_int);
	bool var_675_bool = false;
	bool var_676_bool;
	func_3002(var_676_bool, 12);
	if(var_676_bool != 0) {
		if(!var_56_int) //@nz
			var_675_bool = true;
	}
	if(var_675_bool != 0) {
		int var_679_int; object var_680_object;
		var_50_object = var_680_object;
		TaskCall(4);
		func_264(var_681_object, var_679_int, var_680_object);
		TaskReturn();
		@SetVariable("d12_andrei", 1);
		return 6;
	}
	int var_740_int; object var_741_object;
	var_50_object = var_741_object;
	TaskCall(12);
	func_2072(var_742_object, var_740_int, var_741_object);
	TaskReturn();
}


// @pe
void func_3278(bool var_447_bool)
{
	int var_449_int;
	func_2940(var_449_int, "oob2Andrei1");
	if(var_449_int == 0) {
		var_447_bool = true;
		return 0;
	}
	var_447_bool = false;
}


void func_3032(int var_260_int)
{
	var_260_int = 515529;
}


void func_3290(bool var_407_bool, object var_408_object)
{
	int var_410_int;
	var_408_object->GetItemCountOfType(var_410_int, "grass_brown_tvir");
	if(var_410_int >= 10)
		var_407_bool = true;
	var_407_bool = false;
}


void func_3034(int var_259_int)
{
	var_259_int = 502855;
}


void func_3036(string var_261_string)
{
	var_261_string = "ui/NPC_Andrei.png";
}


void func_3038(string var_262_string)
{
	var_262_string = "ui/NPC_Andrei_b.png";
}


void func_3040(bool var_160_bool)
{
	var_160_bool = true;
}


// @pe
void func_3042(void)
{
	@SetVariable("oob5Andrei1", 1);
}


void func_2530(bool var_84_bool)
{
	var_84_bool = true;
}


void func_2532(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_3301(void)
{
	object var_43_object;
	@CreateDiaryEntry(var_43_object, 585, 2, 531046);
	bool var_47_bool; object var_48_object;
	var_43_object = var_48_object;
	func_3392(var_47_bool, var_48_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2279(bool var_0_bool)
{
	bool var_32_bool;
	func_2571(var_32_bool);
	if(!var_32_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_2407();
	@GetDirection(var_0_bool);
	
	for(;;) {
		func_2461();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3048(void)
{
	@SetVariable("oob2Andrei1", 1);
}


void func_2537(float var_47_float, object var_48_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_48_object->GetPosition(var_53_cvector);
	var_47_float = (var_53_cvector - var_52_cvector) | (var_53_cvector - var_52_cvector);
}


// @pe
void func_3054(object var_118_object)
{
	@Trace("money 4000 is given");
	object var_121_object;
	var_118_object = var_121_object;
	func_2957(var_121_object, 4000);
}


// @pe
void func_2799(bool var_465_bool, object var_466_object)
{
	object var_468_object;
	var_466_object = var_468_object;
	bool var_467_bool;
	func_2807(var_467_bool, var_468_object, (float)70);
	var_467_bool = var_465_bool;
}


void func_2545(object var_125_object, string var_126_string, int var_127_int)
{
	int var_129_int;
	var_125_object->GetProperty(var_126_string, var_129_int);
	var_125_object->SetProperty(var_126_string, (var_129_int + var_127_int));
}


void func_3314(void)
{
	object var_66_object;
	@CreateDiaryEntry(var_66_object, 586, 2, 531047);
	bool var_70_bool; object var_71_object;
	var_66_object = var_71_object;
	func_3392(var_70_bool, var_71_object, 585);
}
EMIT "Stack[-1] = 0";


void func_2807(bool var_467_bool, object var_468_object, float var_469_float)
{
	cvector var_479_cvector;
	var_468_object->GetPosition(var_479_cvector);
	float var_478_float;
	var_468_object->GetEyesHeight(var_478_float);
	var_486_float = GetByIndex(var_479_cvector, 1);
	SetByIndex(var_479_cvector, 1) = (var_486_float + var_478_float);
	cvector var_480_cvector;
	@GetPosition(var_480_cvector);
	@GetEyesHeight(var_478_float);
	var_487_float = GetByIndex(var_480_cvector, 1);
	SetByIndex(var_480_cvector, 1) = (var_487_float + var_478_float);
	cvector var_481_cvector = var_479_cvector - var_480_cvector;
	var_488_float = GetByIndex(var_481_cvector, 1);
	SetByIndex(var_481_cvector, 1) = (float)0;
	var_490_float = sqrt(var_481_cvector | var_481_cvector);
	var_481_cvector /= var_490_float;
	cvector var_482_cvector = -var_481_cvector;
	cvector var_483_cvector = (var_481_cvector * var_469_float) - [0.0, 10.0, 0.0];
	bool var_485_bool;
	@IsOverrideActive(var_485_bool);
	if(var_485_bool != 0)
		var_467_bool = false;
	@StopWorld();
	@CameraTransit((var_480_cvector + var_483_cvector), var_482_cvector);
	var_494_float = GetByIndex(var_483_cvector, 0);
	var_495_float = GetByIndex(var_483_cvector, 2);
	@Rotate(var_494_float, var_495_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_467_bool = true;
}


void func_2552(bool var_40_bool, cvector var_41_cvector)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector = var_41_cvector - var_45_cvector;
	var_48_float = GetByIndex(var_46_cvector, 0);
	var_49_float = GetByIndex(var_46_cvector, 2);
	bool var_47_bool;
	@Rotate(var_48_float, var_49_float, var_47_bool);
	var_47_bool = var_40_bool;
}


void func_2299(bool var_57_bool)
{
	object var_59_object;
	@FindActor(var_59_object, "player");
	if(!var_59_object) //@nz
		var_57_bool = false;
	bool var_62_bool; object var_63_object;
	var_59_object = var_63_object;
	func_2562(var_62_bool, var_63_object);
	var_62_bool = var_57_bool;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3070(void)
{
	@SetVariable("oob2Andrei2", 1);
}


void func_3327(void)
{
	object var_106_object;
	@CreateDiaryEntry(var_106_object, 587, 2, 531051);
	bool var_110_bool; object var_111_object;
	var_106_object = var_111_object;
	func_3392(var_110_bool, var_111_object, 585);
}
EMIT "Stack[-1] = 0";


