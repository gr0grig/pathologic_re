GlobalVarCount = 1
	G_VAR_0 object 

Strings:
	SetNPCName
	SetNPCDescription
	SetPhoto
	SetPhoto2
	SetPlayerName
	IsDialogEnd
	GetReturnValue
	Neutral
	SetMessage
	ClearReplies
	AddReply
	all
	idle
	cleanup
	player
	head
	GetPosition
	GetEyesHeight
	Can't find lsh animation : 
	ook12Littleboy1
	branch
	ui/NPC_Citizen3.png
	ui/NPC_Citizen3_b.png

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
	rand (2 args)
	Sleep (2 args)
	RemoveActor (1 args)
	FindActor (2 args)
	SetTimer (2 args)
	KillTimer (1 args)
	UnlookAsync (1 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	StopGroup0 (0 args)
	GetPosition (1 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	LookAsync (3 args)
	lshStopSpeech (0 args)
	self (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	HasAnimation (3 args)

RunOp = 0x1b4
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa4 Vars = (int, int)
	GTASK_2 Vars = (int, int, bool, bool, object, bool, bool) Params = 0
		EVENT_0 Op = 0x1ba Vars = (object)
		EVENT_26 Op = 0x1eb Vars = (string)
		EVENT_6 Op = 0x1f3 Vars = ()
		EVENT_7 Op = 0x234 Vars = (int)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x2bc

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x37c

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x37a

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x37e

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x380

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x369

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1])
0x25: Pop(1)
0x26: Stack[-2] = (int) -1
0x27: @ IsOverrideActive(Stack[-3])
0x28: Pop(0)
0x29: Push(Stack[-3])
0x2a: IF (Stack[-1] == 0) GOTO 0x2d; Pop(1)

0x2b: Stack[-10] = (int) -2
0x2c: Return(); Pop(8)

0x2d: @ DoDialog(Stack[-4])
0x2e: Pop(0)
0x2f: PushEmpty(object, object)
0x30: Stack[-2] = Stack[-11]
0x31: Stack[-1] = Stack[-6]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1])
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1])
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-1] = Stack[-10]
0x41: Call2 0x300

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2])
0x46: Pop(0)
0x47: Stack[-10] = Stack[-2]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x70; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral"
0x52: Call2 0x8e

0x53: Pop(1)
0x54: Push((int) 541166)
0x55: @@ SetMessage(Stack[-1])
0x56: Pop(1)
0x57: @@ ClearReplies()
0x58: Pop(0)
0x59: PushEmpty(bool, object)
0x5a: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x5b: Call2 0x35d

0x5c: Pop(1)
0x5d: IF (Stack[-1] == 0) GOTO 0x63; Pop(1)

0x5e: Push((int) 542863)
0x5f: Push((int) 45290)
0x60: Push((int) 45289)
0x61: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x62: Pop(3)
0x63: Push((int) 542768)
0x64: Push((int) -1)
0x65: Push((int) 45189)
0x66: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x67: Pop(3)
0x68: Push((int) 542791)
0x69: Push((int) -1)
0x6a: Push((int) 45213)
0x6b: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6c: Pop(3)
0x6d: GOTO 0x70

0x6e: Return(); Pop(0)

0x6f: GOTO 0x4e

0x70: PushEmpty(bool)
0x71: Call2 0x382

0x72: Pop(0)
0x73: IF (Stack[-1] == 0) GOTO 0x7f; Pop(1)

0x74: @ lshWaitForAnimEnd()
0x75: Pop(0)
0x76: Push( Stack[3 + Tasks[-1].StackPointer] )
0x77: IF (Stack[-1] == 0) GOTO 0x79; Pop(1)

0x78: GOTO 0x7e

0x79: PushEmpty(string)
0x7a: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7b: Call2 0x311

0x7c: Pop(1)
0x7d: GOTO 0x74

0x7e: GOTO 0x8d

0x7f: Push("all")
0x80: Push("idle")
0x81: @ PlayAnimation(Stack[-2], Stack[-1])
0x82: Pop(2)
0x83: @ WaitForAnimEnd()
0x84: Pop(0)
0x85: Push( Stack[3 + Tasks[-1].StackPointer] )
0x86: IF (Stack[-1] == 0) GOTO 0x88; Pop(1)

0x87: GOTO 0x8d

0x88: Push("all")
0x89: Push("idle")
0x8a: @ PlayAnimation(Stack[-2], Stack[-1])
0x8b: Pop(2)
0x8c: GOTO 0x83

