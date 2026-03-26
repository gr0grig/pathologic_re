GlobalVarCount = 0

Strings:
	W:night_bk.tex
	W:night_ft.tex
	W:night_lt.tex
	W:night_rt.tex
	W:night_up.tex
	W:night_rain_bk.tex
	W:night_rain_ft.tex
	W:night_rain_lt.tex
	W:night_rain_rt.tex
	W:night_rain_up.tex
	W:Wrong time
	W:dawn_bk.tex
	W:dawn_ft.tex
	W:dawn_lt.tex
	W:dawn_rt.tex
	W:dawn_up.tex
	W:dawn_rain_bk.tex
	W:dawn_rain_ft.tex
	W:dawn_rain_lt.tex
	W:dawn_rain_rt.tex
	W:dawn_rain_up.tex
	W:day_bk.tex
	W:day_ft.tex
	W:day_lt.tex
	W:day_rt.tex
	W:day_up.tex
	W:day_rain_bk.tex
	W:day_rain_ft.tex
	W:day_rain_lt.tex
	W:day_rain_rt.tex
	W:day_rain_up.tex
	W:Forecast: rain begins in 
	W: hours
	W:Forecast: rain ends in 
	W:CanPlayThunder
	A:CanPlayThunder
	W:thunder
	W:rain
	W:wmod_level
	W:Level: 
// @pool_raw:6e0069006700680074005f0062006b002e0074006500780000006e0069006700680074005f00660074002e0074006500780000006e0069006700680074005f006c0074002e0074006500780000006e0069006700680074005f00720074002e0074006500780000006e0069006700680074005f00750070002e0074006500780000006e0069006700680074005f007200610069006e005f0062006b002e0074006500780000006e0069006700680074005f007200610069006e005f00660074002e0074006500780000006e0069006700680074005f007200610069006e005f006c0074002e0074006500780000006e0069006700680074005f007200610069006e005f00720074002e0074006500780000006e0069006700680074005f007200610069006e005f00750070002e007400650078000000570072006f006e0067002000740069006d00650000006400610077006e005f0062006b002e0074006500780000006400610077006e005f00660074002e0074006500780000006400610077006e005f006c0074002e0074006500780000006400610077006e005f00720074002e0074006500780000006400610077006e005f00750070002e0074006500780000006400610077006e005f007200610069006e005f0062006b002e0074006500780000006400610077006e005f007200610069006e005f00660074002e0074006500780000006400610077006e005f007200610069006e005f006c0074002e0074006500780000006400610077006e005f007200610069006e005f00720074002e0074006500780000006400610077006e005f007200610069006e005f00750070002e0074006500780000006400610079005f0062006b002e0074006500780000006400610079005f00660074002e0074006500780000006400610079005f006c0074002e0074006500780000006400610079005f00720074002e0074006500780000006400610079005f00750070002e0074006500780000006400610079005f007200610069006e005f0062006b002e0074006500780000006400610079005f007200610069006e005f00660074002e0074006500780000006400610079005f007200610069006e005f006c0074002e0074006500780000006400610079005f007200610069006e005f00720074002e0074006500780000006400610079005f007200610069006e005f00750070002e00740065007800000046006f007200650063006100730074003a0020007200610069006e00200062006500670069006e007300200069006e0020000000200068006f00750072007300000046006f007200650063006100730074003a0020007200610069006e00200065006e0064007300200069006e0020000000430061006e0050006c00610079005400680075006e00640065007200000043616e506c61795468756e646572007400680075006e0064006500720000007200610069006e00000077006d006f0064005f006c006500760065006c0000004c006500760065006c003a0020000000

