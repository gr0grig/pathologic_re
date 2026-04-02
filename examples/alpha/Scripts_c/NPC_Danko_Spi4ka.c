// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnLoad(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		func_4019();
		bool var_21_bool;
		func_2933(var_21_bool);
		if(!var_21_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		for(;;) {
			func_2998("Neutral");
			@lshWaitForAnimEnd();
		}
	}
	EMIT "@ Hold()";
	EMIT "Pop(0)";
	EMIT "Return(); Pop(0)";

	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
		TaskCall(0);
		func_0();
		TaskReturn();
	}

	// @pe
	void OnUse(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_21_object;
		var_20_bool = var_21_object;
		func_4023(var_21_object);
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, object var_8_object, string var_9_string, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
		object var_22_object;
		var_20_bool = var_22_object;
		bool var_21_bool;
		func_2921(var_21_bool, var_22_object);
		@WaitForAnimEnd();
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, object var_7_object, object var_8_object, object var_9_object, string var_10_string, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3016();
			if(var_20_string == 413) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3363();
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(356); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(357, 417, 414); //@t
				var_0_object->AddReply(358, 418, 415); //@t
				var_0_object->AddReply(359, -1, 416); //@t
				return 0;
			}
			if(var_20_string == 418) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(361); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(362, 417, 419); //@t
				var_0_object->AddReply(363, 417, 420); //@t
				return 0;
			}
			if(var_20_string == 417) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(360); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(364, 425, 423); //@t
				var_0_object->AddReply(365, 425, 424); //@t
				return 0;
			}
			if(var_20_string == 425) {
				func_180(var_21_bool, "Neutral");
				var_0_object->SetMessage(366); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(367, -1, 426); //@t
				var_0_object->AddReply(368, -1, 427); //@t
				return 0;
			}
			var_3_string = true;
			bool var_85_bool;
			func_3115(var_85_bool);
			if(var_85_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc5";
	
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, int var_10_int, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3016();
			if(var_21_bool == 6801) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3117();
				object var_30_object = var_1_object;
				func_3135(var_0_object);
				object var_49_object; object var_50_object;
				var_49_object = var_1_object;
				var_50_object = var_0_object;
				func_3156();
				object var_53_object; object var_54_object;
				var_53_object = var_1_object;
				var_54_object = var_0_object;
				func_3273();
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_3267();
				object var_100_object = var_1_object;
				func_3369(var_0_object);
			}
			if(var_21_bool == 6802) {
				object var_128_object; object var_129_object;
				var_128_object = var_1_object;
				var_129_object = var_0_object;
				func_3117();
				object var_130_object; object var_131_object;
				var_130_object = var_1_object;
				var_131_object = var_0_object;
				func_3162();
			}
			if(var_21_bool == 6800) {
				object var_172_object; object var_173_object;
				var_172_object = var_1_object;
				var_173_object = var_0_object;
				func_3117();
				object var_174_object; object var_175_object;
				var_174_object = var_1_object;
				var_175_object = var_0_object;
				func_3162();
			}
			if(var_21_bool == 6449) {
				object var_178_object; object var_179_object;
				var_178_object = var_1_object;
				var_179_object = var_0_object;
				func_3123();
			}
			if(var_21_bool == 6450) {
				object var_184_object; object var_185_object;
				var_184_object = var_1_object;
				var_185_object = var_0_object;
				func_3123();
			}
			if(var_21_bool == 6451) {
				object var_188_object; object var_189_object;
				var_188_object = var_1_object;
				var_189_object = var_0_object;
				func_3123();
			}
			if(var_21_bool == 6452) {
				object var_192_object; object var_193_object;
				var_192_object = var_1_object;
				var_193_object = var_0_object;
				func_3123();
			}
			if(var_21_bool == 9365) {
				object var_196_object; object var_197_object;
				var_196_object = var_1_object;
				var_197_object = var_0_object;
				func_3123();
			}
			if(var_21_bool == 6456) {
				object var_200_object; object var_201_object;
				var_200_object = var_1_object;
				var_201_object = var_0_object;
				func_3129();
			}
			if(var_21_bool == 6457) {
				object var_206_object; object var_207_object;
				var_206_object = var_1_object;
				var_207_object = var_0_object;
				func_3129();
			}
			if(var_21_bool == 6463) {
				object var_210_object; object var_211_object;
				var_210_object = var_1_object;
				var_211_object = var_0_object;
				func_3129();
			}
			if(var_21_bool == 6458) {
				object var_214_object; object var_215_object;
				var_214_object = var_1_object;
				var_215_object = var_0_object;
				func_3129();
			}
			if(var_21_bool == 9372) {
				object var_218_object; object var_219_object;
				var_218_object = var_1_object;
				var_219_object = var_0_object;
				func_3255();
			}
			if(var_21_bool == 9373) {
				object var_224_object; object var_225_object;
				var_224_object = var_1_object;
				var_225_object = var_0_object;
				func_3255();
			}
			if(var_21_bool == 9381) {
				object var_228_object; object var_229_object;
				var_228_object = var_1_object;
				var_229_object = var_0_object;
				func_3261();
			}
			if(var_20_string == 6442) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5851); //@t
				var_0_object->ClearReplies(); //@t
				bool var_250_bool = false;
				bool var_251_bool;
				func_3403(var_1_object);
				if(var_251_bool != 0) {
					bool var_259_bool;
					func_3415(var_1_object);
					if(var_259_bool != 0)
						var_250_bool = true;
				}
				if(var_250_bool != 0)
					var_0_object->AddReply(5852, 6464, 6443); //@t
				bool var_268_bool = false;
				bool var_269_bool;
				func_3427(var_1_object);
				if(var_269_bool != 0) {
					bool var_275_bool;
					func_3391(var_1_object);
					if(var_275_bool != 0)
						var_268_bool = true;
				}
				if(var_268_bool != 0)
					var_0_object->AddReply(8356, 6444, 9179); //@t
				bool var_284_bool = true;
				bool var_285_bool = false;
				bool var_286_bool;
				func_3523(var_286_bool, var_1_object);
				if(var_286_bool != 0) {
					bool var_297_bool;
					func_3439(var_1_object);
					if(var_297_bool != 0)
						var_285_bool = true;
				}
				if(var_285_bool != 1) {
					bool var_303_bool = false;
					bool var_304_bool;
					func_3553(var_304_bool, var_1_object);
					if(var_304_bool != 0) {
						bool var_315_bool;
						func_3439(var_1_object);
						if(var_315_bool != 0)
							var_303_bool = true;
					}
					if(var_303_bool != 1)
						var_284_bool = false;
				}
				if(var_284_bool != 0)
					var_0_object->AddReply(8357, 6453, 9180); //@t
				bool var_320_bool = false;
				bool var_321_bool;
				func_3695(var_1_object);
				if(var_321_bool != 0) {
					bool var_327_bool;
					func_3499(var_1_object);
					if(var_327_bool != 0)
						var_320_bool = true;
				}
				if(var_320_bool != 0)
					var_0_object->AddReply(8365, 9205, 9188); //@t
				bool var_336_bool = false;
				bool var_337_bool;
				func_3683(var_1_object);
				if(var_337_bool != 0) {
					bool var_343_bool;
					func_3511(var_1_object);
					if(var_343_bool != 0)
						var_336_bool = true;
				}
				if(var_336_bool != 0)
					var_0_object->AddReply(8379, 9378, 9202); //@t
				var_0_object->AddReply(8520, -1, 9362); //@t
				return 0;
			}
			if(var_20_string == 9378) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8535); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8536, 9206, 9379); //@t
				return 0;
			}
			if(var_20_string == 9206) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8383); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8538, -1, 9381); //@t
				return 0;
			}
			if(var_20_string == 9205) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8382); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8524, 9367, 9366); //@t
				return 0;
			}
			if(var_20_string == 9367) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8526, 9369, 9368); //@t
				bool var_383_bool;
				func_3683(var_1_object);
				if(!var_383_bool) //@nz
					var_0_object->AddReply(8532, 9375, 9374); //@t
				return 0;
			}
			if(var_20_string == 9375) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8533); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8534, 9369, 9376); //@t
				return 0;
			}
			if(var_20_string == 9369) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8527); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8528, 9371, 9370); //@t
				return 0;
			}
			if(var_20_string == 9371) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8529); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8530, -1, 9372); //@t
				var_0_object->AddReply(8531, -1, 9373); //@t
				return 0;
			}
			if(var_20_string == 6453) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5862); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5863, 6455, 6454); //@t
				var_0_object->AddReply(5868, 6460, 6459); //@t
				var_0_object->AddReply(5867, -1, 6458); //@t
				return 0;
			}
			if(var_20_string == 6460) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5869); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5870, 6455, 6461); //@t
				var_0_object->AddReply(5871, -1, 6463); //@t
				return 0;
			}
			if(var_20_string == 6455) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5864); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5865, -1, 6456); //@t
				var_0_object->AddReply(5866, -1, 6457); //@t
				return 0;
			}
			if(var_20_string == 6444) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5853); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5854, 6446, 6445); //@t
				var_0_object->AddReply(5861, -1, 6452); //@t
				bool var_456_bool;
				func_3451(var_1_object);
				if(!var_456_bool) //@nz
					var_0_object->AddReply(8521, 9364, 9363); //@t
				return 0;
			}
			if(var_20_string == 9364) {
				object var_468_object; object var_469_object;
				var_468_object = var_1_object;
				var_469_object = var_0_object;
				func_3211();
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(8522); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(8523, -1, 9365); //@t
				return 0;
			}
			if(var_20_string == 6446) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5855); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5856, 6448, 6447); //@t
				var_0_object->AddReply(5860, -1, 6451); //@t
				return 0;
			}
			if(var_20_string == 6448) {
				object var_489_object; object var_490_object;
				var_489_object = var_1_object;
				var_490_object = var_0_object;
				func_3385();
				object var_493_object; object var_494_object;
				var_493_object = var_1_object;
				var_494_object = var_0_object;
				func_3235();
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5857); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(5858, -1, 6449); //@t
				var_0_object->AddReply(5859, -1, 6450); //@t
				return 0;
			}
			if(var_20_string == 6464) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(5872); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6141, 6786, 6785); //@t
				var_0_object->AddReply(6140, 6786, 6784); //@t
				return 0;
			}
			if(var_20_string == 6786) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(6142); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6143, 6790, 6788); //@t
				var_0_object->AddReply(6144, 6790, 6789); //@t
				return 0;
			}
			if(var_20_string == 6790) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(6145); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6146, 6794, 6792); //@t
				var_0_object->AddReply(6147, 6794, 6793); //@t
				return 0;
			}
			if(var_20_string == 6794) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(6148); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6149, 6797, 6796); //@t
				return 0;
			}
			if(var_20_string == 6797) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(6150); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6151, 6799, 6798); //@t
				var_0_object->AddReply(6153, -1, 6800); //@t
				return 0;
			}
			if(var_20_string == 6799) {
				func_546(var_21_bool, "Neutral");
				var_0_object->SetMessage(6152); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6154, -1, 6801); //@t
				var_0_object->AddReply(6155, -1, 6802); //@t
				return 0;
			}
			var_3_string = true;
			bool var_562_bool;
			func_3115(var_562_bool);
			if(var_562_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x233";
	
	}

}


