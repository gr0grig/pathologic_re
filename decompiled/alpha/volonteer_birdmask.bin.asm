GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetPhoto
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	npc
	GetPosition
	GetEyesHeight
	playing 
	start: 
	end: 
	HasItem
	playsound
	giveitem
	oo
	1
	powder
	RemoveItemByType
	burah_serum
	volonteers_danko
	rescue
	player
	alexandr
	andrei
	anna
	bigvlad
	eva
	georg
	grif
	han
	julia
	kapella
	katerina
	klara
	laska
	maria
	mark
	mat
	mishka
	mladvlad
	notkin
	ospina
	petr
	rubin
	spi4ka
	starshina
	viktor
	wasted_woman
	wasted_male
	alkash
	boy
	girl
	littleboy
	littlegirl
	butcher
	dohodyaga
	unosha
	vaxxabit
	vaxxabitka
	worker
	whitemask
	birdmask
	patrol
	alkash_d
	boy_d
	butcher_d
	dohodyaga_d
	girl_d
	littleboy_d
	littlegirl_d
	unosha2
	unosha_d
	unosha2_d
	vaxxabit_d
	vaxxabitka_d
	wasted_male_d
	wasted_woman_d
	worker2
	worker_d
	worker2_d
	burah
	gorbun_daughter
	gorbun
	albinos
	aglaja
	nude
	block
	officer
	vol_
	ui/NPC_Black.png