0x8d: Return(); Pop(0)

0x8e: PushEmpty()
0x8f: PushEmpty(bool)
0x90: Call2 0x382

0x91: Pop(0)
0x92: Pop(1); Push((bool) Stack[-1] == 0)
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x96: IF (Stack[-1] == 0) GOTO 0x98; Pop(1)

0x97: Return(); Pop(0)

0x98: PushEmpty(string, bool)
0x99: Stack[-2] = Stack[-3]
0x9a: Push("")
0x9b: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9c: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9d: Stack[-1] = (bool) 0
0x9e: GOTO 0xa0

0x9f: Stack[-1] = (bool) 1
0xa0: Call2 0x321

0xa1: Pop(2)
0xa2: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa3: Return(); Pop(0)

0xa4: PushEmpty()
0xa5: Push((int) 1)
0xa6: IF (Stack[-1] == 0) GOTO 0x1b3; Pop(1)

0xa7: PushEmpty()
0xa8: Call2 0x33b

0xa9: Pop(0)
0xaa: Push((int) 45289)
0xab: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xac: IF (Stack[-1] == 0) GOTO 0xb2; Pop(1)

0xad: PushEmpty(object, object)
0xae: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaf: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb0: Call2 0x357

0xb1: Pop(2)
0xb2: Push((int) 43292)
0xb3: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb4: IF (Stack[-1] == 0) GOTO 0xd3; Pop(1)

0xb5: PushEmpty(string)
0xb6: Stack[-1] = "Neutral"
0xb7: Call2 0x8e

0xb8: Pop(1)
0xb9: Push((int) 541166)
0xba: @@ SetMessage(Stack[-1])
0xbb: Pop(1)
0xbc: @@ ClearReplies()
0xbd: Pop(0)
0xbe: PushEmpty(bool, object)
0xbf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc0: Call2 0x35d

0xc1: Pop(1)
0xc2: IF (Stack[-1] == 0) GOTO 0xc8; Pop(1)

0xc3: Push((int) 542863)
0xc4: Push((int) 45290)
0xc5: Push((int) 45289)
0xc6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc7: Pop(3)
0xc8: Push((int) 542768)
0xc9: Push((int) -1)
0xca: Push((int) 45189)
0xcb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xcc: Pop(3)
0xcd: Push((int) 542791)
0xce: Push((int) -1)
0xcf: Push((int) 45213)
0xd0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xd1: Pop(3)
0xd2: Return(); Pop(0)

0xd3: Push((int) 45290)
0xd4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd5: IF (Stack[-1] == 0) GOTO 0xea; Pop(1)

0xd6: PushEmpty(string)
0xd7: Stack[-1] = "Neutral"
0xd8: Call2 0x8e

0xd9: Pop(1)
0xda: Push((int) 542864)
0xdb: @@ SetMessage(Stack[-1])
0xdc: Pop(1)
0xdd: @@ ClearReplies()
0xde: Pop(0)
0xdf: Push((int) 542865)
0xe0: Push((int) 45297)
0xe1: Push((int) 45291)
0xe2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe3: Pop(3)
0xe4: Push((int) 542866)
0xe5: Push((int) 45293)
0xe6: Push((int) 45292)
0xe7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe8: Pop(3)
0xe9: Return(); Pop(0)

0xea: Push((int) 45293)
0xeb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xec: IF (Stack[-1] == 0) GOTO 0x106; Pop(1)

0xed: PushEmpty(string)
0xee: Stack[-1] = "Neutral"
0xef: Call2 0x8e

0xf0: Pop(1)
0xf1: Push((int) 542867)
0xf2: @@ SetMessage(Stack[-1])
0xf3: Pop(1)
0xf4: @@ ClearReplies()
0xf5: Pop(0)
0xf6: Push((int) 542868)
0xf7: Push((int) -1)
0xf8: Push((int) 45294)
0xf9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfa: Pop(3)
0xfb: Push((int) 542869)
0xfc: Push((int) -1)
0xfd: Push((int) 45295)
0xfe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xff: Pop(3)
0x100: Push((int) 542870)
0x101: Push((int) -1)
0x102: Push((int) 45296)
0x103: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x104: Pop(3)
0x105: Return(); Pop(0)

0x106: Push((int) 45297)
0x107: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x108: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x109: PushEmpty(string)
0x10a: Stack[-1] = "Neutral"
0x10b: Call2 0x8e

