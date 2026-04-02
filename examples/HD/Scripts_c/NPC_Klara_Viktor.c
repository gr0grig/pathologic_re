// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
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
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_34_cvector == 26947) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2588();
			}
			if(var_34_cvector == 26951) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_object;
				var_46_object = var_0_object;
				func_2624();
				object var_49_object = var_1_object;
				func_2594(var_0_object);
			}
			if(var_34_cvector == 43252) {
				object var_72_object = var_1_object;
				func_2581(var_0_object);
			}
			if(var_33_cvector == 26946) {
				func_171(var_34_cvector, "Confusion");
				var_0_object->SetMessage(525599); //@t
				var_0_object->ClearReplies(); //@t
				bool var_132_bool = false;
				bool var_133_bool;
				func_2630(var_1_object);
				if(var_133_bool != 0) {
					bool var_141_bool;
					func_2642(var_1_object);
					if(var_141_bool != 0)
						var_132_bool = true;
				}
				if(var_132_bool != 0)
					var_0_object->AddReply(525600, 26948, 26947); //@t
				var_0_object->AddReply(525605, -1, 26952); //@t
				var_0_object->AddReply(542220, -1, 44551); //@t
				return 0;
			}
			if(var_33_cvector == 26948) {
				func_171(var_34_cvector, "Confusion");
				var_0_object->SetMessage(525601); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542221, 44554, 44552); //@t
				var_0_object->AddReply(542222, 44555, 44553); //@t
				return 0;
			}
			if(var_33_cvector == 44555) {
				func_171(var_34_cvector, "Anger");
				var_0_object->SetMessage(542224); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542225, 44554, 44556); //@t
				var_0_object->AddReply(542226, 44560, 44557); //@t
				return 0;
			}
			if(var_33_cvector == 44554) {
				func_171(var_34_cvector, "Anger");
				var_0_object->SetMessage(542223); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542227, 44562, 44559); //@t
				var_0_object->AddReply(542232, 44562, 44564); //@t
				return 0;
			}
			if(var_33_cvector == 44562) {
				func_171(var_34_cvector, "Surprise");
				var_0_object->SetMessage(542230); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542231, 44560, 44563); //@t
				var_0_object->AddReply(542229, 44560, 44561); //@t
				return 0;
			}
			if(var_33_cvector == 44560) {
				func_171(var_34_cvector, "Surprise");
				var_0_object->SetMessage(542228); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525602, 26950, 26949); //@t
				var_0_object->AddReply(542238, 44568, 44573); //@t
				return 0;
			}
			if(var_33_cvector == 26950) {
				func_171(var_34_cvector, "Surprise");
				var_0_object->SetMessage(525603); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542233, 44568, 44567); //@t
				var_0_object->AddReply(542235, 44571, 44569); //@t
				return 0;
			}
			if(var_33_cvector == 44568) {
				func_171(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542234); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542236, 44571, 44570); //@t
				return 0;
			}
			if(var_33_cvector == 44571) {
				func_171(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542237); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525604, -1, 26951); //@t
				var_0_object->AddReply(541131, -1, 43252); //@t
				return 0;
			}
			var_3_string = true;
			bool var_233_bool;
			func_2579(var_233_bool);
			if(var_233_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc2";
	
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_33_cvector == 26887) {
				func_601(var_34_cvector, "Neutral");
				var_0_object->SetMessage(525531); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(525532, 44536, 26888); //@t
				var_0_object->AddReply(542207, 44538, 44535); //@t
				return 0;
			}
			if(var_33_cvector == 44536) {
				func_601(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542208); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542209, 44538, 44537); //@t
				var_0_object->AddReply(542214, 44538, 44543); //@t
				return 0;
			}
			if(var_33_cvector == 44538) {
				func_601(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542210); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542211, 44542, 44539); //@t
				var_0_object->AddReply(542212, 44548, 44541); //@t
				return 0;
			}
			if(var_33_cvector == 44548) {
				func_601(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542217); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542218, 44542, 44549); //@t
				var_0_object->AddReply(542219, -1, 44550); //@t
				return 0;
			}
			if(var_33_cvector == 44542) {
				func_601(var_34_cvector, "Neutral");
				var_0_object->SetMessage(542213); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(542215, -1, 44546); //@t
				var_0_object->AddReply(542216, -1, 44547); //@t
				return 0;
			}
			var_3_string = true;
			bool var_103_bool;
			func_2579(var_103_bool);
			if(var_103_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x270";
	
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_34_cvector == 28232) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2604();
			}
			if(var_33_cvector == 28231) {
				func_928(var_34_cvector, "Fear");
				var_0_object->SetMessage(526939); //@t
				var_0_object->ClearReplies(); //@t
				bool var_63_bool = true;
				bool var_64_bool = false;
				bool var_65_bool;
				func_2654(var_1_object);
				if(var_65_bool != 0) {
					bool var_73_bool;
					func_2666(var_1_object);
					if(var_73_bool != 0)
						var_64_bool = true;
				}
				if(var_64_bool != 1) {
					bool var_79_bool = false;
					bool var_80_bool;
					func_2678(var_1_object);
					if(var_80_bool != 0) {
						bool var_86_bool;
						func_2666(var_1_object);
						if(var_86_bool != 0)
							var_79_bool = true;
					}
					if(var_79_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_0_object->AddReply(526940, 28233, 28232); //@t
				var_0_object->AddReply(526945, -1, 28237); //@t
				return 0;
			}
			if(var_33_cvector == 28233) {
				func_928(var_34_cvector, "Neutral");
				var_0_object->SetMessage(526941); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526942, 28235, 28234); //@t
				var_0_object->AddReply(527965, 29330, 29322); //@t
				return 0;
			}
			if(var_33_cvector == 29330) {
				func_928(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527973); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527974, 29332, 29331); //@t
				return 0;
			}
			if(var_33_cvector == 29332) {
				func_928(var_34_cvector, "Neutral");
				var_0_object->SetMessage(527975); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527976, 29321, 29333); //@t
				return 0;
			}
			if(var_33_cvector == 28235) {
				func_928(var_34_cvector, "Surprise");
				var_0_object->SetMessage(526943); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(526944, 29321, 28236); //@t
				return 0;
			}
			if(var_33_cvector == 29321) {
				func_928(var_34_cvector, "Surprise");
				var_0_object->SetMessage(527964); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527966, 29324, 29323); //@t
				return 0;
			}
			if(var_33_cvector == 29324) {
				func_928(var_34_cvector, "Confusion");
				var_0_object->SetMessage(527967); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527969, 29327, 29326); //@t
				var_0_object->AddReply(527968, -1, 29325); //@t
				return 0;
			}
			if(var_33_cvector == 29327) {
				func_928(var_34_cvector, "Confusion");
				var_0_object->SetMessage(527970); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(527971, -1, 29328); //@t
				return 0;
			}
			var_3_string = true;
			bool var_149_bool;
			func_2579(var_149_bool);
			if(var_149_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x3b7";
	
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int, object var_22_object, object var_23_object, object var_24_object, string var_25_string, bool var_26_bool, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_34_cvector == 30380) {
				object var_39_object; object var_40_object;
				var_39_object = var_1_object;
				var_40_object = var_0_object;
				func_2610();
			}
			if(var_33_cvector == 30373) {
				func_1317(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528940); //@t
				var_0_object->ClearReplies(); //@t
				bool var_92_bool;
				func_2690(var_1_object);
				if(var_92_bool != 0)
					var_0_object->AddReply(528943, 30377, 30376); //@t
				var_0_object->AddReply(528941, -1, 30374); //@t
				var_0_object->AddReply(528942, -1, 30375); //@t
				return 0;
			}
			if(var_33_cvector == 30377) {
				func_1317(var_34_cvector, "Confusion");
				var_0_object->SetMessage(528944); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528945, 30379, 30378); //@t
				var_0_object->AddReply(528948, 30382, 30381); //@t
				return 0;
			}
			if(var_33_cvector == 30382) {
				func_1317(var_34_cvector, "Confusion");
				var_0_object->SetMessage(528949); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528950, 30384, 30383); //@t
				return 0;
			}
			if(var_33_cvector == 30384) {
				func_1317(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528951); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528952, 30391, 30385); //@t
				var_0_object->AddReply(528954, 30386, 30387); //@t
				return 0;
			}
			if(var_33_cvector == 30386) {
				func_1317(var_34_cvector, "Surprise");
				var_0_object->SetMessage(528953); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528955, 30389, 30388); //@t
				var_0_object->AddReply(528957, 30389, 30390); //@t
				return 0;
			}
			if(var_33_cvector == 30389) {
				func_1317(var_34_cvector, "Surprise");
				var_0_object->SetMessage(528956); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528960, 30379, 30394); //@t
				return 0;
			}
			if(var_33_cvector == 30391) {
				func_1317(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528958); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528959, 30379, 30392); //@t
				return 0;
			}
			if(var_33_cvector == 30379) {
				func_1317(var_34_cvector, "Neutral");
				var_0_object->SetMessage(528946); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(528947, -1, 30380); //@t
				return 0;
			}
			var_3_string = true;
			bool var_167_bool;
			func_2579(var_167_bool);
			if(var_167_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x53c";
	
	}

}