Import:
	CreateDialog (1 args)
	IsOverrideActive (1 args)
	DoDialog (1 args)
	sync (0 args)
	StopDialog (1 args)
	lshWaitForAnimEnd (0 args)
	PlayAnimation (2 args)
	WaitForAnimEnd (0 args)
	lshStopAnimation (0 args)
	StopAnimation (0 args)
	Sleep (1 args)
	GetProperty (2 args)
	Trace (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	rand (2 args)
	Sleep (2 args)
	IsLoaded (1 args)
	GetPosition (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (2 args)
	lshStopSpeech (0 args)
	GetInvItemByName (2 args)
	FindActor (2 args)
	Trigger (3 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)
	SetVariable (2 args)
	GetVariable (2 args)
	_strlwr (1 args)

RunOp = 0x15d
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xb1 Vars = (int, int)
	GTASK_2  Params = 0
		EVENT_0 Op = 0x165 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object)
0x3: Stack[-1] = Stack[-11]
0x4: Call 0x1cb

0x5: Pop(1)
0x6: Pop(1); Push((bool) Stack[-1] == 0)
0x7: IF (Stack[-1] == 0) GOTO 0xa; Pop(1)

0x8: Stack[-10] = (int) -2
0x9: Return(); Pop(8)

0xa: @ CreateDialog(Stack[-4])
0xb: Pop(0)
0xc: PushEmpty(int)
0xd: Call 0x42e

0xe: Pop(0)
0xf: @@ SetNPCName(Stack[-1])
0x10: Pop(1)
0x11: PushEmpty(string)
0x12: Call 0x430

0x13: Pop(0)
0x14: @@ SetPhoto(Stack[-1])
0x15: Pop(1)
0x16: PushEmpty(int)
0x17: Call 0x2ab

0x18: Pop(0)
0x19: @@ SetPlayerName(Stack[-1])
0x1a: Pop(1)
0x1b: Stack[-2] = (int) -1
0x1c: @ IsOverrideActive(Stack[-3])
0x1d: Pop(0)
0x1e: Push(Stack[-3])
0x1f: IF (Stack[-1] == 0) GOTO 0x22; Pop(1)

0x20: Stack[-10] = (int) -2
0x21: Return(); Pop(8)

0x22: @ DoDialog(Stack[-4])
0x23: Pop(0)
0x24: PushEmpty(object, object)
0x25: Stack[-2] = Stack[-11]
0x26: Stack[-1] = Stack[-6]
0x27: Push(-2, 4); TaskCall(1)
0x28: Call 0x3f

0x29: Pop(-2, 4); TaskReturn
0x2a: Pop(2)
0x2b: @@ IsDialogEnd(Stack[-1])
0x2c: Pop(0)
0x2d: Pop(0); Push((bool) Stack[-1] == 0)
0x2e: IF (Stack[-1] == 0) GOTO 0x34; Pop(1)

0x2f: @ sync()
0x30: Pop(0)
0x31: @@ IsDialogEnd(Stack[-1])
0x32: Pop(0)
0x33: GOTO 0x2d

0x34: PushEmpty(object)
0x35: Stack[-1] = Stack[-10]
0x36: Call 0x203

0x37: Pop(1)
0x38: @ StopDialog(Stack[-4])
0x39: Pop(0)
0x3a: @@ GetReturnValue(Stack[-2])
0x3b: Pop(0)
0x3c: Stack[-10] = Stack[-2]
0x3d: Return(); Pop(8)

0x3e: Stack[-4] = 0
0x3f: PushEmpty()
0x40: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x41: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x42: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x43: Push((int) 1)
0x44: IF (Stack[-1] == 0) GOTO 0x83; Pop(1)

0x45: PushEmpty(bool, object)
0x46: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x47: Call 0x294

0x48: Pop(1)
0x49: IF (Stack[-1] == 0) GOTO 0x5e; Pop(1)

0x4a: PushEmpty(object, object)
0x4b: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x4c: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x4d: Call 0x25b

0x4e: Pop(2)
0x4f: PushEmpty(string)
0x50: Stack[-1] = "Neutral"
0x51: Call 0xa1

0x52: Pop(1)
0x53: Push((int) 14075)
0x54: @@ SetMessage(Stack[-1])
0x55: Pop(1)
0x56: @@ ClearReplies()
0x57: Pop(0)
0x58: Push((int) 14076)
0x59: Push((int) 15314)
0x5a: Push((int) 15313)
0x5b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5c: Pop(3)
0x5d: GOTO 0x83

0x5e: PushEmpty(string)
0x5f: Stack[-1] = "Neutral"
0x60: Call 0xa1

0x61: Pop(1)
0x62: Push((int) 14079)
0x63: @@ SetMessage(Stack[-1])
0x64: Pop(1)
0x65: @@ ClearReplies()
0x66: Pop(0)
0x67: PushEmpty(bool, object)
0x68: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x69: Call 0x27e

0x6a: Pop(1)
0x6b: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x6c: Push((int) 14080)
0x6d: Push((int) 15318)
0x6e: Push((int) 15317)
0x6f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x70: Pop(3)
0x71: PushEmpty(bool, object)
0x72: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x73: Call 0x289

0x74: Pop(1)
0x75: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x76: Push((int) 14110)
0x77: Push((int) 15326)
0x78: Push((int) 15325)
0x79: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7a: Pop(3)
0x7b: Push((int) 14082)
0x7c: Push((int) -1)
0x7d: Push((int) 15319)
0x7e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7f: Pop(3)
0x80: GOTO 0x83

0x81: Return(); Pop(0)

0x82: GOTO 0x43

0x83: PushEmpty(bool)
0x84: Call 0x432

0x85: Pop(0)
0x86: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x87: @ lshWaitForAnimEnd()
0x88: Pop(0)
0x89: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8a: IF (Stack[-1] == 0) GOTO 0x8c; Pop(1)

0x8b: GOTO 0x91

0x8c: PushEmpty(string)
0x8d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x8e: Call 0x207

0x8f: Pop(1)
0x90: GOTO 0x87

0x91: GOTO 0xa0

0x92: Push("all")
0x93: Push("idle")
0x94: @ PlayAnimation(Stack[-2], Stack[-1])
0x95: Pop(2)
0x96: @ WaitForAnimEnd()
0x97: Pop(0)
0x98: Push( Stack[3 + Tasks[-1].StackPointer] )
0x99: IF (Stack[-1] == 0) GOTO 0x9b; Pop(1)

0x9a: GOTO 0xa0

0x9b: Push("all")
0x9c: Push("idle")
0x9d: @ PlayAnimation(Stack[-2], Stack[-1])
0x9e: Pop(2)
0x9f: GOTO 0x96

0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: PushEmpty(bool)
0xa3: Call 0x432

0xa4: Pop(0)
0xa5: Pop(1); Push((bool) Stack[-1] == 0)
0xa6: IF (Stack[-1] == 0) GOTO 0xa8; Pop(1)

0xa7: Return(); Pop(0)

0xa8: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xa9: IF (Stack[-1] == 0) GOTO 0xab; Pop(1)

0xaa: Return(); Pop(0)

0xab: PushEmpty(string)
0xac: Stack[-1] = Stack[-2]
0xad: Call 0x207

0xae: Pop(1)
0xaf: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xb0: Return(); Pop(0)

0xb1: PushEmpty()
0xb2: Push((int) 1)
0xb3: IF (Stack[-1] == 0) GOTO 0x15c; Pop(1)

0xb4: PushEmpty()
0xb5: Call 0x219

0xb6: Pop(0)
0xb7: Push((int) 15324)
0xb8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xb9: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xba: PushEmpty(object, object)
0xbb: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xbc: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xbd: Call 0x26d

0xbe: Pop(2)
0xbf: PushEmpty(object, object)
0xc0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc2: Call 0x273

0xc3: Pop(2)
0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call 0x255

0xc8: Pop(2)
0xc9: Push((int) 15327)
0xca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xdb; Pop(1)

0xcc: PushEmpty(object, object)
0xcd: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xce: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xcf: Call 0x267

0xd0: Pop(2)
0xd1: PushEmpty(object, object)
0xd2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd4: Call 0x273

0xd5: Pop(2)
0xd6: PushEmpty(object, object)
0xd7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xd8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xd9: Call 0x255

0xda: Pop(2)
0xdb: Push((int) 15312)
0xdc: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xdd: IF (Stack[-1] == 0) GOTO 0x11a; Pop(1)

0xde: PushEmpty(bool, object)
0xdf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xe0: Call 0x294

0xe1: Pop(1)
0xe2: IF (Stack[-1] == 0) GOTO 0xf7; Pop(1)

0xe3: PushEmpty(object, object)
0xe4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xe5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xe6: Call 0x25b

0xe7: Pop(2)
0xe8: PushEmpty(string)
0xe9: Stack[-1] = "Neutral"
0xea: Call 0xa1

0xeb: Pop(1)
0xec: Push((int) 14075)
0xed: @@ SetMessage(Stack[-1])
0xee: Pop(1)
0xef: @@ ClearReplies()
0xf0: Pop(0)
0xf1: Push((int) 14076)
0xf2: Push((int) 15314)
0xf3: Push((int) 15313)
0xf4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf5: Pop(3)
0xf6: Return(); Pop(0)

0xf7: PushEmpty(string)
0xf8: Stack[-1] = "Neutral"
0xf9: Call 0xa1

0xfa: Pop(1)
0xfb: Push((int) 14079)
0xfc: @@ SetMessage(Stack[-1])
0xfd: Pop(1)
0xfe: @@ ClearReplies()
0xff: Pop(0)
0x100: PushEmpty(bool, object)
0x101: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x102: Call 0x27e

0x103: Pop(1)
0x104: IF (Stack[-1] == 0) GOTO 0x10a; Pop(1)

0x105: Push((int) 14080)
0x106: Push((int) 15318)
0x107: Push((int) 15317)
0x108: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x109: Pop(3)
0x10a: PushEmpty(bool, object)
0x10b: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x10c: Call 0x289

0x10d: Pop(1)
0x10e: IF (Stack[-1] == 0) GOTO 0x114; Pop(1)

0x10f: Push((int) 14110)
0x110: Push((int) 15326)
0x111: Push((int) 15325)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Push((int) 14082)
0x115: Push((int) -1)
0x116: Push((int) 15319)
0x117: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x118: Pop(3)
0x119: Return(); Pop(0)

0x11a: Push((int) 15326)
0x11b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11c: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x11d: PushEmpty(string)
0x11e: Stack[-1] = "Neutral"
0x11f: Call 0xa1

0x120: Pop(1)
0x121: Push((int) 14111)
0x122: @@ SetMessage(Stack[-1])
0x123: Pop(1)
0x124: @@ ClearReplies()
0x125: Pop(0)
0x126: Push((int) 14112)
0x127: Push((int) -1)
0x128: Push((int) 15327)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Push((int) 15318)
0x12d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12e: IF (Stack[-1] == 0) GOTO 0x13e; Pop(1)

0x12f: PushEmpty(string)
0x130: Stack[-1] = "Neutral"
0x131: Call 0xa1

0x132: Pop(1)
0x133: Push((int) 14081)
0x134: @@ SetMessage(Stack[-1])
0x135: Pop(1)
0x136: @@ ClearReplies()
0x137: Pop(0)
0x138: Push((int) 14109)
0x139: Push((int) -1)
0x13a: Push((int) 15324)
0x13b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13c: Pop(3)
0x13d: Return(); Pop(0)

0x13e: Push((int) 15314)
0x13f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x140: IF (Stack[-1] == 0) GOTO 0x150; Pop(1)

0x141: PushEmpty(string)
0x142: Stack[-1] = "Neutral"
0x143: Call 0xa1

0x144: Pop(1)
0x145: Push((int) 14077)
0x146: @@ SetMessage(Stack[-1])
0x147: Pop(1)
0x148: @@ ClearReplies()
0x149: Pop(0)
0x14a: Push((int) 14078)
0x14b: Push((int) -1)
0x14c: Push((int) 15315)
0x14d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x14e: Pop(3)
0x14f: Return(); Pop(0)

0x150: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x151: PushEmpty(bool)
0x152: Call 0x432

0x153: Pop(0)
0x154: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x155: @ lshStopAnimation()
0x156: Pop(0)
0x157: GOTO 0x15a

0x158: @ StopAnimation()
0x159: Pop(0)
0x15a: Return(); Pop(0)

0x15b: GOTO 0xb2

0x15c: Return(); Pop(0)

0x15d: Push((int) 3)
0x15e: @ Sleep(Stack[-1])
0x15f: Pop(1)
0x160: PushEmpty()
0x161: Call 0x181

0x162: Pop(0)
0x163: GOTO 0x15d

0x164: Return(); Pop(0)

0x165: PushEmpty(string, string)
0x166: Push("npc")
0x167: @ GetProperty(Stack[-1], Stack[-2])
0x168: Pop(1)
0x169: @ Trace(Stack[-1])
0x16a: Pop(0)
0x16b: PushEmpty(int, string)
0x16c: Stack[-1] = Stack[-3]
0x16d: Call 0x2bc

0x16e: Pop(1)
0x16f: @ Trace(Stack[-1])
0x170: Pop(1)
0x171: PushEmpty(bool, int)
0x172: PushEmpty(int, string)
0x173: Stack[-1] = Stack[-5]
0x174: Call 0x2bc

0x175: Stack[-3] = Stack[-2]
0x176: Pop(2)
0x177: Call 0x424

0x178: Pop(1)
0x179: IF (Stack[-1] == 0) GOTO 0x180; Pop(1)

0x17a: PushEmpty(int, object)
0x17b: Stack[-1] = Stack[-5]
0x17c: Push(-2, 1); TaskCall(0)
0x17d: Call 0x0

0x17e: Pop(-2, 1); TaskReturn
0x17f: Pop(2)
0x180: Return(); Pop(2)

0x181: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x182: @ WaitForAnimEnd()
0x183: Pop(0)
0x184: PushEmpty(bool)
0x185: Call 0x1c6

0x186: Pop(0)
0x187: Pop(1); Push((bool) Stack[-1] == 0)
0x188: IF (Stack[-1] == 0) GOTO 0x18a; Pop(1)

0x189: Return(); Pop(14)

0x18a: PushEmpty(int)
0x18b: Call 0x244

0x18c: Stack[-8] = Stack[-1]
0x18d: Pop(1)
0x18e: Stack[-6] = (int) 0
0x18f: PushEmpty(bool)
0x190: Stack[-1] = (bool) 0
0x191: Push((int) 5)
0x192: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x193: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x194: PushEmpty(bool)
0x195: Call 0x1c6

0x196: Pop(0)
0x197: IF (Stack[-1] == 0) GOTO 0x199; Pop(1)

0x198: Stack[-1] = (bool) 1
0x199: IF (Stack[-1] == 0) GOTO 0x1c5; Pop(1)

0x19a: Push((int) 3)
0x19b: @ irand(Stack[-6], Stack[-1])
0x19c: Pop(1)
0x19d: Push((int) 0)
0x19e: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x19f: IF (Stack[-1] == 0) GOTO 0x1b1; Pop(1)

0x1a0: Push(Stack[-7])
0x1a1: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1a2: @ irand(Stack[-4], Stack[-7])
0x1a3: Pop(0)
0x1a4: Push("all")
0x1a5: PushEmpty(string, int)
0x1a6: Stack[-1] = Stack[-7]
0x1a7: Call 0x23d

0x1a8: Pop(1)
0x1a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x1aa: Pop(2)
0x1ab: @ WaitForAnimEnd(Stack[-3])
0x1ac: Pop(0)
0x1ad: Pop(0); Push((bool) Stack[-3] == 0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1af: GOTO 0x1c5

0x1b0: GOTO 0x1c2

0x1b1: Push((int) 1)
0x1b2: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x1b3: IF (Stack[-1] == 0) GOTO 0x1bf; Pop(1)

0x1b4: Push((int) 4)
0x1b5: @ rand(Stack[-3], Stack[-1])
0x1b6: Pop(1)
0x1b7: Push((int) 1)
0x1b8: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1b9: @ Sleep(Stack[-1], Stack[-2])
0x1ba: Pop(1)
0x1bb: Pop(0); Push((bool) Stack[-1] == 0)
0x1bc: IF (Stack[-1] == 0) GOTO 0x1be; Pop(1)

0x1bd: GOTO 0x1c5

0x1be: GOTO 0x1c2

0x1bf: Push(Stack[-6])
0x1c0: IF (Stack[-1] == 0) GOTO 0x1c2; Pop(1)

0x1c1: GOTO 0x1c5

0x1c2: Push((int) 1)
0x1c3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x1c4: GOTO 0x18f

0x1c5: Return(); Pop(14)

0x1c6: PushEmpty(bool, bool)
0x1c7: @ IsLoaded(Stack[-1])
0x1c8: Pop(0)
0x1c9: Stack[-3] = Stack[-1]
0x1ca: Return(); Pop(2)

0x1cb: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool)
0x1cc: @@ GetPosition(Stack[-7])
0x1cd: Pop(0)
0x1ce: @@ GetEyesHeight(Stack[-8])
0x1cf: Pop(0)
0x1d0: Push(CvectorIndex(Stack[-7], 1))
0x1d1: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1d2: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x1d3: @ GetPosition(Stack[-6])
0x1d4: Pop(0)
0x1d5: @ GetEyesHeight(Stack[-8])
0x1d6: Pop(0)
0x1d7: Push(CvectorIndex(Stack[-6], 1))
0x1d8: Stack[-1] = Stack[-1] + Stack[-9]; Pop(0);
0x1d9: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x1da: Stack[-5] = Stack[-7] - Stack[-6]; Pop(0);
0x1db: Push(CvectorIndex(Stack[-5], 1))
0x1dc: Stack[-1] = (int) 0
0x1dd: CvectorIndex(Stack[-6], 1) = Stack[-1];
0x1de: Pop(0); Push(Stack[-5] | Stack[-5]);
0x1df: Pop(1); Push(Sqrt(Stack[-1]))
0x1e0: Stack[-6] = Stack[-6] / Stack[-1]; Pop(1);
0x1e1: Stack[-4] = -Stack[-5]; Pop(0);
0x1e2: Push((int) 70)
0x1e3: Pop(1); Push(Stack[-6] * Stack[-1]);
0x1e4: PushEmpty(cvector, cvector)
0x1e5: Push(CVector(0.0, 1.0, 0.0))
0x1e6: Stack[-2] = Stack[-8] ^ Stack[-1]; Pop(1);
0x1e7: Call 0x220

0x1e8: Pop(1)
0x1e9: Push((int) 25)
0x1ea: Pop(2); Push(Stack[-2] * Stack[-1]);
0x1eb: Pop(2); Push(Stack[-2] + Stack[-1]);
0x1ec: Push(CVector(0.0, 10.0, 0.0))
0x1ed: Stack[-5] = Stack[-2] - Stack[-1]; Pop(2);
0x1ee: Stack[-2] = Stack[-6] + Stack[-3]; Pop(0);
0x1ef: @ IsOverrideActive(Stack[-1])
0x1f0: Pop(0)
0x1f1: Push(Stack[-1])
0x1f2: IF (Stack[-1] == 0) GOTO 0x1f5; Pop(1)

0x1f3: Stack[-18] = (bool) 0
0x1f4: Return(); Pop(16)

0x1f5: @ StopWorld()
0x1f6: Pop(0)
0x1f7: @ CameraTransit(Stack[-2], Stack[-4])
0x1f8: Pop(0)
0x1f9: Push(CvectorIndex(Stack[-3], 0))
0x1fa: Push(CvectorIndex(Stack[-4], 2))
0x1fb: @ Rotate(Stack[-2], Stack[-1])
0x1fc: Pop(2)
0x1fd: @ CameraWaitForPlayFinish()
0x1fe: Pop(0)
0x1ff: @ ResumeWorld()
0x200: Pop(0)
0x201: Stack[-18] = (bool) 1
0x202: Return(); Pop(16)

0x203: PushEmpty()
0x204: @ CameraSwitchToNormal()
0x205: Pop(0)
0x206: Return(); Pop(0)

0x207: PushEmpty(float, float, float, float)
0x208: Push("playing ")
0x209: Pop(1); Push(Stack[-1] + Stack[-6]);
0x20a: @ Trace(Stack[-1])
0x20b: Pop(1)
0x20c: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x20d: Pop(0)
0x20e: @ lshPlayAnimation(Stack[-2], Stack[-1])
0x20f: Pop(0)
0x210: Push("start: ")
0x211: Pop(1); Push(Stack[-1] + Stack[-3]);
0x212: @ Trace(Stack[-1])
0x213: Pop(1)
0x214: Push("end: ")
0x215: Pop(1); Push(Stack[-1] + Stack[-2]);
0x216: @ Trace(Stack[-1])
0x217: Pop(1)
0x218: Return(); Pop(4)

0x219: PushEmpty(bool)
0x21a: Call 0x432

0x21b: Pop(0)
0x21c: IF (Stack[-1] == 0) GOTO 0x21f; Pop(1)

0x21d: @ lshStopSpeech()
0x21e: Pop(0)
0x21f: Return(); Pop(0)

0x220: PushEmpty(float, float)
0x221: Pop(0); Push(Stack[-3] | Stack[-3]);
0x222: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x223: Push((float)0.0)
0x224: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x225: IF (Stack[-1] == 0) GOTO 0x228; Pop(1)

0x226: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x227: Return(); Pop(2)

0x228: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x229: Return(); Pop(2)

0x22a: PushEmpty(int, bool, int, bool)
0x22b: @ GetInvItemByName(Stack[-2], Stack[-5])
0x22c: Pop(0)
0x22d: @@ HasItem(Stack[-2], Stack[-1])
0x22e: Pop(0)
0x22f: Stack[-7] = Stack[-1]
0x230: Return(); Pop(4)

0x231: PushEmpty(object, object)
0x232: @ FindActor(Stack[-1], Stack[-5])
0x233: Pop(0)
0x234: Pop(0); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x238; Pop(1)

0x236: Stack[-6] = (bool) 0
0x237: Return(); Pop(2)

0x238: @ Trigger(Stack[-1], Stack[-4], Stack[-3])
0x239: Pop(0)
0x23a: Stack[-6] = (bool) 1
0x23b: Return(); Pop(2)

0x23c: Stack[-1] = 0
0x23d: PushEmpty(string, string)
0x23e: Stack[-1] = "idle"
0x23f: Push(Stack[-3])
0x240: IF (Stack[-1] == 0) GOTO 0x242; Pop(1)

0x241: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x242: Stack[-4] = Stack[-1]
0x243: Return(); Pop(2)

0x244: PushEmpty(int, bool, int, bool)
0x245: Stack[-2] = (int) 0
0x246: Push("all")
0x247: PushEmpty(string, int)
0x248: Stack[-1] = Stack[-5]
0x249: Call 0x23d

0x24a: Pop(1)
0x24b: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x24c: Pop(2)
0x24d: Pop(0); Push((bool) Stack[-1] == 0)
0x24e: IF (Stack[-1] == 0) GOTO 0x250; Pop(1)

0x24f: GOTO 0x253

0x250: Push((int) 1)
0x251: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x252: GOTO 0x246

0x253: Stack[-5] = Stack[-2]
0x254: Return(); Pop(4)

0x255: PushEmpty()
0x256: Push("playsound")
0x257: Push("giveitem")
0x258: @ TriggerWorld(Stack[-2], Stack[-1])
0x259: Pop(2)
0x25a: Return(); Pop(0)

0x25b: PushEmpty(string, string)
0x25c: Push("npc")
0x25d: @ GetProperty(Stack[-1], Stack[-2])
0x25e: Pop(1)
0x25f: Push("oo")
0x260: Pop(1); Push(Stack[-1] + Stack[-2]);
0x261: Push("1")
0x262: Pop(2); Push(Stack[-2] + Stack[-1]);
0x263: Push((int) 1)
0x264: @ SetVariable(Stack[-2], Stack[-1])
0x265: Pop(2)
0x266: Return(); Pop(2)

0x267: PushEmpty(int, int)
0x268: Push("powder")
0x269: Push((int) 1)
0x26a: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x26b: Pop(2)
0x26c: Return(); Pop(2)

0x26d: PushEmpty(int, int)
0x26e: Push("burah_serum")
0x26f: Push((int) 1)
0x270: @@ RemoveItemByType(Stack[-3], Stack[-2], Stack[-1])
0x271: Pop(2)
0x272: Return(); Pop(2)

0x273: PushEmpty(string, string)
0x274: Push("npc")
0x275: @ GetProperty(Stack[-1], Stack[-2])
0x276: Pop(1)
0x277: PushEmpty(bool, string, string, string)
0x278: Stack[-3] = "volonteers_danko"
0x279: Stack[-2] = "rescue"
0x27a: Stack[-1] = Stack[-5]
0x27b: Call 0x231

0x27c: Pop(4)
0x27d: Return(); Pop(2)

0x27e: PushEmpty()
0x27f: PushEmpty(bool, object, string)
0x280: Stack[-2] = Stack[-4]
0x281: Stack[-1] = "burah_serum"
0x282: Call 0x22a

0x283: Pop(2)
0x284: IF (Stack[-1] == 0) GOTO 0x287; Pop(1)

0x285: Stack[-2] = (bool) 1
0x286: Return(); Pop(0)

0x287: Stack[-2] = (bool) 0
0x288: Return(); Pop(0)

0x289: PushEmpty()
0x28a: PushEmpty(bool, object, string)
0x28b: Stack[-2] = Stack[-4]
0x28c: Stack[-1] = "powder"
0x28d: Call 0x22a

0x28e: Pop(2)
0x28f: IF (Stack[-1] == 0) GOTO 0x292; Pop(1)

0x290: Stack[-2] = (bool) 1
0x291: Return(); Pop(0)

0x292: Stack[-2] = (bool) 0
0x293: Return(); Pop(0)

0x294: PushEmpty()
0x295: PushEmpty(bool, object)
0x296: Stack[-1] = Stack[-3]
0x297: Call 0x29e

0x298: Pop(1)
0x299: IF (Stack[-1] == 0) GOTO 0x29c; Pop(1)

0x29a: Stack[-2] = (bool) 1
0x29b: Return(); Pop(0)

0x29c: Stack[-2] = (bool) 0
0x29d: Return(); Pop(0)

0x29e: PushEmpty(string, int, string, int)
0x29f: Push("npc")
0x2a0: @ GetProperty(Stack[-1], Stack[-3])
0x2a1: Pop(1)
0x2a2: Push("oo")
0x2a3: Pop(1); Push(Stack[-1] + Stack[-3]);
0x2a4: Push("1")
0x2a5: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2a6: @ GetVariable(Stack[-1], Stack[-2])
0x2a7: Pop(1)
0x2a8: Push((int) 0)
0x2a9: Stack[-7] = Stack[-2] == Stack[-1]; Pop(1);
0x2aa: Return(); Pop(4)

0x2ab: PushEmpty(int, int)
0x2ac: Push("player")
0x2ad: @ GetVariable(Stack[-1], Stack[-2])
0x2ae: Pop(1)
0x2af: Push((int) 0)
0x2b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b1: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2b2: Stack[-3] = (int) 200001
0x2b3: Return(); Pop(2)

0x2b4: GOTO 0x2ba

0x2b5: Push((int) 1)
0x2b6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2b7: IF (Stack[-1] == 0) GOTO 0x2ba; Pop(1)

0x2b8: Stack[-3] = (int) 200002
0x2b9: Return(); Pop(2)

0x2ba: Stack[-3] = (int) 200003
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty()
0x2bd: @ _strlwr(Stack[-1])
0x2be: Pop(0)
0x2bf: Push("alexandr")
0x2c0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c1: IF (Stack[-1] == 0) GOTO 0x2c4; Pop(1)

0x2c2: Stack[-2] = (int) 1
0x2c3: Return(); Pop(0)

0x2c4: Push("andrei")
0x2c5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2c6: IF (Stack[-1] == 0) GOTO 0x2c9; Pop(1)

0x2c7: Stack[-2] = (int) 2
0x2c8: Return(); Pop(0)

0x2c9: Push("anna")
0x2ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2cb: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cc: Stack[-2] = (int) 3
0x2cd: Return(); Pop(0)

0x2ce: Push("bigvlad")
0x2cf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d0: IF (Stack[-1] == 0) GOTO 0x2d3; Pop(1)

0x2d1: Stack[-2] = (int) 4
0x2d2: Return(); Pop(0)

0x2d3: Push("eva")
0x2d4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-2] = (int) 5
0x2d7: Return(); Pop(0)