Import:
	ForceWeather (17 args)
	GetGameTime (1 args)
	Trace (1 args)
	ChangeWeather (18 args)
	Sleep (1 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	Rain (0 args)
	ModLinear (2 args)
	Bright (0 args)
	ModNothing (0 args)
	GetActiveScene (1 args)
	GetModifierLevel (1 args)
	irand (2 args)
	PlaySound (1 args)

RunOp = 0x0
RunTask = 0

GlobalTasks: 
	GTASK_0  Params = 0
		EVENT_7 Op = 0xdc Vars = (int)
		EVENT_1000 Op = 0x131 Vars = (string, string)


0x0: PushEmpty(float, float)
0x1: PushEmpty()
0x2: Call 0xb5

0x3: Pop(0)
0x4: Push("night_bk.tex") // @poff=0
0x5: Push("night_ft.tex") // @poff=26
0x6: Push("night_lt.tex") // @poff=52
0x7: Push("night_rt.tex") // @poff=78
0x8: Push("night_up.tex") // @poff=104
0x9: Push("night_rain_bk.tex") // @poff=130
0xa: Push("night_rain_ft.tex") // @poff=166
0xb: Push("night_rain_lt.tex") // @poff=202
0xc: Push("night_rain_rt.tex") // @poff=238
0xd: Push("night_rain_up.tex") // @poff=274
0xe: Push((bool) 0)
0xf: Push(CVector(0.0, 0.0, 0.0))
0x10: Push(CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261))
0x11: Push((float)3000.0)
0x12: Push((float)5000.0)
0x13: Push(CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305))
0x14: Push(CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305))
0x15: @ ForceWeather(Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x16: Pop(17)
0x17: @ GetGameTime(Stack[-1])
0x18: Pop(0)
0x19: PushEmpty(bool)
0x1a: Stack[-1] = (bool) 1
0x1b: Push((float)5.989999771118164)
0x1c: Pop(1); Push((bool) Stack[-3] < Stack[-1])
0x1d: IF (Stack[-1] == 1) GOTO 0x22; Pop(1)

0x1e: Push((float)6.010000228881836)
0x1f: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x20: IF (Stack[-1] == 1) GOTO 0x22; Pop(1)

0x21: Stack[-1] = (bool) 0
0x22: IF (Stack[-1] == 0) GOTO 0x27; Pop(1)

0x23: Push("Wrong time") // @poff=310
0x24: @ Trace(Stack[-1])
0x25: Pop(1)
0x26: Return(); Pop(2)

0x27: @ GetGameTime(Stack[-1])
0x28: Pop(0)
0x29: Push("dawn_bk.tex") // @poff=332
0x2a: Push("dawn_ft.tex") // @poff=356
0x2b: Push("dawn_lt.tex") // @poff=380
0x2c: Push("dawn_rt.tex") // @poff=404
0x2d: Push("dawn_up.tex") // @poff=428
0x2e: Push("dawn_rain_bk.tex") // @poff=452
0x2f: Push("dawn_rain_ft.tex") // @poff=486
0x30: Push("dawn_rain_lt.tex") // @poff=520
0x31: Push("dawn_rain_rt.tex") // @poff=554
0x32: Push("dawn_rain_up.tex") // @poff=588
0x33: Push((bool) 0)
0x34: Push(CVector(0.3921568989753723, 0.25882354378700256, 0.25882354378700256))
0x35: Push(CVector(0.3921568989753723, 0.25882354378700256, 0.25882354378700256))
0x36: Push((float)3000.0)
0x37: Push((float)5000.0)
0x38: Push(CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445))
0x39: Push(CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445))
0x3a: PushEmpty(float, float, float)
0x3b: Stack[-2] = (float) 8.0
0x3c: Stack[-21] = Stack[-1]
0x3d: Call 0x144

0x3e: Pop(2)
0x3f: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x40: Pop(18)
0x41: @ GetGameTime(Stack[-1])
0x42: Pop(0)
0x43: PushEmpty(float, float, float)
0x44: Stack[-2] = (float) 10.0
0x45: Stack[-4] = Stack[-1]
0x46: Call 0x144