task task_9
{
}


task task_10
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, int var_25_int, int var_26_int, object var_27_object, object var_28_object, object var_29_object, string var_30_string, bool var_31_bool, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_33_cvector == 36906) {
				func_1684(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535231); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535232, 36953, 36907); //@t
				var_0_object->AddReply(535233, -1, 36908); //@t
				var_0_object->AddReply(535280, -1, 36956); //@t
				return 0;
			}
			if(var_33_cvector == 36953) {
				func_1684(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535277); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535278, 36957, 36954); //@t
				var_0_object->AddReply(535279, 36957, 36955); //@t
				return 0;
			}
			if(var_33_cvector == 36957) {
				func_1684(var_34_cvector, "Neutral");
				var_0_object->SetMessage(535281); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(535282, -1, 36958); //@t
				var_0_object->AddReply(535283, -1, 36959); //@t
				return 0;
			}
			var_3_string = true;
			bool var_86_bool;
			func_2579(var_86_bool);
			if(var_86_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6ab";
	
	}

}


task task_11
{
}


task task_12
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, int var_30_int, int var_31_int, bool var_32_bool, cvector var_33_cvector, cvector var_34_cvector)
	{
		if(1 != 0) {
			func_2429();
			if(var_33_cvector == 42554) {
				func_1938(var_34_cvector, "Neutral");
				var_0_object->SetMessage(540545); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(540546, -1, 42555); //@t
				var_0_object->AddReply(540798, -1, 42847); //@t
				return 0;
			}
			var_3_string = true;
			bool var_63_bool;
			func_2579(var_63_bool);
			if(var_63_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7a9";
	
	}

}


maintask task_13
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
	{
		var_33_bool = GlobalVars[1];
		GlobalVars[1] = true;
		func_2017(var_30_bool, var_31_cvector, var_32_cvector);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector, string var_33_string)
	{
		if(var_33_string == "icot_viktor_NPC_Trigger")
			func_2056(var_33_string);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2045(var_30_bool, var_31_cvector, var_32_cvector);
	}

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool, object var_25_object, object var_26_object, object var_27_object, string var_28_string, bool var_29_bool, bool var_30_bool, cvector var_31_cvector, cvector var_32_cvector, object var_33_object)
	{
		bool var_35_bool;
		if(actor != 0) {
			@IsOverrideActive(var_35_bool);
			if(!var_35_bool) { //@nz
				disable OnUse;
				bool var_38_bool; object var_39_object;
				var_33_object = var_39_object;
				func_2144(var_38_bool, var_39_object);
				enable OnUse;
				object var_52_object;
				var_33_object = var_52_object;
				func_2773(var_52_object);
			}
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_38_bool;
	func_2153(var_38_bool);
	if(!var_38_bool) goto Label_0; //@nz
}


void func_1540(object var_0_object, int var_508_int, object var_509_object)
{
	var_0_object = var_509_object;
	bool var_519_bool; object var_520_object;
	var_509_object = var_520_object;
	func_2158(var_519_bool, var_520_object, 70.0);
	if(!var_519_bool) { //@nz
		var_508_int = -2;
		return 8;
	}
	object var_515_object;
	@CreateDialog(var_515_object);
	int var_523_int;
	func_2573(var_523_int);
	var_515_object->SetNPCName(var_523_int);
	int var_524_int;
	func_2571(var_524_int);
	var_515_object->SetNPCDescription(var_524_int);
	string var_525_string;
	func_2575(var_525_string);
	var_515_object->SetPhoto(var_525_string);
	string var_526_string;
	func_2577(var_526_string);
	var_515_object->SetPhoto2(var_526_string);
	int var_527_int;
	func_2756(var_527_int);
	var_515_object->SetPlayerName(var_527_int);
	bool var_516_bool;
	@IsOverrideActive(var_516_bool);
	if(var_516_bool != 0) {
		var_508_int = -2;
		return 8;
	}
	@DoDialog(var_515_object);
	bool var_529_bool; object var_530_object;
	object var_531_object;
	func_2436(var_531_object);
	var_531_object = var_530_object;
	func_2245(var_529_bool, var_530_object);
	object var_532_object; object var_533_object;
	var_509_object = var_532_object;
	var_515_object = var_533_object;
	TaskCall(10);
	func_1621(var_534_object, var_535_object, var_536_string, var_537_bool, var_532_object, var_533_object);
	TaskReturn();
	bool var_518_bool;
	var_515_object->IsDialogEnd(var_518_bool);
	
	for(;;) {
		var_565_bool = !var_518_bool; //@nz
		if(var_565_bool == 0) goto Label_1610;
		@sync();
		var_515_object->IsDialogEnd(var_518_bool);
	}
	
Label_1610:
	object var_566_object;
	var_509_object = var_566_object;
	func_2227();
	@StopDialog(var_515_object);
	var_515_object->GetReturnValue(-1);
	int var_517_int = var_508_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2565(bool var_281_bool, int var_282_int)
{
	int var_283_int;
	func_2556(var_283_int);
	var_281_bool = var_283_int == var_282_int;
}


void func_1799(object var_0_object, int var_567_int, object var_568_object)
{
	var_0_object = var_568_object;
	bool var_578_bool; object var_579_object;
	var_568_object = var_579_object;
	func_2158(var_578_bool, var_579_object, 70.0);
	if(!var_578_bool) { //@nz
		var_567_int = -2;
		return 8;
	}
	object var_574_object;
	@CreateDialog(var_574_object);
	int var_582_int;
	func_2573(var_582_int);
	var_574_object->SetNPCName(var_582_int);
	int var_583_int;
	func_2571(var_583_int);
	var_574_object->SetNPCDescription(var_583_int);
	string var_584_string;
	func_2575(var_584_string);
	var_574_object->SetPhoto(var_584_string);
	string var_585_string;
	func_2577(var_585_string);
	var_574_object->SetPhoto2(var_585_string);
	int var_586_int;
	func_2756(var_586_int);
	var_574_object->SetPlayerName(var_586_int);
	bool var_575_bool;
	@IsOverrideActive(var_575_bool);
	if(var_575_bool != 0) {
		var_567_int = -2;
		return 8;
	}
	@DoDialog(var_574_object);
	bool var_588_bool; object var_589_object;
	object var_590_object;
	func_2436(var_590_object);
	var_590_object = var_589_object;
	func_2245(var_588_bool, var_589_object);
	object var_591_object; object var_592_object;
	var_568_object = var_591_object;
	var_574_object = var_592_object;
	TaskCall(12);
	func_1880(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object);
	TaskReturn();
	bool var_577_bool;
	var_574_object->IsDialogEnd(var_577_bool);
	
	for(;;) {
		var_621_bool = !var_577_bool; //@nz
		if(var_621_bool == 0) goto Label_1869;
		@sync();
		var_574_object->IsDialogEnd(var_577_bool);
	}
	
Label_1869:
	object var_622_object;
	var_568_object = var_622_object;
	func_2227();
	@StopDialog(var_574_object);
	var_574_object->GetReturnValue(-1);
	int var_576_int = var_567_int;
}
EMIT "Stack[-4] = 0";


void func_2056(object var_0_object)
{
	if(!var_0_object) { //@nz
		var_0_object = true;
		@PlayAnimation("all", "stand");
		@WaitForAnimEnd();
	}
}


void func_2571(int var_115_int)
{
	var_115_int = 515554;
}


void func_2573(int var_114_int)
{
	var_114_int = 502879;
}


void func_13(object var_0_object, int var_284_int, object var_285_object)
{
	var_0_object = var_285_object;
	bool var_295_bool; object var_296_object;
	var_285_object = var_296_object;
	func_2158(var_295_bool, var_296_object, 70.0);
	if(!var_295_bool) { //@nz
		var_284_int = -2;
		return 8;
	}
	object var_291_object;
	@CreateDialog(var_291_object);
	int var_299_int;
	func_2573(var_299_int);
	var_291_object->SetNPCName(var_299_int);
	int var_300_int;
	func_2571(var_300_int);
	var_291_object->SetNPCDescription(var_300_int);
	string var_301_string;
	func_2575(var_301_string);
	var_291_object->SetPhoto(var_301_string);
	string var_302_string;
	func_2577(var_302_string);
	var_291_object->SetPhoto2(var_302_string);
	int var_303_int;
	func_2756(var_303_int);
	var_291_object->SetPlayerName(var_303_int);
	bool var_292_bool;
	@IsOverrideActive(var_292_bool);
	if(var_292_bool != 0) {
		var_284_int = -2;
		return 8;
	}
	@DoDialog(var_291_object);
	bool var_305_bool; object var_306_object;
	object var_307_object;
	func_2436(var_307_object);
	var_307_object = var_306_object;
	func_2245(var_305_bool, var_306_object);
	object var_308_object; object var_309_object;
	var_285_object = var_308_object;
	var_291_object = var_309_object;
	TaskCall(2);
	func_94(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	bool var_294_bool;
	var_291_object->IsDialogEnd(var_294_bool);
	
	for(;;) {
		var_356_bool = !var_294_bool; //@nz
		if(var_356_bool == 0) goto Label_83;
		@sync();
		var_291_object->IsDialogEnd(var_294_bool);
	}
	
Label_83:
	object var_357_object;
	var_285_object = var_357_object;
	func_2227();
	@StopDialog(var_291_object);
	var_291_object->GetReturnValue(-1);
	int var_293_int = var_284_int;
}
EMIT "Stack[-4] = 0";


void func_2575(string var_116_string)
{
	var_116_string = "ui/NPC_Viktor.png";
}


void func_2577(string var_117_string)
{
	var_117_string = "ui/NPC_Viktor_b.png";
}


void func_2579(bool var_109_bool)
{
	var_109_bool = true;
}


// @pe
void func_2581(object var_72_object)
{
	object var_75_object;
	var_72_object = var_75_object;
	bool var_74_bool;
	func_2499(var_74_bool, var_75_object, 0.05);
}


// @pe
void func_2588(void)
{
	@SetVariable("ook3Viktor1", 1);
}


// @pe
void func_543(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_222_object, object var_223_object)
{
	var_0_object = var_223_object;
	var_1_object = var_222_object;
	var_3_string = false;
	if(1 != 0) {
		func_601(var_223_object, "Neutral");
		var_0_object->SetMessage(525531); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(525532, 44536, 26888); //@t
		var_0_object->AddReply(542207, 44538, 44535); //@t
		goto Label_571;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x223";
	}
Label_571:
	bool var_253_bool;
	func_2579(var_253_bool);
	if(var_253_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_600;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_600:
		return 0;

	}
	
}


// @pe
void func_2594(object var_49_object)
{
	@Trace("money2000 is given");
	object var_52_object;
	var_49_object = var_52_object;
	func_2480(var_52_object, 2000);
}


void func_2340(bool var_169_bool, object var_170_object)
{
	bool var_178_bool; int var_179_int; string var_180_string;
	int var_182_int;
	func_2556(var_182_int);
	string var_176_string = ("d" + var_182_int) + "m";
	int var_177_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_170_object->HasProperty((var_176_string + (var_177_int + 1)), var_178_bool);
			if(!var_178_bool) { //@nz
			} else {
				var_177_int += 1;
			}
		}
		if(!var_177_int) { //@nz
			var_169_bool = false;
			return 10;
		}
		var_179_int = 0;
		if(var_177_int > 1)
			@irand(var_179_int, var_177_int);
		var_170_object->GetProperty((var_176_string + (var_179_int + 1)), var_180_string);
		bool var_201_bool; string var_202_string;
		var_180_string = var_202_string;
		func_2414(var_201_bool, var_202_string);
		var_201_bool = var_169_bool;
		return 10;

	}
}


// @pe
void func_1317(object var_2_object, string var_391_string)
{
	bool var_392_bool;
	func_2579(var_392_bool);
	if(!var_392_bool) //@nz
		return 0;
	if(var_391_string == var_2_object)
		return 0;
	string var_395_string; bool var_396_bool;
	var_391_string = var_395_string;
	if(var_391_string == "")
		var_396_bool = false;
	else
		var_396_bool = true;
	func_2399(var_395_string, var_396_bool);
	var_2_object = var_391_string;
	
}


// @pe
void func_2604(void)
{
	@SetVariable("ook10Viktor1", 1);
}


void func_2093(bool var_93_bool, object var_94_object, string var_95_string)
{
	var_100_bool = IsFuncExist(var_94_object, "HasProperty", 2);
	if(!var_100_bool) { //@nz
		var_93_bool = false;
		return 2;
	}
	bool var_97_bool;
	var_94_object->HasProperty(var_95_string, var_97_bool);
	var_97_bool = var_93_bool;
}


// @pe
void func_2610(void)
{
	@SetVariable("k9q01", 5);
	func_2702();
	bool var_66_bool;
	func_2544(var_66_bool, "quest_k9_01", "init_mnogogrannik");
}


void func_2105(bool var_85_bool, object var_86_object, string var_87_string, float var_88_float, float var_89_float, float var_90_float)
{
	object var_94_object;
	var_86_object = var_94_object;
	string var_95_string;
	var_87_string = var_95_string;
	bool var_93_bool;
	func_2093(var_93_bool, var_94_object, var_95_string);
	if(!var_93_bool) //@nz
		var_85_bool = false;
	float var_92_float;
	var_86_object->GetProperty(var_87_string, var_92_float);
	float var_103_float; float var_105_float; float var_106_float;
	var_89_float = var_105_float;
	var_90_float = var_106_float;
	func_2452(var_103_float, (var_92_float + var_88_float), var_105_float, var_106_float);
	var_86_object->SetProperty(var_87_string, var_103_float);
	var_85_bool = true;
}


// @pe
void func_2624(void)
{
	@TriggerWorld("playsound", "givemoney");
}


// @pe
void func_2630(bool var_325_bool)
{
	int var_327_int;
	func_2463(var_327_int, "k3q03");
	if(var_327_int == 1000)
		var_325_bool = true;
	var_325_bool = false;
}


// @pe
void func_838(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_451_object, object var_452_object)
{
	var_0_object = var_452_object;
	var_1_object = var_451_object;
	var_3_string = false;
	if(1 != 0) {
		func_928(var_452_object, "Fear");
		var_0_object->SetMessage(526939); //@t
		var_0_object->ClearReplies(); //@t
		bool var_467_bool = true;
		bool var_468_bool = false;
		bool var_469_bool;
		func_2654(var_1_object);
		if(var_469_bool != 0) {
			bool var_475_bool;
			func_2666(var_1_object);
			if(var_475_bool != 0)
				var_468_bool = true;
		}
		if(var_468_bool != 1) {
			bool var_481_bool = false;
			bool var_482_bool;
			func_2678(var_1_object);
			if(var_482_bool != 0) {
				bool var_488_bool;
				func_2666(var_1_object);
				if(var_488_bool != 0)
					var_481_bool = true;
			}
			if(var_481_bool != 1)
				var_467_bool = false;
		}
		if(var_467_bool != 0)
			var_0_object->AddReply(526940, 28233, 28232); //@t
		var_0_object->AddReply(526945, -1, 28237); //@t
		goto Label_898;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x34a";
	}
Label_898:
	bool var_496_bool;
	func_2579(var_496_bool);
	if(var_496_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_927;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_927:
		return 0;

	}
	
}


void func_2383(string var_43_string)
{
	bool var_47_bool; float var_48_float; float var_49_float;
	@lshHasAnimation(var_47_bool, var_43_string);
	if(var_47_bool != 0) {
		@lshGetAnimTimes(var_43_string, var_48_float, var_49_float);
		@lshPlayAnimation(var_48_float, var_49_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_43_string);
	}
	
}


void func_2127(object var_56_object, string var_57_string, int var_58_int)
{
	int var_60_int;
	var_56_object->GetProperty(var_57_string, var_60_int);
	var_56_object->SetProperty(var_57_string, (var_60_int + var_58_int));
}


// @pe
void func_2642(bool var_333_bool)
{
	int var_335_int;
	func_2463(var_335_int, "ook3Viktor1");
	if(var_335_int == 0) {
		var_333_bool = true;
		return 0;
	}
	var_333_bool = false;
}


// @pe
void func_1621(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_532_object, object var_533_object)
{
	var_0_object = var_533_object;
	var_1_object = var_532_object;
	var_3_string = false;
	if(1 != 0) {
		func_1684(var_533_object, "Neutral");
		var_0_object->SetMessage(535231); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(535232, 36953, 36907); //@t
		var_0_object->AddReply(535233, -1, 36908); //@t
		var_0_object->AddReply(535280, -1, 36956); //@t
		goto Label_1654;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x659";
	}
Label_1654:
	bool var_557_bool;
	func_2579(var_557_bool);
	if(var_557_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1683;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1683:
		return 0;

	}
	
}


void func_2134(bool var_42_bool, cvector var_43_cvector)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector = var_43_cvector - var_47_cvector;
	var_50_float = GetByIndex(var_48_cvector, 0);
	var_51_float = GetByIndex(var_48_cvector, 2);
	bool var_49_bool;
	@Rotate(var_50_float, var_51_float, var_49_bool);
	var_49_bool = var_42_bool;
}