0x2d8: Push("georg")
0x2d9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2da: IF (Stack[-1] == 0) GOTO 0x2dd; Pop(1)

0x2db: Stack[-2] = (int) 6
0x2dc: Return(); Pop(0)

0x2dd: Push("grif")
0x2de: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2df: IF (Stack[-1] == 0) GOTO 0x2e2; Pop(1)

0x2e0: Stack[-2] = (int) 7
0x2e1: Return(); Pop(0)

0x2e2: Push("han")
0x2e3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e4: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e5: Stack[-2] = (int) 8
0x2e6: Return(); Pop(0)

0x2e7: Push("julia")
0x2e8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2e9: IF (Stack[-1] == 0) GOTO 0x2ec; Pop(1)

0x2ea: Stack[-2] = (int) 9
0x2eb: Return(); Pop(0)

0x2ec: Push("kapella")
0x2ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2ee: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ef: Stack[-2] = (int) 10
0x2f0: Return(); Pop(0)

0x2f1: Push("katerina")
0x2f2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f3: IF (Stack[-1] == 0) GOTO 0x2f6; Pop(1)

0x2f4: Stack[-2] = (int) 11
0x2f5: Return(); Pop(0)

0x2f6: Push("klara")
0x2f7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2f8: IF (Stack[-1] == 0) GOTO 0x2fb; Pop(1)