0x47: Pop(2)
0x48: @ Sleep(Stack[-1])
0x49: Pop(1)
0x4a: @ GetGameTime(Stack[-1])
0x4b: Pop(0)
0x4c: Push("day_bk.tex") // @poff=622
0x4d: Push("day_ft.tex") // @poff=644
0x4e: Push("day_lt.tex") // @poff=666
0x4f: Push("day_rt.tex") // @poff=688
0x50: Push("day_up.tex") // @poff=710
0x51: Push("day_rain_bk.tex") // @poff=732
0x52: Push("day_rain_ft.tex") // @poff=764
0x53: Push("day_rain_lt.tex") // @poff=796
0x54: Push("day_rain_rt.tex") // @poff=828
0x55: Push("day_rain_up.tex") // @poff=860
0x56: Push((bool) 0)
0x57: Push(CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171))
0x58: Push(CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171))
0x59: Push((float)3000.0)
0x5a: Push((float)5000.0)
0x5b: Push(CVector(0.7019608020782471, 0.6313725709915161, 0.5372549295425415))
0x5c: Push(CVector(0.7019608020782471, 0.6313725709915161, 0.5372549295425415))
0x5d: PushEmpty(float, float, float)
0x5e: Stack[-2] = (float) 11.0
0x5f: Stack[-21] = Stack[-1]
0x60: Call 0x144

0x61: Pop(2)
0x62: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x63: Pop(18)
0x64: @ GetGameTime(Stack[-1])
0x65: Pop(0)
0x66: PushEmpty(float, float, float)
0x67: Stack[-2] = (float) 18.0
0x68: Stack[-4] = Stack[-1]
0x69: Call 0x144

0x6a: Pop(2)
0x6b: @ Sleep(Stack[-1])
0x6c: Pop(1)
0x6d: @ GetGameTime(Stack[-1])
0x6e: Pop(0)
0x6f: Push("dawn_bk.tex") // @poff=332
0x70: Push("dawn_ft.tex") // @poff=356
0x71: Push("dawn_lt.tex") // @poff=380
0x72: Push("dawn_rt.tex") // @poff=404
0x73: Push("dawn_up.tex") // @poff=428
0x74: Push("dawn_rain_bk.tex") // @poff=452
0x75: Push("dawn_rain_ft.tex") // @poff=486
0x76: Push("dawn_rain_lt.tex") // @poff=520
0x77: Push("dawn_rain_rt.tex") // @poff=554
0x78: Push("dawn_rain_up.tex") // @poff=588
0x79: Push((bool) 0)
0x7a: Push(CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171))
0x7b: Push(CVector(0.3529411852359772, 0.3137255012989044, 0.2666666805744171))
0x7c: Push((float)3000.0)
0x7d: Push((float)5000.0)
0x7e: Push(CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445))
0x7f: Push(CVector(0.7843137979507446, 0.5215686559677124, 0.4431372582912445))
0x80: PushEmpty(float, float, float)
0x81: Stack[-2] = (float) 19.0
0x82: Stack[-21] = Stack[-1]
0x83: Call 0x144

0x84: Pop(2)
0x85: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x86: Pop(18)
0x87: @ GetGameTime(Stack[-1])
0x88: Pop(0)
0x89: PushEmpty(float, float, float)
0x8a: Stack[-2] = (float) 20.0
0x8b: Stack[-4] = Stack[-1]
0x8c: Call 0x144

0x8d: Pop(2)
0x8e: @ Sleep(Stack[-1])
0x8f: Pop(1)
0x90: @ GetGameTime(Stack[-1])
0x91: Pop(0)
0x92: Push("night_bk.tex") // @poff=0
0x93: Push("night_ft.tex") // @poff=26
0x94: Push("night_lt.tex") // @poff=52
0x95: Push("night_rt.tex") // @poff=78
0x96: Push("night_up.tex") // @poff=104
0x97: Push("night_rain_bk.tex") // @poff=130
0x98: Push("night_rain_ft.tex") // @poff=166
0x99: Push("night_rain_lt.tex") // @poff=202
0x9a: Push("night_rain_rt.tex") // @poff=238
0x9b: Push("night_rain_up.tex") // @poff=274
0x9c: Push((bool) 0)
0x9d: Push(CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261))
0x9e: Push(CVector(0.0784313753247261, 0.0784313753247261, 0.0784313753247261))
0x9f: Push((float)3000.0)
0xa0: Push((float)5000.0)
0xa1: Push(CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305))
0xa2: Push(CVector(0.03921568766236305, 0.03921568766236305, 0.03921568766236305))
0xa3: PushEmpty(float, float, float)
0xa4: Stack[-2] = (float) 21.0
0xa5: Stack[-21] = Stack[-1]
0xa6: Call 0x144