// @pe
void func_1880(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_591_object, object var_592_object)
{
	var_0_object = var_592_object;
	var_1_object = var_591_object;
	var_3_string = false;
	if(1 != 0) {
		func_1938(var_592_object, "Neutral");
		var_0_object->SetMessage(540545); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(540546, -1, 42555); //@t
		var_0_object->AddReply(540798, -1, 42847); //@t
		goto Label_1908;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x75c";
	}
Label_1908:
	bool var_613_bool;
	func_2579(var_613_bool);
	if(var_613_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1937;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1937:
		return 0;

	}
	
}


// @pe
void func_601(object var_2_object, string var_229_string)
{
	bool var_230_bool;
	func_2579(var_230_bool);
	if(!var_230_bool) //@nz
		return 0;
	if(var_229_string == var_2_object)
		return 0;
	string var_233_string; bool var_234_bool;
	var_229_string = var_233_string;
	if(var_229_string == "")
		var_234_bool = false;
	else
		var_234_bool = true;
	func_2399(var_233_string, var_234_bool);
	var_2_object = var_229_string;
	
}


// @pe
void func_94(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_308_object, object var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_string = false;
	if(1 != 0) {
		func_171(var_309_object, "Confusion");
		var_0_object->SetMessage(525599); //@t
		var_0_object->ClearReplies(); //@t
		bool var_324_bool = false;
		bool var_325_bool;
		func_2630(var_1_object);
		if(var_325_bool != 0) {
			bool var_333_bool;
			func_2642(var_1_object);
			if(var_333_bool != 0)
				var_324_bool = true;
		}
		if(var_324_bool != 0)
			var_0_object->AddReply(525600, 26948, 26947); //@t
		var_0_object->AddReply(525605, -1, 26952); //@t
		var_0_object->AddReply(542220, -1, 44551); //@t
		goto Label_141;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x62";
	}
Label_141:
	bool var_348_bool;
	func_2579(var_348_bool);
	if(var_348_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_170;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_170:
		return 0;

	}
	
}