0x2f9: Stack[-2] = (int) 12
0x2fa: Return(); Pop(0)

0x2fb: Push("lara")
0x2fc: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x2fd: IF (Stack[-1] == 0) GOTO 0x300; Pop(1)

0x2fe: Stack[-2] = (int) 13
0x2ff: Return(); Pop(0)

0x300: Push("laska")
0x301: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x302: IF (Stack[-1] == 0) GOTO 0x305; Pop(1)

0x303: Stack[-2] = (int) 14
0x304: Return(); Pop(0)

0x305: Push("maria")
0x306: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x307: IF (Stack[-1] == 0) GOTO 0x30a; Pop(1)

0x308: Stack[-2] = (int) 15
0x309: Return(); Pop(0)

0x30a: Push("mark")
0x30b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x30f; Pop(1)

0x30d: Stack[-2] = (int) 16
0x30e: Return(); Pop(0)

0x30f: Push("mat")
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x314; Pop(1)

0x312: Stack[-2] = (int) 17
0x313: Return(); Pop(0)

0x314: Push("mishka")
0x315: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x316: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x317: Stack[-2] = (int) 18
0x318: Return(); Pop(0)

0x319: Push("mladvlad")
0x31a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x31b: IF (Stack[-1] == 0) GOTO 0x31e; Pop(1)