0x10c: Pop(1)
0x10d: Push((int) 542871)
0x10e: @@ SetMessage(Stack[-1])
0x10f: Pop(1)
0x110: @@ ClearReplies()
0x111: Pop(0)
0x112: Push((int) 542872)
0x113: Push((int) 45300)
0x114: Push((int) 45298)
0x115: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x116: Pop(3)
0x117: Push((int) 542873)
0x118: Push((int) -1)
0x119: Push((int) 45299)
0x11a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x11b: Pop(3)
0x11c: Return(); Pop(0)

0x11d: Push((int) 45300)
0x11e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x11f: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x120: PushEmpty(string)
0x121: Stack[-1] = "Neutral"
0x122: Call2 0x8e

0x123: Pop(1)
0x124: Push((int) 542874)
0x125: @@ SetMessage(Stack[-1])
0x126: Pop(1)
0x127: @@ ClearReplies()
0x128: Pop(0)
0x129: Push((int) 542875)
0x12a: Push((int) 45311)
0x12b: Push((int) 45301)
0x12c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12d: Pop(3)
0x12e: Push((int) 542876)
0x12f: Push((int) 45303)
0x130: Push((int) 45302)
0x131: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x132: Pop(3)
0x133: Return(); Pop(0)

0x134: Push((int) 45303)
0x135: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x136: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0x137: PushEmpty(string)
0x138: Stack[-1] = "Neutral"
0x139: Call2 0x8e

0x13a: Pop(1)
0x13b: Push((int) 542877)
0x13c: @@ SetMessage(Stack[-1])
0x13d: Pop(1)
0x13e: @@ ClearReplies()
0x13f: Pop(0)
0x140: Push((int) 542878)
0x141: Push((int) 45305)
0x142: Push((int) 45304)
0x143: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x144: Pop(3)
0x145: Push((int) 542882)
0x146: Push((int) 45309)
0x147: Push((int) 45308)
0x148: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x149: Pop(3)
0x14a: Return(); Pop(0)

0x14b: Push((int) 45309)
0x14c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x14d: IF (Stack[-1] == 0) GOTO 0x15d; Pop(1)

0x14e: PushEmpty(string)
0x14f: Stack[-1] = "Neutral"
0x150: Call2 0x8e

0x151: Pop(1)
0x152: Push((int) 542883)
0x153: @@ SetMessage(Stack[-1])
0x154: Pop(1)
0x155: @@ ClearReplies()
0x156: Pop(0)
0x157: Push((int) 542884)
0x158: Push((int) -1)
0x159: Push((int) 45310)
0x15a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15b: Pop(3)
0x15c: Return(); Pop(0)

0x15d: Push((int) 45305)
0x15e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x15f: IF (Stack[-1] == 0) GOTO 0x174; Pop(1)

0x160: PushEmpty(string)
0x161: Stack[-1] = "Neutral"
0x162: Call2 0x8e

0x163: Pop(1)
0x164: Push((int) 542879)
0x165: @@ SetMessage(Stack[-1])
0x166: Pop(1)
0x167: @@ ClearReplies()
0x168: Pop(0)
0x169: Push((int) 542880)
0x16a: Push((int) -1)
0x16b: Push((int) 45306)
0x16c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x16d: Pop(3)
0x16e: Push((int) 542881)
0x16f: Push((int) -1)
0x170: Push((int) 45307)
0x171: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x172: Pop(3)
0x173: Return(); Pop(0)

0x174: Push((int) 45311)
0x175: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x176: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x177: PushEmpty(string)
0x178: Stack[-1] = "Neutral"
0x179: Call2 0x8e

0x17a: Pop(1)
0x17b: Push((int) 542885)
0x17c: @@ SetMessage(Stack[-1])
0x17d: Pop(1)
0x17e: @@ ClearReplies()
0x17f: Pop(0)
0x180: Push((int) 542886)
0x181: Push((int) 45314)
0x182: Push((int) 45312)
0x183: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x184: Pop(3)
0x185: Push((int) 542887)
0x186: Push((int) -1)
0x187: Push((int) 45313)
0x188: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x189: Pop(3)
0x18a: Return(); Pop(0)

0x18b: Push((int) 45314)
0x18c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x18d: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x18e: PushEmpty(string)
0x18f: Stack[-1] = "Neutral"
0x190: Call2 0x8e