void func_2399(string var_233_string, bool var_234_bool)
{
	bool var_240_bool; float var_241_float; float var_242_float;
	@lshHasAnimation(var_240_bool, var_233_string);
	if(var_240_bool != 0) {
		@lshGetAnimTimes(var_233_string, var_241_float, var_242_float);
		@lshPlayAnimation(var_241_float, var_242_float, var_234_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_233_string);
	}
	
}


// @pe
void func_2654(bool var_469_bool)
{
	int var_471_int;
	func_2463(var_471_int, "k10q01");
	if(var_471_int == 1)
		var_469_bool = true;
	var_469_bool = false;
}


void func_2144(bool var_38_bool, object var_39_object)
{
	cvector var_41_cvector;
	var_39_object->GetPosition(var_41_cvector);
	bool var_42_bool; cvector var_43_cvector;
	var_41_cvector = var_43_cvector;
	func_2134(var_42_bool, var_43_cvector);
	var_42_bool = var_38_bool;
}


void func_2153(bool var_34_bool)
{
	bool var_36_bool;
	@IsLoaded(var_36_bool);
	var_36_bool = var_34_bool;
}


// @pe
void func_2666(bool var_475_bool)
{
	int var_477_int;
	func_2463(var_477_int, "ook10Viktor1");
	if(var_477_int == 0) {
		var_475_bool = true;
		return 0;
	}
	var_475_bool = false;
}