task task_6
{
}


task task_7
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, int var_15_int, int var_16_int, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		if(1 != 0) {
			func_3016();
			if(var_21_bool == 7358) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3217();
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_3241();
			}
			if(var_21_bool == 7363) {
				object var_67_object; object var_68_object;
				var_67_object = var_1_object;
				var_68_object = var_0_object;
				func_3217();
				object var_69_object; object var_70_object;
				var_69_object = var_1_object;
				var_70_object = var_0_object;
				func_3241();
			}
			if(var_21_bool == 7382) {
				object var_73_object; object var_74_object;
				var_73_object = var_1_object;
				var_74_object = var_0_object;
				func_3217();
			}
			if(var_21_bool == 7394) {
				object var_77_object; object var_78_object;
				var_77_object = var_1_object;
				var_78_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 7395) {
				object var_83_object; object var_84_object;
				var_83_object = var_1_object;
				var_84_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 7396) {
				object var_87_object; object var_88_object;
				var_87_object = var_1_object;
				var_88_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 7397) {
				object var_91_object; object var_92_object;
				var_91_object = var_1_object;
				var_92_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 7398) {
				object var_95_object; object var_96_object;
				var_95_object = var_1_object;
				var_96_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 7399) {
				object var_99_object; object var_100_object;
				var_99_object = var_1_object;
				var_100_object = var_0_object;
				func_3223();
			}
			if(var_21_bool == 15755) {
				object var_103_object; object var_104_object;
				var_103_object = var_1_object;
				var_104_object = var_0_object;
				func_3357();
			}
			if(var_20_string == 7402) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6715); //@t
				var_0_object->ClearReplies(); //@t
				bool var_125_bool = false;
				bool var_126_bool;
				func_3463(var_1_object);
				if(var_126_bool != 0) {
					bool var_134_bool;
					func_3487(var_1_object);
					if(var_134_bool != 0)
						var_125_bool = true;
				}
				if(var_125_bool != 0)
					var_0_object->AddReply(7429, 7355, 8200); //@t
				bool var_143_bool;
				func_3475(var_1_object);
				if(var_143_bool != 0)
					var_0_object->AddReply(6716, 7385, 7403); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_3659(var_1_object);
				if(var_153_bool != 0) {
					bool var_159_bool;
					func_3671(var_1_object);
					if(var_159_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_object->AddReply(14516, 15756, 15755); //@t
				var_0_object->AddReply(7534, -1, 8316); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=0";
			EMIT "Call 0x5e4";
			EMIT "Pop(1)";
			EMIT "Push((int) 9517)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
			EMIT "Pop(0)";
			EMIT "Push((int) 9518)";
			EMIT "Push((int) 10462)";
			EMIT "Push((int) 10461)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_20_string == 10462) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(9519); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9520, 10464, 10463); //@t
				var_0_object->AddReply(9530, 10466, 10474); //@t
				return 0;
			}
			if(var_20_string == 10464) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(9521); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9522, 10466, 10465); //@t
				var_0_object->AddReply(9529, 10466, 10472); //@t
				return 0;
			}
			if(var_20_string == 10466) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(9523); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9524, 10468, 10467); //@t
				var_0_object->AddReply(9528, -1, 10471); //@t
				return 0;
			}
			if(var_20_string == 10468) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(9525); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(9526, -1, 10469); //@t
				var_0_object->AddReply(9527, -1, 10470); //@t
				return 0;
			}
			if(var_20_string == 15756) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(14517); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(14518, -1, 15757); //@t
				return 0;
			}
			if(var_20_string == 7385) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6699); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6700, 7387, 7386); //@t
				var_0_object->AddReply(6714, 7387, 7400); //@t
				var_0_object->AddReply(6713, -1, 7399); //@t
				return 0;
			}
			if(var_20_string == 7387) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6701); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6702, 7389, 7388); //@t
				var_0_object->AddReply(6712, -1, 7398); //@t
				return 0;
			}
			if(var_20_string == 7389) {
				object var_243_object; object var_244_object;
				var_243_object = var_1_object;
				var_244_object = var_0_object;
				func_3229();
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6703); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6704, 7391, 7390); //@t
				var_0_object->AddReply(6711, -1, 7397); //@t
				return 0;
			}
			if(var_20_string == 7391) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6705); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6706, 7393, 7392); //@t
				var_0_object->AddReply(6710, -1, 7396); //@t
				return 0;
			}
			if(var_20_string == 7393) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6707); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6708, -1, 7394); //@t
				var_0_object->AddReply(6709, -1, 7395); //@t
				return 0;
			}
			if(var_20_string == 7355) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6674); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6675, 7357, 7356); //@t
				var_0_object->AddReply(6689, 7373, 7372); //@t
				return 0;
			}
			if(var_20_string == 7373) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6690); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6691, 7357, 7374); //@t
				var_0_object->AddReply(6692, 7377, 7376); //@t
				return 0;
			}
			if(var_20_string == 7377) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6693); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6694, 7362, 7378); //@t
				var_0_object->AddReply(6695, 7381, 7380); //@t
				return 0;
			}
			if(var_20_string == 7381) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6696); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6697, -1, 7382); //@t
				var_0_object->AddReply(6698, 7362, 7383); //@t
				return 0;
			}
			if(var_20_string == 7357) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6676); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6677, -1, 7358); //@t
				var_0_object->AddReply(6678, 7360, 7359); //@t
				return 0;
			}
			if(var_20_string == 7360) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6679); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6680, 7362, 7361); //@t
				var_0_object->AddReply(6683, 7365, 7364); //@t
				var_0_object->AddReply(6686, 7369, 7368); //@t
				return 0;
			}
			if(var_20_string == 7369) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6687); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6688, 7362, 7370); //@t
				return 0;
			}
			if(var_20_string == 7365) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6684); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6685, 7362, 7366); //@t
				return 0;
			}
			if(var_20_string == 7362) {
				func_1508(var_21_bool, "Neutral");
				var_0_object->SetMessage(6681); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(6682, -1, 7363); //@t
				return 0;
			}
			var_3_string = true;
			bool var_359_bool;
			func_3115(var_359_bool);
			if(var_359_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5f5";
	
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, object var_7_object, string var_8_string, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, string var_13_string, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool, int var_20_int, int var_21_int)
	{
		if(1 != 0) {
			func_3016();
			if(var_21_int == 13271) {
				object var_26_object; object var_27_object;
				var_26_object = var_1_object;
				var_27_object = var_0_object;
				func_3292();
				object var_30_object; object var_31_object;
				var_30_object = var_1_object;
				var_31_object = var_0_object;
				func_3298();
			}
			if(var_21_int == 13288) {
				object var_84_object; object var_85_object;
				var_84_object = var_1_object;
				var_85_object = var_0_object;
				func_3292();
			}
			if(var_21_int == 13290) {
				object var_88_object; object var_89_object;
				var_88_object = var_1_object;
				var_89_object = var_0_object;
				func_3298();
			}
			if(var_21_int == 13714) {
				object var_92_object; object var_93_object;
				var_92_object = var_1_object;
				var_93_object = var_0_object;
				func_3319();
				object var_96_object; object var_97_object;
				var_96_object = var_1_object;
				var_97_object = var_0_object;
				func_3325();
			}
			if(var_21_int == 13717) {
				object var_112_object; object var_113_object;
				var_112_object = var_1_object;
				var_113_object = var_0_object;
				func_3335();
				object var_126_object; object var_127_object;
				var_126_object = var_1_object;
				var_127_object = var_0_object;
				func_3345();
			}
			if(var_21_int == 13273) {
				object var_132_object; object var_133_object;
				var_132_object = var_1_object;
				var_133_object = var_0_object;
				func_3351();
			}
			if(var_20_int == 13258) {
				bool var_138_bool = true;
				bool var_139_bool = false;
				bool var_140_bool;
				func_3533(var_140_bool, var_1_object);
				if(var_140_bool != 0) {
					bool var_155_bool;
					func_3563(var_1_object);
					if(var_155_bool != 0)
						var_139_bool = true;
				}
				if(var_139_bool != 1) {
					bool var_163_bool = false;
					bool var_164_bool;
					func_3543(var_164_bool, var_1_object);
					if(var_164_bool != 0) {
						bool var_175_bool;
						func_3563(var_1_object);
						if(var_175_bool != 0)
							var_163_bool = true;
					}
					if(var_163_bool != 1)
						var_138_bool = false;
				}
				if(var_138_bool != 0) {
					func_2418(var_21_int, "Neutral");
					var_0_object->SetMessage(12040); //@t
					var_0_object->ClearReplies(); //@t
					var_0_object->AddReply(12041, 13262, 13259); //@t
					var_0_object->AddReply(12042, 13261, 13260); //@t
					return 0;
				}
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12052); //@t
				var_0_object->ClearReplies(); //@t
				bool var_201_bool = true;
				bool var_202_bool = false;
				bool var_203_bool;
				func_3533(var_203_bool, var_1_object);
				if(var_203_bool != 0) {
					bool var_205_bool;
					func_3575(var_1_object);
					if(var_205_bool != 0)
						var_202_bool = true;
				}
				if(var_202_bool != 1) {
					bool var_211_bool = false;
					bool var_212_bool;
					func_3543(var_212_bool, var_1_object);
					if(var_212_bool != 0) {
						bool var_214_bool;
						func_3575(var_1_object);
						if(var_214_bool != 0)
							var_211_bool = true;
					}
					if(var_211_bool != 1)
						var_201_bool = false;
				}
				if(var_201_bool != 0)
					var_0_object->AddReply(12066, 13289, 13287); //@t
				bool var_219_bool = false;
				bool var_220_bool;
				func_3599(var_1_object);
				if(var_220_bool != 0) {
					bool var_226_bool;
					func_3611(var_1_object);
					if(var_226_bool != 0)
						var_219_bool = true;
				}
				if(var_219_bool != 0)
					var_0_object->AddReply(12543, 13713, 13712); //@t
				bool var_235_bool = false;
				bool var_236_bool = false;
				bool var_237_bool;
				func_3587(var_1_object);
				if(var_237_bool != 0) {
					bool var_243_bool;
					func_3623(var_1_object);
					if(var_243_bool != 0)
						var_236_bool = true;
				}
				if(var_236_bool != 0) {
					bool var_249_bool;
					func_3599(var_1_object);
					if(!var_249_bool) //@nz
						var_235_bool = true;
				}
				if(var_235_bool != 0)
					var_0_object->AddReply(12546, 13716, 13715); //@t
				bool var_255_bool = false;
				bool var_256_bool;
				func_3647(var_1_object);
				if(var_256_bool != 0) {
					bool var_262_bool;
					func_3635(var_1_object);
					if(var_262_bool != 0)
						var_255_bool = true;
				}
				if(var_255_bool != 0)
					var_0_object->AddReply(12053, 13274, 13273); //@t
				var_0_object->AddReply(12060, -1, 13280); //@t
				return 0;
			}
			if(var_20_int == 13274) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12054); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12055, 13276, 13275); //@t
				return 0;
			}
			if(var_20_int == 13276) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12056); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12057, 13278, 13277); //@t
				var_0_object->AddReply(12061, 13282, 13281); //@t
				return 0;
			}
			if(var_20_int == 13282) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12062); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12063, 13284, 13283); //@t
				return 0;
			}
			if(var_20_int == 13284) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12064); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12065, 13278, 13285); //@t
				return 0;
			}
			if(var_20_int == 13278) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12058); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12059, -1, 13279); //@t
				return 0;
			}
			if(var_20_int == 13716) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12547); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12548, -1, 13717); //@t
				return 0;
			}
			if(var_20_int == 13713) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12544); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12545, -1, 13714); //@t
				return 0;
			}
			if(var_20_int == 13289) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12068); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12069, -1, 13290); //@t
				return 0;
			}
			if(var_20_int == 13261) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12043); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12048, 13268, 13267); //@t
				return 0;
			}
			if(var_20_int == 13268) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12049); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12050, 13264, 13269); //@t
				return 0;
			}
			if(var_20_int == 13262) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12044); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12045, 13264, 13263); //@t
				var_0_object->AddReply(12047, 13261, 13265); //@t
				return 0;
			}
			if(var_20_int == 13264) {
				func_2418(var_21_int, "Neutral");
				var_0_object->SetMessage(12046); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(12051, -1, 13271); //@t
				var_0_object->AddReply(12067, -1, 13288); //@t
				return 0;
			}
			var_3_string = true;
			bool var_367_bool;
			func_3115(var_367_bool);
			if(var_367_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x983";
	
	}

}