0x31c: Stack[-2] = (int) 19
0x31d: Return(); Pop(0)

0x31e: Push("notkin")
0x31f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x320: IF (Stack[-1] == 0) GOTO 0x323; Pop(1)

0x321: Stack[-2] = (int) 20
0x322: Return(); Pop(0)

0x323: Push("ospina")
0x324: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x325: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x326: Stack[-2] = (int) 21
0x327: Return(); Pop(0)

0x328: Push("petr")
0x329: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32a: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x32b: Stack[-2] = (int) 22
0x32c: Return(); Pop(0)

0x32d: Push("rubin")
0x32e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-2] = (int) 23
0x331: Return(); Pop(0)

0x332: Push("spi4ka")
0x333: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x334: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x335: Stack[-2] = (int) 24
0x336: Return(); Pop(0)

0x337: Push("starshina")
0x338: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x339: IF (Stack[-1] == 0) GOTO 0x33c; Pop(1)

0x33a: Stack[-2] = (int) 25
0x33b: Return(); Pop(0)

0x33c: Push("viktor")
0x33d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: Stack[-2] = (int) 26
0x340: Return(); Pop(0)

0x341: Push("wasted_woman")
0x342: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x343: IF (Stack[-1] == 0) GOTO 0x346; Pop(1)

0x344: Stack[-2] = (int) 27
0x345: Return(); Pop(0)