void func_2158(bool var_66_bool, object var_67_object, float var_68_float)
{
	cvector var_79_cvector; bool var_86_bool;
	var_67_object->GetPosition(var_79_cvector);
	float var_78_float;
	var_67_object->GetEyesHeight(var_78_float);
	var_87_float = GetByIndex(var_79_cvector, 1);
	SetByIndex(var_79_cvector, 1) = (var_87_float + var_78_float);
	cvector var_80_cvector;
	@GetPosition(var_80_cvector);
	@GetEyesHeight(var_78_float);
	var_88_float = GetByIndex(var_80_cvector, 1);
	SetByIndex(var_80_cvector, 1) = (var_88_float + var_78_float);
	cvector var_81_cvector = var_79_cvector - var_80_cvector;
	var_89_float = GetByIndex(var_81_cvector, 1);
	SetByIndex(var_81_cvector, 1) = (float)0;
	var_91_float = sqrt(var_81_cvector | var_81_cvector);
	var_81_cvector /= var_91_float;
	cvector var_82_cvector = -var_81_cvector;
	cvector var_93_cvector;
	func_2442(var_93_cvector, (var_82_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_83_cvector = ((var_81_cvector * var_68_float) + (var_93_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_85_bool;
	@IsOverrideActive(var_85_bool);
	if(var_85_bool != 0)
		var_66_bool = false;
	@StopWorld();
	@CameraTransit((var_80_cvector + var_83_cvector), var_82_cvector, true);
	var_107_float = GetByIndex(var_83_cvector, 0);
	var_108_float = GetByIndex(var_83_cvector, 2);
	@Rotate(var_107_float, var_108_float);
	bool var_109_bool;
	func_2579(var_109_bool);
	if(var_109_bool != 0) {
	} else {
		@HasAnimationTrack(var_86_bool, "head");
		if(var_86_bool == 0) goto Label_2221;
		@LookAsyncCamera("head");
	}
Label_2221:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_66_bool = true;
	
}


void func_2414(bool var_161_bool, string var_162_string)
{
	bool var_164_bool;
	bool var_165_bool;
	func_2579(var_165_bool);
	if(var_165_bool != 0) {
		@lshHasSpeech(var_164_bool, var_162_string);
		if(var_164_bool != 0) {
			@lshPlaySpeech(var_162_string);
			var_161_bool = true;
		}
	}
	var_161_bool = false;
}


// @pe
void func_2678(bool var_482_bool)
{
	int var_484_int;
	func_2463(var_484_int, "k10q01");
	if(var_484_int == 2)
		var_482_bool = true;
	var_482_bool = false;
}


void func_2429(void)
{
	bool var_36_bool;
	func_2579(var_36_bool);
	if(var_36_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_2690(bool var_400_bool)
{
	int var_402_int;
	func_2463(var_402_int, "k9q01");
	if(var_402_int == 4)
		var_400_bool = true;
	var_400_bool = false;
}


void func_2436(object var_129_object)
{
	object var_131_object;
	@self(var_131_object);
	var_131_object = var_129_object;
}
EMIT "Stack[-1] = 0";


void func_2442(cvector var_93_cvector, cvector var_94_cvector)
{
	float var_97_float = sqrt(var_94_cvector | var_94_cvector);
	if(var_97_float < 0.000001)
		var_93_cvector = [0.0, 0.0, 0.0];
	var_93_cvector = var_94_cvector / var_97_float;
}


void func_2702(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 522, 1, 529814);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_2728(var_48_bool, var_49_object, 517);
}
EMIT "Stack[-1] = 0";


void func_1168(object var_0_object, int var_360_int, object var_361_object)
{
	var_0_object = var_361_object;
	bool var_371_bool; object var_372_object;
	var_361_object = var_372_object;
	func_2158(var_371_bool, var_372_object, 70.0);
	if(!var_371_bool) { //@nz
		var_360_int = -2;
		return 8;
	}
	object var_367_object;
	@CreateDialog(var_367_object);
	int var_375_int;
	func_2573(var_375_int);
	var_367_object->SetNPCName(var_375_int);
	int var_376_int;
	func_2571(var_376_int);
	var_367_object->SetNPCDescription(var_376_int);
	string var_377_string;
	func_2575(var_377_string);
	var_367_object->SetPhoto(var_377_string);
	string var_378_string;
	func_2577(var_378_string);
	var_367_object->SetPhoto2(var_378_string);
	int var_379_int;
	func_2756(var_379_int);
	var_367_object->SetPlayerName(var_379_int);
	bool var_368_bool;
	@IsOverrideActive(var_368_bool);
	if(var_368_bool != 0) {
		var_360_int = -2;
		return 8;
	}
	@DoDialog(var_367_object);
	bool var_381_bool; object var_382_object;
	object var_383_object;
	func_2436(var_383_object);
	var_383_object = var_382_object;
	func_2245(var_381_bool, var_382_object);
	object var_384_object; object var_385_object;
	var_361_object = var_384_object;
	var_367_object = var_385_object;
	TaskCall(8);
	func_1249(var_386_object, var_387_object, var_388_string, var_389_bool, var_384_object, var_385_object);
	TaskReturn();
	bool var_370_bool;
	var_367_object->IsDialogEnd(var_370_bool);
	
	for(;;) {
		var_423_bool = !var_370_bool; //@nz
		if(var_423_bool == 0) goto Label_1238;
		@sync();
		var_367_object->IsDialogEnd(var_370_bool);
	}
	
Label_1238:
	object var_424_object;
	var_361_object = var_424_object;
	func_2227();
	@StopDialog(var_367_object);
	var_367_object->GetReturnValue(-1);
	int var_369_int = var_360_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1938(object var_2_object, string var_598_string)
{
	bool var_599_bool;
	func_2579(var_599_bool);
	if(!var_599_bool) //@nz
		return 0;
	if(var_598_string == var_2_object)
		return 0;
	string var_602_string; bool var_603_bool;
	var_598_string = var_602_string;
	if(var_598_string == "")
		var_603_bool = false;
	else
		var_603_bool = true;
	func_2399(var_602_string, var_603_bool);
	var_2_object = var_598_string;
	
}


// @pe
void func_1684(object var_2_object, string var_539_string)
{
	bool var_540_bool;
	func_2579(var_540_bool);
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
	func_2399(var_543_string, var_544_bool);
	var_2_object = var_539_string;
	
}


// @pe
void func_2452(float var_103_float, float var_104_float, float var_105_float, float var_106_float)
{
	if(var_104_float < var_105_float) {
		var_105_float = var_103_float;
		return 0;
	}
	if(var_104_float > var_106_float) {
		var_106_float = var_103_float;
		return 0;
	}
	var_104_float = var_103_float;
}


void func_2715(object var_57_object)
{
	object var_59_object;
	@GetDiaryRoot(var_59_object);
	if(!var_59_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_57_object = false;
	}
	var_59_object = var_57_object;
}
EMIT "Stack[-1] = 0";


void func_2463(int var_327_int, string var_328_string)
{
	int var_330_int;
	@GetVariable(var_328_string, var_330_int);
	var_330_int = var_327_int;
}


// @pe
void func_928(object var_2_object, string var_458_string)
{
	bool var_459_bool;
	func_2579(var_459_bool);
	if(!var_459_bool) //@nz
		return 0;
	if(var_458_string == var_2_object)
		return 0;
	string var_462_string; bool var_463_bool;
	var_458_string = var_462_string;
	if(var_458_string == "")
		var_463_bool = false;
	else
		var_463_bool = true;
	func_2399(var_462_string, var_463_bool);
	var_2_object = var_458_string;
	
}


void func_2468(int var_65_int, int var_66_int)
{
	object var_68_object;
	@CreateIntVector(var_68_object);
	var_68_object->add(var_65_int);
	var_68_object->add(var_66_int);
	@SendWorldWndMessage(3, var_68_object);
}
EMIT "Stack[-1] = 0";


void func_2728(bool var_48_bool, object var_49_object, int var_50_int)
{
	object var_57_object;
	func_2715(var_57_object);
	object var_54_object;
	var_57_object = var_54_object;
	object var_55_object;
	var_54_object->Find(var_50_int, var_55_object);
	if(!var_55_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_50_int);
		var_48_bool = false;
	}
	var_55_object->AddChild(var_49_object);
	@SendWorldWndMessage(7);
	int var_56_int;
	var_49_object->GetCategory(var_56_int);
	@SetDiarySection(var_56_int);
	var_48_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_171(object var_2_object, string var_315_string)
{
	bool var_316_bool;
	func_2579(var_316_bool);
	if(!var_316_bool) //@nz
		return 0;
	if(var_315_string == var_2_object)
		return 0;
	string var_319_string; bool var_320_bool;
	var_315_string = var_319_string;
	if(var_315_string == "")
		var_320_bool = false;
	else
		var_320_bool = true;
	func_2399(var_319_string, var_320_bool);
	var_2_object = var_315_string;
	
}


void func_2480(object var_52_object, int var_53_int)
{
	int var_55_int;
	object var_56_object;
	var_52_object = var_56_object;
	int var_58_int;
	func_2127(var_56_object, "money", var_58_int);
	if(var_58_int > 0) {
		@GetInvItemByName(var_55_int, "Money");
		int var_65_int; int var_66_int;
		var_55_int = var_65_int;
		var_53_int = var_66_int;
		func_2468(var_65_int, var_66_int);
	}
}


void func_2227(void)
{
	bool var_274_bool;
	@CameraSwitchToNormal(true);
	bool var_276_bool;
	func_2579(var_276_bool);
	if(var_276_bool != 0) {
	} else {
		@HasAnimationTrack(var_274_bool, "head");
		if(var_274_bool == 0) goto Label_2244;
		@UnlookAsync("head");
	}
Label_2244:
	
}


// @pe
void func_2499(bool var_74_bool, object var_75_object, float var_76_float)
{
	if(!var_75_object) { //@nz
		var_74_bool = false;
		return 0;
	}
	if(var_76_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_76_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_81_float;
		var_76_float = var_81_float;
		func_2534(var_81_float);
		bool var_85_bool; object var_86_object; float var_88_float;
		var_75_object = var_86_object;
		var_76_float = var_88_float;
		func_2105(var_85_bool, var_86_object, "reputation", var_88_float, (float)0, (float)1);
		var_74_bool = true;
		return 0;

	}
	
	var_74_bool = false;
}


void func_2756(int var_118_int)
{
	int var_120_int;
	@GetVariable("branch", var_120_int);
	if(var_120_int == 0) {
		var_118_int = 1;
		return 2;
	EMIT "GOTO 0xad3";
	}
	if(var_120_int == 1) {
		var_118_int = 2;
		return 2;
	}
	var_118_int = 3;
}


void func_2245(bool var_127_bool, object var_128_object)
{
	int var_134_int; int var_135_int;
	@GetVariable("voice_common", var_134_int);
	if(var_134_int != 0) {
		bool var_138_bool; object var_139_object;
		var_128_object = var_139_object;
		func_2303(var_138_bool, var_139_object);
		if(!var_138_bool) { //@nz
			bool var_169_bool; object var_170_object;
			var_128_object = var_170_object;
			func_2340(var_169_bool, var_170_object);
			if(!var_169_bool) { //@nz
				var_127_bool = false;
				return 4;
			}
		}
		@irand(var_135_int, 2);
		if(var_135_int != 0)
			@SetVariable("voice_common", ((var_134_int + 1) % 3));
		else
			@SetVariable("voice_common", 0);
		bool var_214_bool; object var_215_object;
		var_128_object = var_215_object;
		func_2340(var_214_bool, var_215_object);
		if(!var_214_bool) { //@nz
			bool var_217_bool; object var_218_object;
			var_128_object = var_218_object;
			func_2303(var_217_bool, var_218_object);
			if(!var_217_bool) { //@nz
				var_127_bool = false;
				return 4;
			}
		}
		@SetVariable("voice_common", 1);
	}
	goto Label_2301;
	
Label_2301:
	var_127_bool = true;
	
}


void func_462(object var_0_object, int var_55_int, object var_56_object)
{
	var_0_object = var_56_object;
	bool var_66_bool; object var_67_object;
	var_56_object = var_67_object;
	func_2158(var_66_bool, var_67_object, 70.0);
	if(!var_66_bool) { //@nz
		var_55_int = -2;
		return 8;
	}
	object var_62_object;
	@CreateDialog(var_62_object);
	int var_114_int;
	func_2573(var_114_int);
	var_62_object->SetNPCName(var_114_int);
	int var_115_int;
	func_2571(var_115_int);
	var_62_object->SetNPCDescription(var_115_int);
	string var_116_string;
	func_2575(var_116_string);
	var_62_object->SetPhoto(var_116_string);
	string var_117_string;
	func_2577(var_117_string);
	var_62_object->SetPhoto2(var_117_string);
	int var_118_int;
	func_2756(var_118_int);
	var_62_object->SetPlayerName(var_118_int);
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0) {
		var_55_int = -2;
		return 8;
	}
	@DoDialog(var_62_object);
	bool var_127_bool; object var_128_object;
	object var_129_object;
	func_2436(var_129_object);
	var_129_object = var_128_object;
	func_2245(var_127_bool, var_128_object);
	object var_222_object; object var_223_object;
	var_56_object = var_222_object;
	var_62_object = var_223_object;
	TaskCall(4);
	func_543(var_224_object, var_225_object, var_226_string, var_227_bool, var_222_object, var_223_object);
	TaskReturn();
	bool var_65_bool;
	var_62_object->IsDialogEnd(var_65_bool);
	
	for(;;) {
		var_271_bool = !var_65_bool; //@nz
		if(var_271_bool == 0) goto Label_532;
		@sync();
		var_62_object->IsDialogEnd(var_65_bool);
	}
	
Label_532:
	object var_272_object;
	var_56_object = var_272_object;
	func_2227();
	@StopDialog(var_62_object);
	var_62_object->GetReturnValue(-1);
	int var_64_int = var_55_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_2773(object var_52_object)
{
	var_53_bool = GlobalVars[1];
	if(!var_53_bool) { //@nz
		int var_55_int; object var_56_object;
		var_52_object = var_56_object;
		TaskCall(3);
		func_462(var_57_object, var_55_int, var_56_object);
		TaskReturn();
		var_280_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_281_bool;
	func_2565(var_281_bool, 3);
	if(var_281_bool != 0) {
		int var_284_int; object var_285_object;
		var_52_object = var_285_object;
		TaskCall(1);
		func_13(var_286_object, var_284_int, var_285_object);
		TaskReturn();
		return 0;
	}
	bool var_358_bool;
	func_2565(var_358_bool, 9);
	if(var_358_bool != 0) {
		int var_360_int; object var_361_object;
		var_52_object = var_361_object;
		TaskCall(7);
		func_1168(var_362_object, var_360_int, var_361_object);
		TaskReturn();
		return 0;
	}
	bool var_425_bool;
	func_2565(var_425_bool, 10);
	if(var_425_bool != 0) {
		int var_427_int; object var_428_object;
		var_52_object = var_428_object;
		TaskCall(5);
		func_757(var_429_object, var_427_int, var_428_object);
		TaskReturn();
		return 0;
	}
	bool var_506_bool;
	func_2565(var_506_bool, 12);
	if(var_506_bool != 0) {
		int var_508_int; object var_509_object;
		var_52_object = var_509_object;
		TaskCall(9);
		func_1540(var_510_object, var_508_int, var_509_object);
		TaskReturn();
		return 0;
	}
	int var_567_int; object var_568_object;
	var_52_object = var_568_object;
	TaskCall(11);
	func_1799(var_569_object, var_567_int, var_568_object);
	TaskReturn();
}


// @pe
void func_1249(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_384_object, object var_385_object)
{
	var_0_object = var_385_object;
	var_3_string = false;
	if(1 != 0) {
		func_1317(var_385_object, "Neutral");
		var_0_object->SetMessage(528940); //@t
		var_0_object->ClearReplies(); //@t
		bool var_400_bool;
		func_2690(var_384_object);
		if(var_400_bool != 0)
			var_0_object->AddReply(528943, 30377, 30376); //@t
		var_0_object->AddReply(528941, -1, 30374); //@t
		var_0_object->AddReply(528942, -1, 30375); //@t
		goto Label_1287;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e5";
	}
Label_1287:
	bool var_415_bool;
	func_2579(var_415_bool);
	if(var_415_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2383(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_1316;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1316:
		return 0;

	}
	
}


void func_2017(object var_0_object, object var_1_object, object var_2_object)
{
	@GetPosition(var_1_object);
	@GetDirection(var_2_object);
	var_0_object = false;
	bool var_34_bool;
	func_2153(var_34_bool);
	if(!var_34_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
		func_2045(var_30_bool, var_31_cvector, var_32_cvector);
	}
	for(;;) {
		func_2383("Neutral");
		@lshWaitForAnimEnd();
	}
}
EMIT "@ Hold()";
EMIT "Pop(0)";
EMIT "Return(); Pop(0)";


void func_2534(float var_81_float)
{
	object var_83_object;
	@CreateFloatVector(var_83_object);
	var_83_object->add(var_81_float);
	@SendWorldWndMessage(16, var_83_object);
}
EMIT "Stack[-1] = 0";


void func_2544(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


void func_757(object var_0_object, int var_427_int, object var_428_object)
{
	var_0_object = var_428_object;
	bool var_438_bool; object var_439_object;
	var_428_object = var_439_object;
	func_2158(var_438_bool, var_439_object, 70.0);
	if(!var_438_bool) { //@nz
		var_427_int = -2;
		return 8;
	}
	object var_434_object;
	@CreateDialog(var_434_object);
	int var_442_int;
	func_2573(var_442_int);
	var_434_object->SetNPCName(var_442_int);
	int var_443_int;
	func_2571(var_443_int);
	var_434_object->SetNPCDescription(var_443_int);
	string var_444_string;
	func_2575(var_444_string);
	var_434_object->SetPhoto(var_444_string);
	string var_445_string;
	func_2577(var_445_string);
	var_434_object->SetPhoto2(var_445_string);
	int var_446_int;
	func_2756(var_446_int);
	var_434_object->SetPlayerName(var_446_int);
	bool var_435_bool;
	@IsOverrideActive(var_435_bool);
	if(var_435_bool != 0) {
		var_427_int = -2;
		return 8;
	}
	@DoDialog(var_434_object);
	bool var_448_bool; object var_449_object;
	object var_450_object;
	func_2436(var_450_object);
	var_450_object = var_449_object;
	func_2245(var_448_bool, var_449_object);
	object var_451_object; object var_452_object;
	var_428_object = var_451_object;
	var_434_object = var_452_object;
	TaskCall(6);
	func_838(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object);
	TaskReturn();
	bool var_437_bool;
	var_434_object->IsDialogEnd(var_437_bool);
	
	for(;;) {
		var_504_bool = !var_437_bool; //@nz
		if(var_504_bool == 0) goto Label_827;
		@sync();
		var_434_object->IsDialogEnd(var_437_bool);
	}
	
Label_827:
	object var_505_object;
	var_428_object = var_505_object;
	func_2227();
	@StopDialog(var_434_object);
	var_434_object->GetReturnValue(-1);
	int var_436_int = var_427_int;
}
EMIT "Stack[-4] = 0";


void func_2556(int var_182_int)
{
	float var_184_float;
	@GetGameTime(var_184_float);
	var_182_int = 1 + (var_184_float / 24);
}


void func_2045(object var_0_object, object var_1_object, object var_2_object)
{
	@SetPosition(var_1_object);
	@SetDirection(var_2_object);
	var_0_object = false;
	@LockAnimation("all", "stand", 0);
}


void func_2303(bool var_138_bool, object var_139_object)
{
	string var_145_string; bool var_147_bool; int var_148_int; string var_149_string;
	var_145_string = "c";
	int var_146_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_139_object->HasProperty((var_145_string + (var_146_int + 1)), var_147_bool);
			if(!var_147_bool) { //@nz
			} else {
				var_146_int += 1;
			}
		}
		if(!var_146_int) { //@nz
			var_138_bool = false;
			return 10;
		}
		var_148_int = 0;
		if(var_146_int > 1)
			@irand(var_148_int, var_146_int);
		var_139_object->GetProperty((var_145_string + (var_148_int + 1)), var_149_string);
		bool var_161_bool; string var_162_string;
		var_149_string = var_162_string;
		func_2414(var_161_bool, var_162_string);
		var_161_bool = var_138_bool;
		return 10;

	}
}