void func_0(void)
{
	@Hold();
}


void func_3840(object var_57_object)
{
	object var_60_object; object var_61_object;
	@GetMainOutdoorScene(var_60_object);
	if(var_60_object == null) {
		@Trace("Can't find main outdoor scene");
		var_61_object = null;
		var_61_object = var_57_object;
	}
	var_60_object->GetMap(var_61_object);
	var_61_object = var_57_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3074(float var_68_float)
{
	float var_70_float;
	@GetGameTime(var_70_float);
	var_70_float = var_68_float;
}


// @pe
void func_3587(bool var_237_bool)
{
	int var_239_int;
	func_3033(var_239_int, "d6q03");
	if(var_239_int == 2)
		var_237_bool = true;
	var_237_bool = false;
}


void func_3079(int var_136_int)
{
	float var_138_float;
	@GetGameTime(var_138_float);
	var_136_int = 1 + (var_138_float / 24);
}


// @pe
void func_3335(void)
{
	func_3987();
	bool var_123_bool;
	func_3062(var_123_bool, "quest_d6_03", "failed");
}


// @pe
void func_3599(bool var_220_bool)
{
	int var_222_int;
	func_3033(var_222_int, "d6q03AlbinosKilled");
	if(var_222_int == 1)
		var_220_bool = true;
	var_220_bool = false;
}


void func_3088(int var_145_int)
{
	float var_147_float;
	@GetGameTime(var_147_float);
	int var_148_int;
	var_147_float = var_148_int;
	var_145_int = var_148_int % 24;
}


// @pe
void func_3345(void)
{
	@SetVariable("ood6Spi4ka3", 1);
}


void func_3857(object var_102_object, string var_103_string, float var_104_float)
{
	object var_112_object;
	@GetMainOutdoorScene(var_112_object);
	if(var_112_object == null) {
		@Trace("Can't find main outdoor scene");
		return 8;
	}
	cvector var_110_cvector;
	cvector var_111_cvector;
	bool var_113_bool;
	var_112_object->GetLocator(var_103_string, var_113_bool, var_110_cvector, var_111_cvector);
	if(!var_113_bool) //@nz
		@Trace(("Warning: outdoor scene locator " + var_103_string) + " doesnt exist");
	var_112_object->GetMap(var_102_object);
	if(var_102_object == null) {
		@Trace("Can't find map");
		return 8;
	}
	var_123_float = GetByIndex(var_110_cvector, 0);
	var_124_float = GetByIndex(var_110_cvector, 2);
	var_102_object->SetMapParams(var_123_float, var_124_float, var_104_float);
}
EMIT "Stack[-2] = 0";


// @pe
void func_3351(void)
{
	@SetVariable("ood6Spi4ka4", 1);
}


// @pe
void func_3096(bool var_134_bool, int var_135_int)
{
	int var_136_int;
	func_3079(var_136_int);
	var_134_bool = var_136_int == var_135_int;
}


// @pe
void func_3611(bool var_226_bool)
{
	int var_228_int;
	func_3033(var_228_int, "ood6Spi4ka2");
	if(var_228_int == 0) {
		var_226_bool = true;
		return 0;
	}
	var_226_bool = false;
}


// @pe
void func_3357(void)
{
	@SetVariable("ood2Spi4ka3", 1);
}


void func_3102(bool var_532_bool)
{
	func_2998("No");
	bool var_534_bool;
	@lshWaitForAnimEnd(var_534_bool);
	var_534_bool = var_532_bool;
}


// @pe
void func_546(object var_2_object, string var_234_string)
{
	bool var_235_bool;
	func_3115(var_235_bool);
	if(!var_235_bool) //@nz
		return 0;
	if(var_234_string == var_2_object)
		return 0;
	string var_238_string;
	func_2998(var_238_string);
	var_2_object = var_238_string;
}


// @pe
void func_3363(void)
{
	@SetVariable("KnowSpi4ka", 1);
}


void func_3111(int var_76_int)
{
	var_76_int = 2877;
}


// @pe
void func_3623(bool var_243_bool)
{
	int var_245_int;
	func_3033(var_245_int, "ood6Spi4ka3");
	if(var_245_int == 0) {
		var_243_bool = true;
		return 0;
	}
	var_243_bool = false;
}


void func_3113(string var_77_string)
{
	var_77_string = "ui/NPC_Spi4ka.png";
}


// @pe
void func_3369(object var_101_object)
{
	object var_105_object;
	func_3840(var_105_object);
	object var_102_object;
	var_105_object = var_102_object;
	func_3857(var_102_object, "pt_map_powderhouse", (float)2);
	object var_125_object;
	func_3840(var_125_object);
	var_101_object->ShowMap(var_125_object);
}


void func_3115(bool var_23_bool)
{
	var_23_bool = true;
}


// @pe
void func_3117(void)
{
	@SetVariable("ood1Spi4ka1", 1);
}


void func_49(object var_0_object, int var_24_int, object var_25_object)
{
	var_0_object = var_25_object;
	bool var_35_bool; object var_36_object;
	var_25_object = var_36_object;
	func_2938(var_35_bool, var_36_object);
	if(!var_35_bool) { //@nz
		var_24_int = -2;
		return 8;
	}
	object var_31_object;
	@CreateDialog(var_31_object);
	int var_76_int;
	func_3111(var_76_int);
	var_31_object->SetNPCName(var_76_int);
	string var_77_string;
	func_3113(var_77_string);
	var_31_object->SetPhoto(var_77_string);
	int var_78_int;
	func_3890(var_78_int);
	var_31_object->SetPlayerName(var_78_int);
	bool var_32_bool;
	@IsOverrideActive(var_32_bool);
	if(var_32_bool != 0) {
		var_24_int = -2;
		return 8;
	}
	@DoDialog(var_31_object);
	object var_87_object; object var_88_object;
	var_25_object = var_87_object;
	var_31_object = var_88_object;
	TaskCall(3);
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object);
	TaskReturn();
	bool var_34_bool;
	var_31_object->IsDialogEnd(var_34_bool);
	
	for(;;) {
		var_131_bool = !var_34_bool; //@nz
		if(var_131_bool == 0) goto Label_101;
		@sync();
		var_31_object->IsDialogEnd(var_34_bool);
	}
	
Label_101:
	object var_132_object;
	var_25_object = var_132_object;
	func_2994();
	@StopDialog(var_31_object);
	var_31_object->GetReturnValue(-1);
	int var_33_int = var_24_int;
}
EMIT "Stack[-4] = 0";