0x346: Push("wasted_male")
0x347: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-2] = (int) 28
0x34a: Return(); Pop(0)

0x34b: Push("alkash")
0x34c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-2] = (int) 29
0x34f: Return(); Pop(0)

0x350: Push("boy")
0x351: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x355; Pop(1)

0x353: Stack[-2] = (int) 30
0x354: Return(); Pop(0)

0x355: Push("girl")
0x356: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x357: IF (Stack[-1] == 0) GOTO 0x35a; Pop(1)

0x358: Stack[-2] = (int) 31
0x359: Return(); Pop(0)

0x35a: Push("littleboy")
0x35b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x35c: IF (Stack[-1] == 0) GOTO 0x35f; Pop(1)

0x35d: Stack[-2] = (int) 32
0x35e: Return(); Pop(0)

0x35f: Push("littlegirl")
0x360: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x361: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x362: Stack[-2] = (int) 33
0x363: Return(); Pop(0)

0x364: Push("butcher")
0x365: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-2] = (int) 34
0x368: Return(); Pop(0)

0x369: Push("dohodyaga")
0x36a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36b: IF (Stack[-1] == 0) GOTO 0x36e; Pop(1)

0x36c: Stack[-2] = (int) 35
0x36d: Return(); Pop(0)

0x36e: Push("unosha")
0x36f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x370: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x371: Stack[-2] = (int) 36
0x372: Return(); Pop(0)