0x191: Pop(1)
0x192: Push((int) 542888)
0x193: @@ SetMessage(Stack[-1])
0x194: Pop(1)
0x195: @@ ClearReplies()
0x196: Pop(0)
0x197: Push((int) 542889)
0x198: Push((int) -1)
0x199: Push((int) 45315)
0x19a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19b: Pop(3)
0x19c: Push((int) 542890)
0x19d: Push((int) -1)
0x19e: Push((int) 45316)
0x19f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a0: Pop(3)
0x1a1: Push((int) 542891)
0x1a2: Push((int) -1)
0x1a3: Push((int) 45317)
0x1a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a5: Pop(3)
0x1a6: Return(); Pop(0)

0x1a7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a8: PushEmpty(bool)
0x1a9: Call2 0x382

0x1aa: Pop(0)
0x1ab: IF (Stack[-1] == 0) GOTO 0x1af; Pop(1)

0x1ac: @ lshStopAnimation()
0x1ad: Pop(0)
0x1ae: GOTO 0x1b1

0x1af: @ StopAnimation()
0x1b0: Pop(0)
0x1b1: Return(); Pop(0)

0x1b2: GOTO 0xa5

0x1b3: Return(); Pop(0)

0x1b4: PushEmpty(float, float)
0x1b5: Stack[-2] = (int) 300
0x1b6: Stack[-1] = (int) 100
0x1b7: Call2 0x1c5

0x1b8: Pop(2)
0x1b9: Return(); Pop(0)

0x1ba: PushEmpty()
0x1bb: PushEmpty()
0x1bc: Call2 0x24b

0x1bd: Pop(0)
0x1be: PushEmpty(int, object)
0x1bf: Stack[-1] = Stack[-3]
0x1c0: Push(-2, 1); TaskCall(0)
0x1c1: Call2 0x0

0x1c2: Pop(-2, 1); TaskReturn
0x1c3: Pop(2)
0x1c4: Return(); Pop(0)

0x1c5: PushEmpty(float, bool, float, bool)
0x1c6: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1c7: Push((int) 3)
0x1c8: @ rand(Stack[-3], Stack[-1])
0x1c9: Pop(1)
0x1ca: Push((int) 3)
0x1cb: Pop(1); Push(Stack[-3] + Stack[-1]);
0x1cc: @ Sleep(Stack[-1], Stack[-2])
0x1cd: Pop(1)
0x1ce: Stack[6 + Tasks[-1].StackPointer] = (bool)1
0x1cf: PushEmpty(float, float)
0x1d0: Stack[-2] = Stack[-8]
0x1d1: Stack[-1] = Stack[-7]
0x1d2: Call2 0x20a

0x1d3: Pop(2)
0x1d4: Stack[6 + Tasks[-1].StackPointer] = (bool)0
0x1d5: GOTO 0x1c7

0x1d6: Return(); Pop(4)

0x1d7: Stack[5 + Tasks[-1].StackPointer] = (bool)1
0x1d8: PushEmpty(bool)
0x1d9: Stack[-1] = (bool) 0
0x1da: PushEmpty(bool)
0x1db: Call2 0x2b7

0x1dc: Pop(0)
0x1dd: Pop(1); Push((bool) Stack[-1] == 0)
0x1de: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1df: PushEmpty(bool)
0x1e0: Call2 0x208

0x1e1: Pop(0)
0x1e2: IF (Stack[-1] == 0) GOTO 0x1e4; Pop(1)

0x1e3: Stack[-1] = (bool) 1
0x1e4: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1e5: PushEmpty(object)
0x1e6: Call2 0x342

0x1e7: Pop(0)
0x1e8: @ RemoveActor(Stack[-1])
0x1e9: Pop(1)
0x1ea: Return(); Pop(0)

0x1eb: PushEmpty()
0x1ec: Push("cleanup")
0x1ed: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: PushEmpty()
0x1f0: Call2 0x1d7

0x1f1: Pop(0)
0x1f2: Return(); Pop(0)

0x1f3: Push( Stack[6 + Tasks[-1].StackPointer] )
0x1f4: IF (Stack[-1] == 0) GOTO 0x1f8; Pop(1)

0x1f5: PushEmpty()
0x1f6: Call2 0x24b

0x1f7: Pop(0)
0x1f8: PushEmpty(bool)
0x1f9: Stack[-1] = (bool) 0
0x1fa: Push( Stack[5 + Tasks[-1].StackPointer] )
0x1fb: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1fc: PushEmpty(bool)
0x1fd: Call2 0x208