void func_1329(object var_0_object, int var_290_int, object var_291_object)
{
	var_0_object = var_291_object;
	bool var_301_bool; object var_302_object;
	var_291_object = var_302_object;
	func_2938(var_301_bool, var_302_object);
	if(!var_301_bool) { //@nz
		var_290_int = -2;
		return 8;
	}
	object var_297_object;
	@CreateDialog(var_297_object);
	int var_304_int;
	func_3111(var_304_int);
	var_297_object->SetNPCName(var_304_int);
	string var_305_string;
	func_3113(var_305_string);
	var_297_object->SetPhoto(var_305_string);
	int var_306_int;
	func_3890(var_306_int);
	var_297_object->SetPlayerName(var_306_int);
	bool var_298_bool;
	@IsOverrideActive(var_298_bool);
	if(var_298_bool != 0) {
		var_290_int = -2;
		return 8;
	}
	@DoDialog(var_297_object);
	object var_308_object; object var_309_object;
	var_291_object = var_308_object;
	var_297_object = var_309_object;
	TaskCall(7);
	func_1392(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object);
	TaskReturn();
	bool var_300_bool;
	var_297_object->IsDialogEnd(var_300_bool);
	
	for(;;) {
		var_373_bool = !var_300_bool; //@nz
		if(var_373_bool == 0) goto Label_1381;
		@sync();
		var_297_object->IsDialogEnd(var_300_bool);
	}
	
Label_1381:
	object var_374_object;
	var_291_object = var_374_object;
	func_2994();
	@StopDialog(var_297_object);
	var_297_object->GetReturnValue(-1);
	int var_299_int = var_290_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3123(void)
{
	@SetVariable("ood1Spi4ka2", 1);
}


// @pe
void func_3635(bool var_262_bool)
{
	int var_264_int;
	func_3033(var_264_int, "d6q01");
	if(var_264_int == 4)
		var_262_bool = true;
	var_262_bool = false;
}


void func_3890(int var_78_int)
{
	int var_80_int;
	@GetVariable("player", var_80_int);
	if(var_80_int == 0) {
		var_78_int = 200001;
		return 2;
	EMIT "GOTO 0xf41";
	}
	if(var_80_int == 1) {
		var_78_int = 200002;
		return 2;
	}
	var_78_int = 200003;
}


// @pe
void func_3129(void)
{
	@SetVariable("ood1Spi4ka3", 1);
}


// @pe
void func_3385(void)
{
	@SetVariable("KnowTermitnik", 1);
}


void func_317(object var_0_object, int var_142_int, object var_143_object)
{
	var_0_object = var_143_object;
	bool var_153_bool; object var_154_object;
	var_143_object = var_154_object;
	func_2938(var_153_bool, var_154_object);
	if(!var_153_bool) { //@nz
		var_142_int = -2;
		return 8;
	}
	object var_149_object;
	@CreateDialog(var_149_object);
	int var_156_int;
	func_3111(var_156_int);
	var_149_object->SetNPCName(var_156_int);
	string var_157_string;
	func_3113(var_157_string);
	var_149_object->SetPhoto(var_157_string);
	int var_158_int;
	func_3890(var_158_int);
	var_149_object->SetPlayerName(var_158_int);
	bool var_150_bool;
	@IsOverrideActive(var_150_bool);
	if(var_150_bool != 0) {
		var_142_int = -2;
		return 8;
	}
	@DoDialog(var_149_object);
	object var_160_object; object var_161_object;
	var_143_object = var_160_object;
	var_149_object = var_161_object;
	TaskCall(5);
	func_380(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object);
	TaskReturn();
	bool var_152_bool;
	var_149_object->IsDialogEnd(var_152_bool);
	
	for(;;) {
		var_286_bool = !var_152_bool; //@nz
		if(var_286_bool == 0) goto Label_369;
		@sync();
		var_149_object->IsDialogEnd(var_152_bool);
	}
	
Label_369:
	object var_287_object;
	var_143_object = var_287_object;
	func_2994();
	@StopDialog(var_149_object);
	var_149_object->GetReturnValue(-1);
	int var_151_int = var_142_int;
}
EMIT "Stack[-4] = 0";


void func_3135(object var_30_object)
{
	@Trace("lockpick1time is given");
	object var_33_object;
	@CreateInvItem(var_33_object);
	var_33_object->SetItemName("lockpick");
	var_33_object->SetProperty("uses", 1);
	object var_38_object; object var_39_object;
	var_30_object = var_38_object;
	var_33_object = var_39_object;
	func_3049(var_38_object, var_39_object, 1);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3647(bool var_256_bool)
{
	int var_258_int;
	func_3033(var_258_int, "ood6Spi4ka4");
	if(var_258_int == 0) {
		var_256_bool = true;
		return 0;
	}
	var_256_bool = false;
}


// @pe
void func_3391(bool var_275_bool)
{
	int var_277_int;
	func_3033(var_277_int, "d1q01FirstGeorgVisit");
	if(var_277_int == 1)
		var_275_bool = true;
	var_275_bool = false;
}


void func_3907(void)
{
	@Trace("Adding diary entry");
	object var_144_object;
	@CreateDiaryEntry(var_144_object, 48, 2, 12130);
	bool var_149_bool; object var_150_object;
	var_144_object = var_150_object;
	func_3794(var_149_bool, var_150_object, 43);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3575(bool var_205_bool)
{
	int var_207_int;
	func_3033(var_207_int, "d6q03");
	if(var_207_int == 0) {
		var_205_bool = true;
		return 0;
	}
	var_205_bool = false;
}


// @pe
void func_3659(bool var_153_bool)
{
	int var_155_int;
	func_3033(var_155_int, "d2q01");
	if(var_155_int >= 5)
		var_153_bool = true;
	var_153_bool = false;
}


// @pe
void func_3403(bool var_251_bool)
{
	int var_253_int;
	func_3033(var_253_int, "d1q04");
	if(var_253_int == 2)
		var_251_bool = true;
	var_251_bool = false;
}


void func_3923(void)
{
	@Trace("Adding diary entry");
	object var_72_object;
	@CreateDiaryEntry(var_72_object, 46, 2, 12128);
	bool var_77_bool; object var_78_object;
	var_72_object = var_78_object;
	func_3794(var_77_bool, var_78_object, 43);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3156(void)
{
	@TriggerWorld("playsound", "giveitem");
}


// @pe
void func_3671(bool var_159_bool)
{
	int var_161_int;
	func_3033(var_161_int, "ood2Spi4ka3");
	if(var_161_int == 0) {
		var_159_bool = true;
		return 0;
	}
	var_159_bool = false;
}


// @pe
void func_3415(bool var_259_bool)
{
	int var_261_int;
	func_3033(var_261_int, "ood1Spi4ka1");
	if(var_261_int == 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


void func_3162(void)
{
	object var_136_object;
	func_3840(var_136_object);
	object var_134_object;
	var_136_object = var_134_object;
	object var_135_object;
	var_134_object->FindMark(var_135_object, "d1q04KaterinaGotoMishka");
	if(var_135_object != 0)
		var_135_object->Remove();
	var_134_object->FindMark(var_135_object, "d1q04MishkaGotoSpi4ka");
	if(var_135_object != 0)
		var_135_object->Remove();
	var_134_object->FindMark(var_135_object, "d1q04Spi4kaGotoPowderHouse");
	if(var_135_object != 0)
		var_135_object->Remove();
	func_3907();
	bool var_152_bool;
	func_3823(var_152_bool, 44);
	bool var_160_bool;
	func_3823(var_160_bool, 45);
	bool var_162_bool;
	func_3823(var_162_bool, 46);
	bool var_164_bool;
	func_3062(var_164_bool, "quest_d1_04", "failed");
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2146(object var_0_object, int var_377_int, object var_378_object)
{
	var_0_object = var_378_object;
	bool var_388_bool; object var_389_object;
	var_378_object = var_389_object;
	func_2938(var_388_bool, var_389_object);
	if(!var_388_bool) { //@nz
		var_377_int = -2;
		return 8;
	}
	object var_384_object;
	@CreateDialog(var_384_object);
	int var_391_int;
	func_3111(var_391_int);
	var_384_object->SetNPCName(var_391_int);
	string var_392_string;
	func_3113(var_392_string);
	var_384_object->SetPhoto(var_392_string);
	int var_393_int;
	func_3890(var_393_int);
	var_384_object->SetPlayerName(var_393_int);
	bool var_385_bool;
	@IsOverrideActive(var_385_bool);
	if(var_385_bool != 0) {
		var_377_int = -2;
		return 8;
	}
	@DoDialog(var_384_object);
	object var_395_object; object var_396_object;
	var_378_object = var_395_object;
	var_384_object = var_396_object;
	TaskCall(9);
	func_2209(var_397_object, var_398_object, var_399_string, var_400_bool, var_395_object, var_396_object);
	TaskReturn();
	bool var_387_bool;
	var_384_object->IsDialogEnd(var_387_bool);
	
	for(;;) {
		var_530_bool = !var_387_bool; //@nz
		if(var_530_bool == 0) goto Label_2198;
		@sync();
		var_384_object->IsDialogEnd(var_387_bool);
	}
	
Label_2198:
	object var_531_object;
	var_378_object = var_531_object;
	func_2994();
	@StopDialog(var_384_object);
	var_384_object->GetReturnValue(-1);
	int var_386_int = var_377_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3683(bool var_337_bool)
{
	int var_339_int;
	func_3033(var_339_int, "KnowMishka");
	if(var_339_int == 1)
		var_337_bool = true;
	var_337_bool = false;
}


// @pe
void func_3427(bool var_269_bool)
{
	int var_271_int;
	func_3033(var_271_int, "ood1Spi4ka2");
	if(var_271_int == 0) {
		var_269_bool = true;
		return 0;
	}
	var_269_bool = false;
}


void func_3939(void)
{
	@Trace("Adding diary entry");
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 53, 1, 12135);
	bool var_40_bool; object var_41_object;
	var_35_object = var_41_object;
	func_3794(var_40_bool, var_41_object, 10);
}
EMIT "Stack[-1] = 0";


void func_2921(bool var_21_bool, object var_22_object)
{
	cvector var_27_cvector;
	var_22_object->GetPosition(var_27_cvector);
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector = var_27_cvector - var_28_cvector;
	var_31_float = GetByIndex(var_29_cvector, 0);
	var_32_float = GetByIndex(var_29_cvector, 2);
	bool var_30_bool;
	@Rotate(var_31_float, var_32_float, var_30_bool);
	var_30_bool = var_21_bool;
}


// @pe
void func_3695(bool var_321_bool)
{
	int var_323_int;
	func_3033(var_323_int, "KnowOspina");
	if(var_323_int == 1)
		var_321_bool = true;
	var_321_bool = false;
}


// @pe
void func_112(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_87_object, object var_88_object)
{
	var_0_object = var_88_object;
	var_3_object = false;
	if(1 != 0) {
		object var_94_object; object var_95_object;
		var_94_object = var_87_object;
		var_95_object = var_0_object;
		func_3363();
		func_180(var_88_object, "Neutral");
		var_0_object->SetMessage(356); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(357, 417, 414); //@t
		var_0_object->AddReply(358, 418, 415); //@t
		var_0_object->AddReply(359, -1, 416); //@t
		goto Label_150;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x74";
	}
Label_150:
	bool var_123_bool;
	func_3115(var_123_bool);
	if(var_123_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_179;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_179:
		return 0;

	}
	
}


// @pe
void func_3439(bool var_297_bool)
{
	int var_299_int;
	func_3033(var_299_int, "ood1Spi4ka3");
	if(var_299_int == 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


// @pe
void func_1392(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_308_object, object var_309_object)
{
	var_0_object = var_309_object;
	var_1_object = var_308_object;
	var_3_object = false;
	if(1 != 0) {
		func_1508(var_309_object, "Neutral");
		var_0_object->SetMessage(6715); //@t
		var_0_object->ClearReplies(); //@t
		bool var_321_bool = false;
		bool var_322_bool;
		func_3463(var_1_object);
		if(var_322_bool != 0) {
			bool var_328_bool;
			func_3487(var_1_object);
			if(var_328_bool != 0)
				var_321_bool = true;
		}
		if(var_321_bool != 0)
			var_0_object->AddReply(7429, 7355, 8200); //@t
		bool var_337_bool;
		func_3475(var_1_object);
		if(var_337_bool != 0)
			var_0_object->AddReply(6716, 7385, 7403); //@t
		bool var_346_bool = false;
		bool var_347_bool;
		func_3659(var_1_object);
		if(var_347_bool != 0) {
			bool var_353_bool;
			func_3671(var_1_object);
			if(var_353_bool != 0)
				var_346_bool = true;
		}
		if(var_346_bool != 0)
			var_0_object->AddReply(14516, 15756, 15755); //@t
		var_0_object->AddReply(7534, -1, 8316); //@t
		goto Label_1478;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=0";
	EMIT "Call 0x5e4";
	EMIT "Pop(1)";
	EMIT "Push((int) 9517)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=77";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=88";
	EMIT "Pop(0)";
	EMIT "Push((int) 9518)";
	EMIT "Push((int) 10462)";
	EMIT "Push((int) 10461)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=101";
	EMIT "Pop(3)";
	EMIT "GOTO 0x5c6";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x574";
	}
Label_1478:
	bool var_365_bool;
	func_3115(var_365_bool);
	if(var_365_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_1507;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1507:
		return 0;

	}
	
}


// @pe
void func_2418(object var_2_object, string var_177_string)
{
	bool var_178_bool;
	func_3115(var_178_bool);
	if(!var_178_bool) //@nz
		return 0;
	if(var_177_string == var_2_object)
		return 0;
	string var_181_string;
	func_2998(var_181_string);
	var_2_object = var_181_string;
}


void func_3955(void)
{
	@Trace("Adding diary entry");
	object var_35_object;
	@CreateDiaryEntry(var_35_object, 107, 2, 13730);
	bool var_40_bool; object var_41_object;
	var_35_object = var_41_object;
	func_3794(var_40_bool, var_41_object, -1);
}
EMIT "Stack[-1] = 0";


void func_2933(bool var_21_bool)
{
	bool var_23_bool;
	@IsLoaded(var_23_bool);
	var_23_bool = var_21_bool;
}


void func_2938(bool var_35_bool, object var_36_object)
{
	cvector var_46_cvector;
	var_36_object->GetPosition(var_46_cvector);
	float var_45_float;
	var_36_object->GetEyesHeight(var_45_float);
	var_53_float = GetByIndex(var_46_cvector, 1);
	SetByIndex(var_46_cvector, 1) = (var_53_float + var_45_float);
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	@GetEyesHeight(var_45_float);
	var_54_float = GetByIndex(var_47_cvector, 1);
	SetByIndex(var_47_cvector, 1) = (var_54_float + var_45_float);
	cvector var_48_cvector = var_46_cvector - var_47_cvector;
	var_55_float = GetByIndex(var_48_cvector, 1);
	SetByIndex(var_48_cvector, 1) = (float)0;
	var_57_float = sqrt(var_48_cvector | var_48_cvector);
	var_48_cvector /= var_57_float;
	cvector var_49_cvector = -var_48_cvector;
	cvector var_60_cvector;
	func_3023(var_60_cvector, (var_49_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_50_cvector = ((var_48_cvector * 70) + (var_60_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_52_bool;
	@IsOverrideActive(var_52_bool);
	if(var_52_bool != 0)
		var_35_bool = false;
	@StopWorld();
	@CameraTransit((var_47_cvector + var_50_cvector), var_49_cvector);
	var_73_float = GetByIndex(var_50_cvector, 0);
	var_74_float = GetByIndex(var_50_cvector, 2);
	@Rotate(var_73_float, var_74_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_35_bool = true;
}


// @pe
void func_3707(bool var_288_bool)
{
	int var_290_int;
	func_3088(var_290_int);
	if(var_290_int >= 18)
		var_288_bool = true;
	var_288_bool = false;
}


// @pe
void func_3451(bool var_456_bool)
{
	int var_458_int;
	func_3033(var_458_int, "KnowShabnak");
	if(var_458_int == 1)
		var_456_bool = true;
	var_456_bool = false;
}


// @pe
void func_380(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_160_object, object var_161_object)
{
	var_0_object = var_161_object;
	var_1_object = var_160_object;
	var_3_object = false;
	if(1 != 0) {
		func_546(var_161_object, "Neutral");
		var_0_object->SetMessage(5851); //@t
		var_0_object->ClearReplies(); //@t
		bool var_173_bool = false;
		bool var_174_bool;
		func_3403(var_1_object);
		if(var_174_bool != 0) {
			bool var_182_bool;
			func_3415(var_1_object);
			if(var_182_bool != 0)
				var_173_bool = true;
		}
		if(var_173_bool != 0)
			var_0_object->AddReply(5852, 6464, 6443); //@t
		bool var_191_bool = false;
		bool var_192_bool;
		func_3427(var_1_object);
		if(var_192_bool != 0) {
			bool var_198_bool;
			func_3391(var_1_object);
			if(var_198_bool != 0)
				var_191_bool = true;
		}
		if(var_191_bool != 0)
			var_0_object->AddReply(8356, 6444, 9179); //@t
		bool var_207_bool = true;
		bool var_208_bool = false;
		bool var_209_bool;
		func_3523(var_209_bool, var_1_object);
		if(var_209_bool != 0) {
			bool var_220_bool;
			func_3439(var_1_object);
			if(var_220_bool != 0)
				var_208_bool = true;
		}
		if(var_208_bool != 1) {
			bool var_226_bool = false;
			bool var_227_bool;
			func_3553(var_227_bool, var_1_object);
			if(var_227_bool != 0) {
				bool var_238_bool;
				func_3439(var_1_object);
				if(var_238_bool != 0)
					var_226_bool = true;
			}
			if(var_226_bool != 1)
				var_207_bool = false;
		}
		if(var_207_bool != 0)
			var_0_object->AddReply(8357, 6453, 9180); //@t
		bool var_243_bool = false;
		bool var_244_bool;
		func_3695(var_1_object);
		if(var_244_bool != 0) {
			bool var_250_bool;
			func_3499(var_1_object);
			if(var_250_bool != 0)
				var_243_bool = true;
		}
		if(var_243_bool != 0)
			var_0_object->AddReply(8365, 9205, 9188); //@t
		bool var_259_bool = false;
		bool var_260_bool;
		func_3683(var_1_object);
		if(var_260_bool != 0) {
			bool var_266_bool;
			func_3511(var_1_object);
			if(var_266_bool != 0)
				var_259_bool = true;
		}
		if(var_259_bool != 0)
			var_0_object->AddReply(8379, 9378, 9202); //@t
		var_0_object->AddReply(8520, -1, 9362); //@t
		goto Label_516;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x180";
	}
Label_516:
	bool var_278_bool;
	func_3115(var_278_bool);
	if(var_278_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2998(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_545;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_545:
		return 0;

	}
	
}


void func_3971(void)
{
	@Trace("Adding diary entry");
	object var_99_object;
	@CreateDiaryEntry(var_99_object, 109, 2, 13732);
	bool var_104_bool; object var_105_object;
	var_99_object = var_105_object;
	func_3794(var_104_bool, var_105_object, 107);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3718(bool var_142_bool)
{
	bool var_144_bool = false;
	int var_145_int;
	func_3088(var_145_int);
	if(var_145_int >= 0) {
		int var_152_int;
		func_3088(var_152_int);
		if(var_152_int < 6)
			var_144_bool = true;
	}
	if(var_144_bool != 0) {
		var_142_bool = true;
		return 0;
	}
	var_142_bool = false;
}


// @pe
void func_3463(bool var_126_bool)
{
	int var_128_int;
	func_3033(var_128_int, "ood2Spi4ka1");
	if(var_128_int == 0) {
		var_126_bool = true;
		return 0;
	}
	var_126_bool = false;
}


// @pe
void func_3211(void)
{
	@SetVariable("KnowShabnak", 1);
}


// @pe
void func_3217(void)
{
	@SetVariable("ood2Spi4ka1", 1);
}


// @pe
void func_3475(bool var_143_bool)
{
	int var_145_int;
	func_3033(var_145_int, "ood2Spi4ka2");
	if(var_145_int == 0) {
		var_143_bool = true;
		return 0;
	}
	var_143_bool = false;
}


void func_3987(void)
{
	@Trace("Adding diary entry");
	object var_115_object;
	@CreateDiaryEntry(var_115_object, 110, 2, 13733);
	bool var_120_bool; object var_121_object;
	var_115_object = var_121_object;
	func_3794(var_120_bool, var_121_object, 107);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3223(void)
{
	@SetVariable("ood2Spi4ka2", 1);
}


// @pe
void func_3739(bool var_166_bool)
{
	bool var_168_bool = false;
	int var_169_int;
	func_3088(var_169_int);
	if(var_169_int >= 6) {
		int var_172_int;
		func_3088(var_172_int);
		if(var_172_int < 12)
			var_168_bool = true;
	}
	if(var_168_bool != 0) {
		var_166_bool = true;
		return 0;
	}
	var_166_bool = false;
}


// @pe
void func_3229(void)
{
	@SetVariable("KnowAlbinos", 1);
}


// @pe
void func_3487(bool var_134_bool)
{
	int var_136_int;
	func_3033(var_136_int, "d2q01");
	if(var_136_int == 3)
		var_134_bool = true;
	var_134_bool = false;
}


// @pe
void func_2209(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_395_object, object var_396_object)
{
	var_0_object = var_396_object;
	var_1_object = var_395_object;
	var_3_object = false;
	if(1 != 0) {
		bool var_402_bool = true;
		bool var_403_bool = false;
		bool var_404_bool;
		func_3533(var_404_bool, var_1_object);
		if(var_404_bool != 0) {
			bool var_415_bool;
			func_3563(var_1_object);
			if(var_415_bool != 0)
				var_403_bool = true;
		}
		if(var_403_bool != 1) {
			bool var_421_bool = false;
			bool var_422_bool;
			func_3543(var_422_bool, var_1_object);
			if(var_422_bool != 0) {
				bool var_433_bool;
				func_3563(var_1_object);
				if(var_433_bool != 0)
					var_421_bool = true;
			}
			if(var_421_bool != 1)
				var_402_bool = false;
		}
		if(var_402_bool != 0) {
			func_2418(var_396_object, "Neutral");
			var_0_object->SetMessage(12040); //@t
			var_0_object->ClearReplies(); //@t
			var_0_object->AddReply(12041, 13262, 13259); //@t
			var_0_object->AddReply(12042, 13261, 13260); //@t
		} else {
					func_2418(var_396_object, "Neutral");
					var_0_object->SetMessage(12052); //@t
					var_0_object->ClearReplies(); //@t
					bool var_457_bool = true;
					bool var_458_bool = false;
					bool var_459_bool;
					func_3533(var_459_bool, var_1_object);
					if(var_459_bool != 0) {
						bool var_461_bool;
						func_3575(var_1_object);
						if(var_461_bool != 0)
							var_458_bool = true;
					}
					if(var_458_bool != 1) {
						bool var_467_bool = false;
						bool var_468_bool;
						func_3543(var_468_bool, var_1_object);
						if(var_468_bool != 0) {
							bool var_470_bool;
							func_3575(var_1_object);
							if(var_470_bool != 0)
								var_467_bool = true;
						}
						if(var_467_bool != 1)
							var_457_bool = false;
					}
					if(var_457_bool != 0)
						var_0_object->AddReply(12066, 13289, 13287); //@t
					bool var_475_bool = false;
					bool var_476_bool;
					func_3599(var_1_object);
					if(var_476_bool != 0) {
						bool var_482_bool;
						func_3611(var_1_object);
						if(var_482_bool != 0)
							var_475_bool = true;
					}
					if(var_475_bool != 0)
						var_0_object->AddReply(12543, 13713, 13712); //@t
					bool var_491_bool = false;
					bool var_492_bool = false;
					bool var_493_bool;
					func_3587(var_1_object);
					if(var_493_bool != 0) {
						bool var_499_bool;
						func_3623(var_1_object);
						if(var_499_bool != 0)
							var_492_bool = true;
					}
					if(var_492_bool != 0) {
						bool var_505_bool;
						func_3599(var_1_object);
						if(!var_505_bool) //@nz
							var_491_bool = true;
					}
					if(var_491_bool != 0)
						var_0_object->AddReply(12546, 13716, 13715); //@t
					bool var_511_bool = false;
					bool var_512_bool;
					func_3647(var_1_object);
					if(var_512_bool != 0) {
						bool var_518_bool;
						func_3635(var_1_object);
						if(var_518_bool != 0)
							var_511_bool = true;
					}
					if(var_511_bool != 0)
						var_0_object->AddReply(12053, 13274, 13273); //@t
					var_0_object->AddReply(12060, -1, 13280); //@t
		}
	}
	for(;;) {
		bool var_447_bool;
		func_3115(var_447_bool);
		if(var_447_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_object != 0) {
				} else {
					func_2998(var_2_object);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_object != 0) {
					goto Label_2417;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2417:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x8a5";


// @pe
void func_3235(void)
{
	@SetVariable("KnowZemlja", 1);
}


void func_4003(void)
{
	@Trace("Adding diary entry");
	object var_60_object;
	@CreateDiaryEntry(var_60_object, 158, 2, 15376);
	bool var_65_bool; object var_66_object;
	var_60_object = var_66_object;
	func_3794(var_65_bool, var_66_object, 107);
}
EMIT "Stack[-1] = 0";


// @pe
void func_3241(void)
{
	@SetVariable("d2q01", 4);
	func_3939();
	bool var_59_bool;
	func_3062(var_59_bool, "quest_d2_01", "woman");
}


// @pe
void func_3499(bool var_327_bool)
{
	int var_329_int;
	func_3033(var_329_int, "ood1Spi4ka4");
	if(var_329_int == 0) {
		var_327_bool = true;
		return 0;
	}
	var_327_bool = false;
}


// @pe
void func_3760(bool var_306_bool)
{
	bool var_308_bool = false;
	int var_309_int;
	func_3088(var_309_int);
	if(var_309_int >= 12) {
		int var_312_int;
		func_3088(var_312_int);
		if(var_312_int < 18)
			var_308_bool = true;
	}
	if(var_308_bool != 0) {
		var_306_bool = true;
		return 0;
	}
	var_306_bool = false;
}


// @pe
void func_2994(void)
{
	@CameraSwitchToNormal();
}


void func_4019(void)
{
	var_20_bool = GlobalVars[1];
	GlobalVars[1] = false;
}


// @pe
void func_180(object var_2_object, string var_30_string)
{
	bool var_31_bool;
	func_3115(var_31_bool);
	if(!var_31_bool) //@nz
		return 0;
	if(var_30_string == var_2_object)
		return 0;
	string var_34_string;
	func_2998(var_34_string);
	var_2_object = var_34_string;
}


void func_2998(string var_25_string)
{
	@Trace("playing " + var_25_string);
	float var_28_float;
	float var_29_float;
	@lshGetAnimTimes(var_25_string, var_28_float, var_29_float);
	@lshPlayAnimation(var_28_float, var_29_float);
	@Trace("start: " + var_28_float);
	@Trace("end: " + var_29_float);
}


// @pe
void func_3255(void)
{
	@SetVariable("ood1Spi4ka4", 1);
}


// @pe
void func_4023(object var_21_object)
{
	var_22_bool = GlobalVars[1];
	if(!var_22_bool) { //@nz
		int var_24_int; object var_25_object;
		var_21_object = var_25_object;
		TaskCall(2);
		func_49(var_26_object, var_24_int, var_25_object);
		TaskReturn();
		var_133_bool = GlobalVars[1];
		GlobalVars[1] = true;
	}
	bool var_134_bool;
	func_3096(var_134_bool, 1);
	if(var_134_bool != 0) {
		int var_142_int; object var_143_object;
		var_21_object = var_143_object;
		TaskCall(4);
		func_317(var_144_object, var_142_int, var_143_object);
		TaskReturn();
		return 0;
	}
	bool var_288_bool;
	func_3096(var_288_bool, 2);
	if(var_288_bool != 0) {
		int var_290_int; object var_291_object;
		var_21_object = var_291_object;
		TaskCall(6);
		func_1329(var_292_object, var_290_int, var_291_object);
		TaskReturn();
		return 0;
	}
	bool var_375_bool;
	func_3096(var_375_bool, 6);
	if(var_375_bool != 0) {
		int var_377_int; object var_378_object;
		var_21_object = var_378_object;
		TaskCall(8);
		func_2146(var_379_object, var_377_int, var_378_object);
		TaskReturn();
		return 0;
	}
	bool var_532_bool;
	func_3102(var_532_bool);
}


// @pe
void func_3511(bool var_343_bool)
{
	int var_345_int;
	func_3033(var_345_int, "ood1Spi4ka5");
	if(var_345_int == 0) {
		var_343_bool = true;
		return 0;
	}
	var_343_bool = false;
}


// @pe
void func_3261(void)
{
	@SetVariable("ood1Spi4ka5", 1);
}


// @pe
void func_3267(void)
{
	@TriggerWorld("playsound", "mapmark");
}


// @pe
void func_3523(bool var_286_bool, object var_287_object)
{
	object var_289_object;
	var_287_object = var_289_object;
	func_3707(var_289_object);
	bool var_288_bool;
	if(var_288_bool != 0) {
		var_286_bool = true;
		return 0;
	}
	var_286_bool = false;
}


void func_3781(object var_49_object)
{
	object var_51_object;
	@GetDiaryRoot(var_51_object);
	if(!var_51_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_49_object = false;
	}
	var_51_object = var_49_object;
}
EMIT "Stack[-1] = 0";


void func_3016(void)
{
	bool var_23_bool;
	func_3115(var_23_bool);
	if(var_23_bool != 0)
		@lshStopSpeech();
}


void func_3273(void)
{
	object var_57_object;
	func_3840(var_57_object);
	object var_56_object;
	var_57_object = var_56_object;
	float var_68_float;
	func_3074(var_68_float);
	var_56_object->AddMark("d1q04Spi4kaGotoPowderHouse", "pt_map_powderhouse", 0, 8645, var_68_float);
	func_3923();
}
EMIT "Stack[-1] = 0";


// @pe
void func_3533(bool var_140_bool, object var_141_object)
{
	object var_143_object;
	var_141_object = var_143_object;
	func_3718(var_143_object);
	bool var_142_bool;
	if(var_142_bool != 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


void func_3023(cvector var_60_cvector, cvector var_61_cvector)
{
	float var_64_float = sqrt(var_61_cvector | var_61_cvector);
	if(var_64_float < 0.000001)
		var_60_cvector = [0.0, 0.0, 0.0];
	var_60_cvector = var_61_cvector / var_64_float;
}


void func_3794(bool var_40_bool, object var_41_object, int var_42_int)
{
	object var_49_object;
	func_3781(var_49_object);
	object var_46_object;
	var_49_object = var_46_object;
	object var_47_object;
	var_46_object->Find(var_42_int, var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_42_int);
		var_40_bool = false;
	}
	var_47_object->AddChild(var_41_object);
	@SetVariable("player_diary", 1);
	int var_48_int;
	var_41_object->GetCategory(var_48_int);
	@SetDiarySection(var_48_int);
	var_40_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


// @pe
void func_3543(bool var_164_bool, object var_165_object)
{
	object var_167_object;
	var_165_object = var_167_object;
	func_3739(var_167_object);
	bool var_166_bool;
	if(var_166_bool != 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


void func_3033(int var_157_int, string var_158_string)
{
	int var_160_int;
	@GetVariable(var_158_string, var_160_int);
	var_160_int = var_157_int;
}


// @pe
void func_3292(void)
{
	@SetVariable("ood6Spi4ka1", 1);
}


void func_3038(object var_68_object, string var_69_string)
{
	object var_72_object;
	@GetMainOutdoorScene(var_72_object);
	object var_73_object;
	@AddBlankActor(var_73_object, var_72_object, var_69_string, (var_69_string + ".bin"));
	var_73_object = var_68_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_3553(bool var_304_bool, object var_305_object)
{
	object var_307_object;
	var_305_object = var_307_object;
	func_3760(var_307_object);
	bool var_306_bool;
	if(var_306_bool != 0) {
		var_304_bool = true;
		return 0;
	}
	var_304_bool = false;
}


// @pe
void func_3298(void)
{
	@SetVariable("d6q03", 1);
	func_3955();
	func_4003();
	object var_68_object;
	func_3038(var_68_object, "quest_d6_03");
	bool var_76_bool;
	func_3062(var_76_bool, "quest_d6_03", "place_albinos");
}


// @pe
void func_1508(object var_2_object, string var_109_string)
{
	bool var_110_bool;
	func_3115(var_110_bool);
	if(!var_110_bool) //@nz
		return 0;
	if(var_109_string == var_2_object)
		return 0;
	string var_113_string;
	func_2998(var_113_string);
	var_2_object = var_113_string;
}


void func_3049(object var_38_object, object var_39_object, int var_40_int)
{
	int var_44_int;
	var_39_object->GetItemID(var_44_int);
	int var_45_int;
	@GetInvItemProperty(var_45_int, var_44_int, "Category");
	bool var_46_bool;
	var_38_object->AddItem(var_46_bool, var_39_object, var_45_int, var_40_int);
	if(!var_46_bool) //@nz
		var_38_object->DropItems(var_39_object, var_40_int);
}


// @pe
void func_3563(bool var_155_bool)
{
	int var_157_int;
	func_3033(var_157_int, "ood6Spi4ka1");
	if(var_157_int == 0) {
		var_155_bool = true;
		return 0;
	}
	var_155_bool = false;
}


void func_3823(bool var_152_bool, int var_153_int)
{
	object var_158_object;
	func_3781(var_158_object);
	object var_156_object;
	var_158_object = var_156_object;
	object var_157_object;
	var_156_object->Find(var_153_int, var_157_object);
	if(!var_157_object) //@nz
		var_152_bool = false;
	var_157_object->Remove();
	var_152_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_3062(bool var_76_bool, string var_77_string, string var_78_string)
{
	object var_80_object;
	@FindActor(var_80_object, var_77_string);
	if(var_80_object == null)
		var_76_bool = false;
	@Trigger(var_80_object, var_78_string);
	var_76_bool = true;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3319(void)
{
	@SetVariable("ood6Spi4ka2", 1);
}


// @pe
void func_3325(void)
{
	func_3971();
	bool var_107_bool;
	func_3062(var_107_bool, "quest_d6_03", "completed");
}