0x373: Push("vaxxabit")
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-2] = (int) 37
0x377: Return(); Pop(0)

0x378: Push("vaxxabitka")
0x379: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37a: IF (Stack[-1] == 0) GOTO 0x37d; Pop(1)

0x37b: Stack[-2] = (int) 38
0x37c: Return(); Pop(0)

0x37d: Push("woman")
0x37e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x37f: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x380: Stack[-2] = (int) 39
0x381: Return(); Pop(0)

0x382: Push("worker")
0x383: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x384: IF (Stack[-1] == 0) GOTO 0x387; Pop(1)

0x385: Stack[-2] = (int) 40
0x386: Return(); Pop(0)

0x387: Push("whitemask")
0x388: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x389: IF (Stack[-1] == 0) GOTO 0x38c; Pop(1)

0x38a: Stack[-2] = (int) 42
0x38b: Return(); Pop(0)

0x38c: Push("birdmask")
0x38d: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x38e: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38f: Stack[-2] = (int) 43
0x390: Return(); Pop(0)

0x391: Push("birdmask")
0x392: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x393: IF (Stack[-1] == 0) GOTO 0x396; Pop(1)

0x394: Stack[-2] = (int) 44
0x395: Return(); Pop(0)

0x396: Push("patrol")
0x397: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x398: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x399: Stack[-2] = (int) 46
0x39a: Return(); Pop(0)

0x39b: Push("danko")
0x39c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3a0; Pop(1)

0x39e: Stack[-2] = (int) 47
0x39f: Return(); Pop(0)

0x3a0: Push("alkash_d")
0x3a1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a5; Pop(1)

0x3a3: Stack[-2] = (int) 48
0x3a4: Return(); Pop(0)

0x3a5: Push("boy_d")
0x3a6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3a7: IF (Stack[-1] == 0) GOTO 0x3aa; Pop(1)

0x3a8: Stack[-2] = (int) 49
0x3a9: Return(); Pop(0)

0x3aa: Push("butcher_d")
0x3ab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ac: IF (Stack[-1] == 0) GOTO 0x3af; Pop(1)

0x3ad: Stack[-2] = (int) 50
0x3ae: Return(); Pop(0)

0x3af: Push("dohodyaga_d")
0x3b0: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b1: IF (Stack[-1] == 0) GOTO 0x3b4; Pop(1)