0xa7: Pop(2)
0xa8: @ ChangeWeather(Stack[-18], Stack[-17], Stack[-16], Stack[-15], Stack[-14], Stack[-13], Stack[-12], Stack[-11], Stack[-10], Stack[-9], Stack[-8], Stack[-7], Stack[-6], Stack[-5], Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0xa9: Pop(18)
0xaa: @ GetGameTime(Stack[-1])
0xab: Pop(0)
0xac: PushEmpty(float, float, float)
0xad: Stack[-2] = (float) 6.0
0xae: Stack[-4] = Stack[-1]
0xaf: Call 0x144

0xb0: Pop(2)
0xb1: @ Sleep(Stack[-1])
0xb2: Pop(1)
0xb3: GOTO 0x27

0xb4: Return(); Pop(2)

0xb5: PushEmpty(float, float)
0xb6: Push((int) 2)
0xb7: Push((int) 20)
0xb8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xb9: Pop(2)
0xba: Push((int) 40)
0xbb: @ SetTimer(Stack[-1], Stack[-2])
0xbc: Pop(1)
0xbd: Push("Forecast: rain begins in ") // @poff=892
0xbe: Pop(1); Push(Stack[-1] + Stack[-2]);
0xbf: Push(" hours") // @poff=944
0xc0: Pop(2); Push(Stack[-2] + Stack[-1]);
0xc1: @ Trace(Stack[-1])
0xc2: Pop(1)
0xc3: Return(); Pop(2)

0xc4: PushEmpty(float, float)
0xc5: Push((int) 1)
0xc6: Push((int) 8)
0xc7: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xc8: Pop(2)
0xc9: Push((int) 41)
0xca: @ SetTimer(Stack[-1], Stack[-2])
0xcb: Pop(1)
0xcc: Push("Forecast: rain ends in ") // @poff=958
0xcd: Pop(1); Push(Stack[-1] + Stack[-2]);
0xce: Push(" hours") // @poff=944
0xcf: Pop(2); Push(Stack[-2] + Stack[-1]);
0xd0: @ Trace(Stack[-1])
0xd1: Pop(1)
0xd2: Return(); Pop(2)

0xd3: PushEmpty(float, float)
0xd4: Push((float)0.5)
0xd5: Push((float)1.0)
0xd6: @ rand(Stack[-3], Stack[-2], Stack[-1])
0xd7: Pop(2)
0xd8: Push((int) 43)
0xd9: @ SetTimer(Stack[-1], Stack[-2])
0xda: Pop(1)
0xdb: Return(); Pop(2)

0xdc: PushEmpty(float, object, bool, float, int, float, object, bool, float, int)
0xdd: Push((int) 40)
0xde: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xdf: IF (Stack[-1] == 0) GOTO 0xf4; Pop(1)

0xe0: Push((int) 40)
0xe1: @ KillTimer(Stack[-1])
0xe2: Pop(1)
0xe3: @ Rain()
0xe4: Pop(0)
0xe5: Push((float)0.10000000149011612)
0xe6: Push((int) 1)
0xe7: @ rand(Stack[-7], Stack[-2], Stack[-1])
0xe8: Pop(2)
0xe9: Push((int) 2)
0xea: Pop(1); Push(Stack[-6] * Stack[-1]);
0xeb: @ ModLinear(Stack[-6], Stack[-1])
0xec: Pop(1)
0xed: PushEmpty()
0xee: Call 0xc4

0xef: Pop(0)
0xf0: PushEmpty()
0xf1: Call 0xd3

0xf2: Pop(0)
0xf3: GOTO 0x130

0xf4: Push((int) 41)
0xf5: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0xf6: IF (Stack[-1] == 0) GOTO 0x103; Pop(1)

0xf7: Push((int) 41)
0xf8: @ KillTimer(Stack[-1])
0xf9: Pop(1)
0xfa: Push((int) 0)
0xfb: Push((int) 2)
0xfc: @ ModLinear(Stack[-2], Stack[-1])
0xfd: Pop(2)
0xfe: Push((int) 42)
0xff: Push((int) 2)
0x100: @ SetTimer(Stack[-2], Stack[-1])
0x101: Pop(2)
0x102: GOTO 0x130

0x103: Push((int) 42)
0x104: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x105: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0x106: Push((int) 42)
0x107: @ KillTimer(Stack[-1])
0x108: Pop(1)
0x109: @ Bright()
0x10a: Pop(0)
0x10b: @ ModNothing()
0x10c: Pop(0)
0x10d: PushEmpty()
0x10e: Call 0xb5

0x10f: Pop(0)
0x110: GOTO 0x130

0x111: Push((int) 43)
0x112: Pop(1); Push((bool) Stack[-12] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x130; Pop(1)

0x114: @ GetActiveScene(Stack[-4])
0x115: Pop(0)
0x116: Push("CanPlayThunder") // @poff=1006
0x117: Push((int) 1)
0x118: Pop(2); Push(IsFuncExist(Stack[-6], Stack[-2], Stack[-1]))
0x119: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11a: @@ CanPlayThunder(Stack[-3]); Obj=4 // @poff=1036
0x11b: Pop(0)
0x11c: Push(Stack[-3])
0x11d: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11e: @ GetModifierLevel(Stack[-2])
0x11f: Pop(0)
0x120: Push((float)0.30000001192092896)
0x121: Pop(1); Push((bool) Stack[-3] > Stack[-1])
0x122: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x123: Push((int) 3)
0x124: @ irand(Stack[-2], Stack[-1])
0x125: Pop(1)
0x126: Push("thunder") // @poff=1051
0x127: Push((int) 1)
0x128: Pop(1); Push(Stack[-3] + Stack[-1]);
0x129: Pop(2); Push(Stack[-2] + Stack[-1]);
0x12a: @ PlaySound(Stack[-1])
0x12b: Pop(1)
0x12c: PushEmpty()
0x12d: Call 0xd3

0x12e: Pop(0)
0x12f: Stack[-4] = 0
0x130: Return(); Pop(10)

0x131: PushEmpty(float, float)
0x132: Push("rain") // @poff=1067
0x133: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: PushEmpty(int)
0x136: Stack[-1] = (int) 40
0x137: Call 0xdc

0x138: Pop(1)
0x139: GOTO 0x143

0x13a: Push("wmod_level") // @poff=1077
0x13b: Pop(1); Push((bool) Stack[-5] == Stack[-1])
0x13c: IF (Stack[-1] == 0) GOTO 0x143; Pop(1)

0x13d: @ GetModifierLevel(Stack[-1])
0x13e: Pop(0)
0x13f: Push("Level: ") // @poff=1099
0x140: Pop(1); Push(Stack[-1] + Stack[-2]);
0x141: @ Trace(Stack[-1])
0x142: Pop(1)
0x143: Return(); Pop(2)

0x144: PushEmpty()
0x145: Push((int) 24)
0x146: Stack[-2] = Stack[-2] % Stack[-1]; Pop(1);
0x147: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x148: IF (Stack[-1] == 0) GOTO 0x14d; Pop(1)

0x149: Push((int) 24)
0x14a: Pop(1); Push(Stack[-3] + Stack[-1]);
0x14b: Stack[-4] = Stack[-1] - Stack[-2]; Pop(1);
0x14c: Return(); Pop(0)

0x14d: Stack[-3] = Stack[-2] - Stack[-1]; Pop(0);
0x14e: Return(); Pop(0)