0x1fe: Pop(0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x200: Stack[-1] = (bool) 1
0x201: IF (Stack[-1] == 0) GOTO 0x207; Pop(1)

0x202: PushEmpty(object)
0x203: Call2 0x342

0x204: Pop(0)
0x205: @ RemoveActor(Stack[-1])
0x206: Pop(1)
0x207: Return(); Pop(0)

0x208: Stack[-1] = (bool) 1
0x209: Return(); Pop(0)

0x20a: PushEmpty()
0x20b: PushEmpty(bool)
0x20c: Call2 0x2b7

0x20d: Pop(0)
0x20e: Pop(1); Push((bool) Stack[-1] == 0)
0x20f: IF (Stack[-1] == 0) GOTO 0x211; Pop(1)

0x210: Return(); Pop(0)

0x211: Push("player")
0x212: @ FindActor(Stack[-4], Stack[-1])
0x213: Pop(1)
0x214: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x215: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x216: Stack[0 + Tasks[-1].StackPointer] = Stack[-2]
0x217: Stack[1 + Tasks[-1].StackPointer] = Stack[-1]
0x218: Push((int) 10)
0x219: Push((float)1.0)
0x21a: @ SetTimer(Stack[-2], Stack[-1])
0x21b: Pop(2)
0x21c: PushEmpty()
0x21d: Call2 0x259

0x21e: Pop(0)
0x21f: Pop(0); Push((bool) Stack[3 + Tasks[-1].StackPointer] == 0)
0x220: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x221: Push((int) 10)
0x222: @ KillTimer(Stack[-1])
0x223: Pop(1)
0x224: Return(); Pop(0)

0x225: PushEmpty(float, float)
0x226: Pop(0); Push((bool) Stack[4 + Tasks[-1].StackPointer] == 0)
0x227: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x228: Stack[-3] = (bool) 0
0x229: Return(); Pop(2)

0x22a: PushEmpty(float, object)
0x22b: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x22c: Call2 0x2af

0x22d: Pop(1)
0x22e: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x22f: Push( Stack[2 + Tasks[-1].StackPointer] )
0x230: IF (Stack[-1] == 0) GOTO 0x232; Pop(1)

0x231: Stack[-1] = Stack[-1] - Stack[1 + Tasks[-1].StackPointer]; Pop(0);
0x232: Stack[-3] = Stack[-1] < Stack[0 + Tasks[-1].StackPointer]; Pop(0);
0x233: Return(); Pop(2)

0x234: PushEmpty()
0x235: Push((int) 10)
0x236: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x237: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x238: PushEmpty(bool)
0x239: Call2 0x225

0x23a: Pop(0)
0x23b: IF (Stack[-1] == 0) GOTO 0x244; Pop(1)

0x23c: Pop(0); Push((bool) Stack[2 + Tasks[-1].StackPointer] == 0)
0x23d: IF (Stack[-1] == 0) GOTO 0x243; Pop(1)

0x23e: PushEmpty(object)
0x23f: Stack[-1] = Stack[4 + Tasks[-1].StackPointer]
0x240: Call2 0x330

0x241: Pop(1)
0x242: Stack[2 + Tasks[-1].StackPointer] = (bool)1
0x243: GOTO 0x24a

0x244: Push( Stack[2 + Tasks[-1].StackPointer] )
0x245: IF (Stack[-1] == 0) GOTO 0x24a; Pop(1)

0x246: Push("head")
0x247: @ UnlookAsync(Stack[-1])
0x248: Pop(1)
0x249: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x24a: Return(); Pop(0)

0x24b: PushEmpty()
0x24c: Call2 0x2aa

0x24d: Pop(0)
0x24e: Push((int) 10)
0x24f: @ KillTimer(Stack[-1])
0x250: Pop(1)
0x251: Push( Stack[2 + Tasks[-1].StackPointer] )
0x252: IF (Stack[-1] == 0) GOTO 0x257; Pop(1)

0x253: Push("head")
0x254: @ UnlookAsync(Stack[-1])
0x255: Pop(1)
0x256: Stack[2 + Tasks[-1].StackPointer] = (bool)0
0x257: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x258: Return(); Pop(0)

0x259: PushEmpty(int, int, int, int, bool, float, bool, int, int, int, int, bool, float, bool)
0x25a: @ WaitForAnimEnd()
0x25b: Pop(0)
0x25c: PushEmpty(bool)
0x25d: Call2 0x2b7

0x25e: Pop(0)
0x25f: Pop(1); Push((bool) Stack[-1] == 0)
0x260: IF (Stack[-1] == 0) GOTO 0x262; Pop(1)

0x261: Return(); Pop(14)

0x262: PushEmpty(int)
0x263: Call2 0x38b

0x264: Stack[-8] = Stack[-1]
0x265: Pop(1)
0x266: Stack[-6] = (int) 0
0x267: PushEmpty(bool)
0x268: Stack[-1] = (bool) 0
0x269: Push((int) 5)
0x26a: Pop(1); Push((bool) Stack[-8] < Stack[-1])
0x26b: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x26c: PushEmpty(bool)
0x26d: Call2 0x2b7

0x26e: Pop(0)
0x26f: IF (Stack[-1] == 0) GOTO 0x271; Pop(1)

0x270: Stack[-1] = (bool) 1
0x271: IF (Stack[-1] == 0) GOTO 0x2a5; Pop(1)

0x272: Push((int) 3)
0x273: @ irand(Stack[-6], Stack[-1])
0x274: Pop(1)
0x275: Push((int) 0)
0x276: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x277: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x278: Push(Stack[-7])
0x279: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x27a: @ irand(Stack[-4], Stack[-7])
0x27b: Pop(0)
0x27c: Push("all")
0x27d: PushEmpty(string, int)
0x27e: Stack[-1] = Stack[-7]
0x27f: Call2 0x384

0x280: Pop(1)
0x281: @ PlayAnimation(Stack[-2], Stack[-1])
0x282: Pop(2)
0x283: @ WaitForAnimEnd(Stack[-3])
0x284: Pop(0)
0x285: Pop(0); Push((bool) Stack[-3] == 0)
0x286: IF (Stack[-1] == 0) GOTO 0x288; Pop(1)

0x287: GOTO 0x2a5

0x288: GOTO 0x29a

0x289: Push((int) 1)
0x28a: Pop(1); Push((bool) Stack[-6] == Stack[-1])
0x28b: IF (Stack[-1] == 0) GOTO 0x297; Pop(1)

0x28c: Push((int) 4)
0x28d: @ rand(Stack[-3], Stack[-1])
0x28e: Pop(1)
0x28f: Push((int) 1)
0x290: Pop(1); Push(Stack[-3] + Stack[-1]);
0x291: @ Sleep(Stack[-1], Stack[-2])
0x292: Pop(1)
0x293: Pop(0); Push((bool) Stack[-1] == 0)
0x294: IF (Stack[-1] == 0) GOTO 0x296; Pop(1)

0x295: GOTO 0x2a5

0x296: GOTO 0x29a

0x297: Push(Stack[-6])
0x298: IF (Stack[-1] == 0) GOTO 0x29a; Pop(1)

0x299: GOTO 0x2a5

0x29a: PushEmpty(bool)
0x29b: Call2 0x2a8

0x29c: Pop(0)
0x29d: Pop(1); Push((bool) Stack[-1] == 0)
0x29e: IF (Stack[-1] == 0) GOTO 0x2a0; Pop(1)

0x29f: GOTO 0x2a5

0x2a0: @ ResetAAS()
0x2a1: Pop(0)
0x2a2: Push((int) 1)
0x2a3: Stack[-7] = Stack[-7] + Stack[-1]; Pop(1);
0x2a4: GOTO 0x267

0x2a5: @ ResetAAS()
0x2a6: Pop(0)
0x2a7: Return(); Pop(14)

0x2a8: Stack[-1] = (bool) 1
0x2a9: Return(); Pop(0)

0x2aa: @ StopAnimation()
0x2ab: Pop(0)
0x2ac: @ StopGroup0()
0x2ad: Pop(0)
0x2ae: Return(); Pop(0)

0x2af: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x2b0: @ GetPosition(Stack[-3])
0x2b1: Pop(0)
0x2b2: @@ GetPosition(Stack[-2])
0x2b3: Pop(0)
0x2b4: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x2b5: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x2b6: Return(); Pop(6)

0x2b7: PushEmpty(bool, bool)
0x2b8: @ IsLoaded(Stack[-1])
0x2b9: Pop(0)
0x2ba: Stack[-3] = Stack[-1]
0x2bb: Return(); Pop(2)

0x2bc: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x2bd: @@ GetPosition(Stack[-8])
0x2be: Pop(0)
0x2bf: @@ GetEyesHeight(Stack[-9])
0x2c0: Pop(0)
0x2c1: Push(CvectorIndex(Stack[-8], 1))
0x2c2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2c3: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2c4: @ GetPosition(Stack[-7])
0x2c5: Pop(0)
0x2c6: @ GetEyesHeight(Stack[-9])
0x2c7: Pop(0)
0x2c8: Push(CvectorIndex(Stack[-7], 1))
0x2c9: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2ca: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2cb: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2cc: Push(CvectorIndex(Stack[-6], 1))
0x2cd: Stack[-1] = (int) 0
0x2ce: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2cf: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2d0: Pop(1); Push(Sqrt(Stack[-1]))
0x2d1: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2d2: Stack[-5] = -Stack[-6]; Pop(0);
0x2d3: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2d4: PushEmpty(cvector, cvector)
0x2d5: Push(CVector(0.0, 1.0, 0.0))
0x2d6: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2d7: Call2 0x348

0x2d8: Pop(1)
0x2d9: Push((int) 25)
0x2da: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2db: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2dc: Push(CVector(0.0, 10.0, 0.0))
0x2dd: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2de: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2df: @ IsOverrideActive(Stack[-2])
0x2e0: Pop(0)
0x2e1: Push(Stack[-2])
0x2e2: IF (Stack[-1] == 0) GOTO 0x2e5; Pop(1)

0x2e3: Stack[-21] = (bool) 0
0x2e4: Return(); Pop(18)

0x2e5: @ StopWorld()
0x2e6: Pop(0)
0x2e7: @ CameraTransit(Stack[-3], Stack[-5])
0x2e8: Pop(0)
0x2e9: Push(CvectorIndex(Stack[-4], 0))
0x2ea: Push(CvectorIndex(Stack[-5], 2))
0x2eb: @ Rotate(Stack[-2], Stack[-1])
0x2ec: Pop(2)
0x2ed: PushEmpty(bool)
0x2ee: Call2 0x382

0x2ef: Pop(0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f2; Pop(1)

0x2f1: GOTO 0x2fa

0x2f2: Push("head")
0x2f3: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2f4: Pop(1)
0x2f5: Push(Stack[-1])
0x2f6: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2f7: Push("head")
0x2f8: @ LookAsyncCamera(Stack[-1])
0x2f9: Pop(1)
0x2fa: @ CameraWaitForPlayFinish()
0x2fb: Pop(0)
0x2fc: @ ResumeWorld()
0x2fd: Pop(0)
0x2fe: Stack[-21] = (bool) 1
0x2ff: Return(); Pop(18)

0x300: PushEmpty(bool, bool)
0x301: @ CameraSwitchToNormal()
0x302: Pop(0)
0x303: PushEmpty(bool)
0x304: Call2 0x382

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x308; Pop(1)

0x307: GOTO 0x310

0x308: Push("head")
0x309: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x30a: Pop(1)
0x30b: Push(Stack[-1])
0x30c: IF (Stack[-1] == 0) GOTO 0x310; Pop(1)

0x30d: Push("head")
0x30e: @ UnlookAsync(Stack[-1])
0x30f: Pop(1)
0x310: Return(); Pop(2)

0x311: PushEmpty(bool, float, float, bool, float, float)
0x312: @ lshHasAnimation(Stack[-3], Stack[-7])
0x313: Pop(0)
0x314: Push(Stack[-3])
0x315: IF (Stack[-1] == 0) GOTO 0x31c; Pop(1)

0x316: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x317: Pop(0)
0x318: Push((bool) 0)
0x319: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x31a: Pop(1)
0x31b: GOTO 0x320

0x31c: Push("Can't find lsh animation : ")
0x31d: Pop(1); Push(Stack[-1] + Stack[-8]);
0x31e: @ Trace(Stack[-1])
0x31f: Pop(1)
0x320: Return(); Pop(6)

0x321: PushEmpty(bool, float, float, bool, float, float)
0x322: @ lshHasAnimation(Stack[-3], Stack[-8])
0x323: Pop(0)
0x324: Push(Stack[-3])
0x325: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x326: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x327: Pop(0)
0x328: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x329: Pop(0)
0x32a: GOTO 0x32f

0x32b: Push("Can't find lsh animation : ")
0x32c: Pop(1); Push(Stack[-1] + Stack[-9]);
0x32d: @ Trace(Stack[-1])
0x32e: Pop(1)
0x32f: Return(); Pop(6)

0x330: PushEmpty(float, cvector, float, cvector)
0x331: @@ GetEyesHeight(Stack[-2])
0x332: Pop(0)
0x333: Stack[-1] = CVector(0.0, 0.0, 0.0)
0x334: Push(CvectorIndex(Stack[-1], 1))
0x335: Stack[-1] = Stack[-3]
0x336: CvectorIndex(Stack[-2], 1) = Stack[-1];
0x337: Push("head")
0x338: @ LookAsync(Stack[-6], Stack[-1], Stack[-2])
0x339: Pop(1)
0x33a: Return(); Pop(4)

0x33b: PushEmpty(bool)
0x33c: Call2 0x382

0x33d: Pop(0)
0x33e: IF (Stack[-1] == 0) GOTO 0x341; Pop(1)

0x33f: @ lshStopSpeech()
0x340: Pop(0)
0x341: Return(); Pop(0)

0x342: PushEmpty(object, object)
0x343: @ self(Stack[-1])
0x344: Pop(0)
0x345: Stack[-3] = Stack[-1]
0x346: Return(); Pop(2)

0x347: Stack[-1] = 0
0x348: PushEmpty(float, float)
0x349: Pop(0); Push(Stack[-3] | Stack[-3]);
0x34a: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x34b: Push((float)0.0)
0x34c: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x34d: IF (Stack[-1] == 0) GOTO 0x350; Pop(1)

0x34e: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x34f: Return(); Pop(2)

0x350: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x351: Return(); Pop(2)

0x352: PushEmpty(int, int)
0x353: @ GetVariable(Stack[-3], Stack[-1])
0x354: Pop(0)
0x355: Stack[-4] = Stack[-1]
0x356: Return(); Pop(2)

0x357: PushEmpty()
0x358: Push("ook12Littleboy1")
0x359: Push((int) 1)
0x35a: @ SetVariable(Stack[-2], Stack[-1])
0x35b: Pop(2)
0x35c: Return(); Pop(0)

0x35d: PushEmpty()
0x35e: PushEmpty(int, string)
0x35f: Stack[-1] = "ook12Littleboy1"
0x360: Call2 0x352

0x361: Pop(1)
0x362: Push((int) 0)
0x363: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x364: IF (Stack[-1] == 0) GOTO 0x367; Pop(1)

0x365: Stack[-2] = (bool) 1
0x366: Return(); Pop(0)

0x367: Stack[-2] = (bool) 0
0x368: Return(); Pop(0)

0x369: PushEmpty(int, int)
0x36a: Push("branch")
0x36b: @ GetVariable(Stack[-1], Stack[-2])
0x36c: Pop(1)
0x36d: Push((int) 0)
0x36e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x36f: IF (Stack[-1] == 0) GOTO 0x373; Pop(1)

0x370: Stack[-3] = (int) 1
0x371: Return(); Pop(2)

0x372: GOTO 0x378

0x373: Push((int) 1)
0x374: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x375: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x376: Stack[-3] = (int) 2
0x377: Return(); Pop(2)

0x378: Stack[-3] = (int) 3
0x379: Return(); Pop(2)

0x37a: Stack[-1] = (int) 515560
0x37b: Return(); Pop(0)

0x37c: Stack[-1] = (int) 503345
0x37d: Return(); Pop(0)

0x37e: Stack[-1] = "ui/NPC_Citizen3.png"
0x37f: Return(); Pop(0)

0x380: Stack[-1] = "ui/NPC_Citizen3_b.png"
0x381: Return(); Pop(0)

0x382: Stack[-1] = (bool) 0
0x383: Return(); Pop(0)

0x384: PushEmpty(string, string)
0x385: Stack[-1] = "idle"
0x386: Push(Stack[-3])
0x387: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x388: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x389: Stack[-4] = Stack[-1]
0x38a: Return(); Pop(2)

0x38b: PushEmpty(int, bool, int, bool)
0x38c: Stack[-2] = (int) 0
0x38d: Push("all")
0x38e: PushEmpty(string, int)
0x38f: Stack[-1] = Stack[-5]
0x390: Call2 0x384

0x391: Pop(1)
0x392: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x393: Pop(2)
0x394: Pop(0); Push((bool) Stack[-1] == 0)
0x395: IF (Stack[-1] == 0) GOTO 0x397; Pop(1)

0x396: GOTO 0x39a

0x397: Push((int) 1)
0x398: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x399: GOTO 0x38d

0x39a: Stack[-5] = Stack[-2]
0x39b: Return(); Pop(4)