0x3b2: Stack[-2] = (int) 51
0x3b3: Return(); Pop(0)

0x3b4: Push("girl_d")
0x3b5: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3b6: IF (Stack[-1] == 0) GOTO 0x3b9; Pop(1)

0x3b7: Stack[-2] = (int) 52
0x3b8: Return(); Pop(0)

0x3b9: Push("littleboy_d")
0x3ba: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3bb: IF (Stack[-1] == 0) GOTO 0x3be; Pop(1)

0x3bc: Stack[-2] = (int) 53
0x3bd: Return(); Pop(0)

0x3be: Push("littlegirl_d")
0x3bf: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c0: IF (Stack[-1] == 0) GOTO 0x3c3; Pop(1)

0x3c1: Stack[-2] = (int) 54
0x3c2: Return(); Pop(0)

0x3c3: Push("unosha2")
0x3c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3c5: IF (Stack[-1] == 0) GOTO 0x3c8; Pop(1)

0x3c6: Stack[-2] = (int) 55
0x3c7: Return(); Pop(0)

0x3c8: Push("unosha_d")
0x3c9: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ca: IF (Stack[-1] == 0) GOTO 0x3cd; Pop(1)

0x3cb: Stack[-2] = (int) 56
0x3cc: Return(); Pop(0)

0x3cd: Push("unosha2_d")
0x3ce: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d2; Pop(1)

0x3d0: Stack[-2] = (int) 57
0x3d1: Return(); Pop(0)

0x3d2: Push("vaxxabit_d")
0x3d3: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d4: IF (Stack[-1] == 0) GOTO 0x3d7; Pop(1)

0x3d5: Stack[-2] = (int) 58
0x3d6: Return(); Pop(0)

0x3d7: Push("vaxxabitka_d")
0x3d8: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3d9: IF (Stack[-1] == 0) GOTO 0x3dc; Pop(1)

0x3da: Stack[-2] = (int) 59
0x3db: Return(); Pop(0)

0x3dc: Push("wasted_male_d")
0x3dd: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3de: IF (Stack[-1] == 0) GOTO 0x3e1; Pop(1)

0x3df: Stack[-2] = (int) 60
0x3e0: Return(); Pop(0)

0x3e1: Push("wasted_woman_d")
0x3e2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e3: IF (Stack[-1] == 0) GOTO 0x3e6; Pop(1)

0x3e4: Stack[-2] = (int) 61
0x3e5: Return(); Pop(0)

0x3e6: Push("woman_d")
0x3e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3eb; Pop(1)

0x3e9: Stack[-2] = (int) 62
0x3ea: Return(); Pop(0)

0x3eb: Push("worker2")
0x3ec: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3ed: IF (Stack[-1] == 0) GOTO 0x3f0; Pop(1)

0x3ee: Stack[-2] = (int) 63
0x3ef: Return(); Pop(0)

0x3f0: Push("worker_d")
0x3f1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f2: IF (Stack[-1] == 0) GOTO 0x3f5; Pop(1)

0x3f3: Stack[-2] = (int) 64
0x3f4: Return(); Pop(0)

0x3f5: Push("worker2_d")
0x3f6: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f7: IF (Stack[-1] == 0) GOTO 0x3fa; Pop(1)

0x3f8: Stack[-2] = (int) 65
0x3f9: Return(); Pop(0)

0x3fa: Push("burah")
0x3fb: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3fc: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3fd: Stack[-2] = (int) 66
0x3fe: Return(); Pop(0)

0x3ff: Push("gorbun_daughter")
0x400: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x404; Pop(1)

0x402: Stack[-2] = (int) 67
0x403: Return(); Pop(0)

0x404: Push("gorbun")
0x405: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-2] = (int) 68
0x408: Return(); Pop(0)

0x409: Push("albinos")
0x40a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-2] = (int) 69
0x40d: Return(); Pop(0)

0x40e: Push("aglaja")
0x40f: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x410: IF (Stack[-1] == 0) GOTO 0x413; Pop(1)

0x411: Stack[-2] = (int) 70
0x412: Return(); Pop(0)

0x413: Push("nude")
0x414: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x415: IF (Stack[-1] == 0) GOTO 0x418; Pop(1)

0x416: Stack[-2] = (int) 71
0x417: Return(); Pop(0)

0x418: Push("block")
0x419: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41a: IF (Stack[-1] == 0) GOTO 0x41d; Pop(1)

0x41b: Stack[-2] = (int) 72
0x41c: Return(); Pop(0)

0x41d: Push("officer")
0x41e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x41f: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x420: Stack[-2] = (int) 73
0x421: Return(); Pop(0)

0x422: Stack[-2] = (int) -1
0x423: Return(); Pop(0)

0x424: PushEmpty(int, int)
0x425: Push("vol_")
0x426: Pop(1); Push(Stack[-1] + Stack[-4]);
0x427: @ GetVariable(Stack[-1], Stack[-2])
0x428: Pop(1)
0x429: Push((int) 4)
0x42a: Pop(1); Push(Stack[-2] & Stack[-1]);
0x42b: Push((int) 0)
0x42c: Stack[-6] = Stack[-2] != Stack[-1]; Pop(2);
0x42d: Return(); Pop(2)

0x42e: Stack[-1] = (int) 4029
0x42f: Return(); Pop(0)

0x430: Stack[-1] = "ui/NPC_Black.png"
0x431: Return(); Pop(0)

0x432: Stack[-1] = (bool) 0
0x433: Return(); Pop(0)

