GlobalVarCount = 3
	G_VAR_0 object 
	G_VAR_1 bool 
	G_VAR_2 bool 

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
	Fear
	Independence
	player
	GetPosition
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	GetProperty
	m
	Can't find lsh animation : 
	ui/NPC_Julia.png
	ui/NPC_Julia_b.png
	branch

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
	Hold (0 args)
	GetDirection (1 args)
	FindActor (2 args)
	RotateAsync (2 args)
	CanSee (2 args)
	rand (3 args)
	SetTimer (2 args)
	KillTimer (1 args)
	lshStopSpeech (0 args)
	StopAsync (0 args)
	StopGroup0 (0 args)
	Sleep (2 args)
	irand (2 args)
	WaitForAnimEnd (1 args)
	ResetAAS (0 args)
	GetPosition (1 args)
	Rotate (3 args)
	IsLoaded (1 args)
	GetEyesHeight (1 args)
	StopWorld (0 args)
	CameraTransit (3 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (1 args)
	UnlookAsync (1 args)
	GetVariable (2 args)
	SetVariable (2 args)
	lshHasAnimation (2 args)
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	Trace (1 args)
	lshHasSpeech (2 args)
	lshPlaySpeech (1 args)
	self (1 args)
	GetGameTime (1 args)
	HasAnimation (3 args)

RunOp = 0x2c2
RunTask = 6

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa1 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x19a Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x298 Vars = (int, int)
	GTASK_6 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x30e Vars = (int)
		EVENT_6 Op = 0x334 Vars = ()
		EVENT_5 Op = 0x343 Vars = ()
		EVENT_45 Op = 0x350 Vars = (bool)
		EVENT_0 Op = 0x35c Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x3e5

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x534

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x532

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x536

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x538

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x53c

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
0x2f: PushEmpty(bool, object)
0x30: PushEmpty(object)
0x31: Call2 0x4fb

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x43c

0x35: Pop(2)
0x36: PushEmpty(object, object)
0x37: Stack[-2] = Stack[-11]
0x38: Stack[-1] = Stack[-6]
0x39: Push(-2, 4); TaskCall(1)
0x3a: Call2 0x51

0x3b: Pop(-2, 4); TaskReturn
0x3c: Pop(2)
0x3d: @@ IsDialogEnd(Stack[-1])
0x3e: Pop(0)
0x3f: Pop(0); Push((bool) Stack[-1] == 0)
0x40: IF (Stack[-1] == 0) GOTO 0x46; Pop(1)

0x41: @ sync()
0x42: Pop(0)
0x43: @@ IsDialogEnd(Stack[-1])
0x44: Pop(0)
0x45: GOTO 0x3f

0x46: PushEmpty(object)
0x47: Stack[-1] = Stack[-10]
0x48: Call2 0x42a

0x49: Pop(1)
0x4a: @ StopDialog(Stack[-4])
0x4b: Pop(0)
0x4c: @@ GetReturnValue(Stack[-2])
0x4d: Pop(0)
0x4e: Stack[-10] = Stack[-2]
0x4f: Return(); Pop(8)

0x50: Stack[-4] = 0
0x51: PushEmpty()
0x52: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x53: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x54: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x55: Push((int) 1)
0x56: IF (Stack[-1] == 0) GOTO 0x6d; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x8b

0x5a: Pop(1)
0x5b: Push((int) 518012)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: Push((int) 518013)
0x61: Push((int) 32562)
0x62: Push((int) 19146)
0x63: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x64: Pop(3)
0x65: Push((int) 531249)
0x66: Push((int) 32565)
0x67: Push((int) 32564)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: GOTO 0x6d

0x6b: Return(); Pop(0)

0x6c: GOTO 0x55

0x6d: PushEmpty(bool)
0x6e: Call2 0x53a

0x6f: Pop(0)
0x70: IF (Stack[-1] == 0) GOTO 0x7c; Pop(1)

0x71: @ lshWaitForAnimEnd()
0x72: Pop(0)
0x73: Push( Stack[3 + Tasks[-1].StackPointer] )
0x74: IF (Stack[-1] == 0) GOTO 0x76; Pop(1)

0x75: GOTO 0x7b

0x76: PushEmpty(string)
0x77: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x78: Call2 0x4c6

0x79: Pop(1)
0x7a: GOTO 0x71

0x7b: GOTO 0x8a

0x7c: Push("all")
0x7d: Push("idle")
0x7e: @ PlayAnimation(Stack[-2], Stack[-1])
0x7f: Pop(2)
0x80: @ WaitForAnimEnd()
0x81: Pop(0)
0x82: Push( Stack[3 + Tasks[-1].StackPointer] )
0x83: IF (Stack[-1] == 0) GOTO 0x85; Pop(1)

0x84: GOTO 0x8a

0x85: Push("all")
0x86: Push("idle")
0x87: @ PlayAnimation(Stack[-2], Stack[-1])
0x88: Pop(2)
0x89: GOTO 0x80

0x8a: Return(); Pop(0)

0x8b: PushEmpty()
0x8c: PushEmpty(bool)
0x8d: Call2 0x53a

0x8e: Pop(0)
0x8f: Pop(1); Push((bool) Stack[-1] == 0)
0x90: IF (Stack[-1] == 0) GOTO 0x92; Pop(1)

0x91: Return(); Pop(0)

0x92: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x93: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x94: Return(); Pop(0)

0x95: PushEmpty(string, bool)
0x96: Stack[-2] = Stack[-3]
0x97: Push("")
0x98: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x99: IF (Stack[-1] == 0) GOTO 0x9c; Pop(1)

0x9a: Stack[-1] = (bool) 0
0x9b: GOTO 0x9d

0x9c: Stack[-1] = (bool) 1
0x9d: Call2 0x4d6

0x9e: Pop(2)
0x9f: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa0: Return(); Pop(0)

0xa1: PushEmpty()
0xa2: Push((int) 1)
0xa3: IF (Stack[-1] == 0) GOTO 0xf3; Pop(1)

0xa4: PushEmpty()
0xa5: Call2 0x4f4

0xa6: Pop(0)
0xa7: Push((int) 19145)
0xa8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xa9: IF (Stack[-1] == 0) GOTO 0xbe; Pop(1)

0xaa: PushEmpty(string)
0xab: Stack[-1] = "Neutral"
0xac: Call2 0x8b

0xad: Pop(1)
0xae: Push((int) 518012)
0xaf: @@ SetMessage(Stack[-1])
0xb0: Pop(1)
0xb1: @@ ClearReplies()
0xb2: Pop(0)
0xb3: Push((int) 518013)
0xb4: Push((int) 32562)
0xb5: Push((int) 19146)
0xb6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xb7: Pop(3)
0xb8: Push((int) 531249)
0xb9: Push((int) 32565)
0xba: Push((int) 32564)
0xbb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xbc: Pop(3)
0xbd: Return(); Pop(0)

0xbe: Push((int) 32565)
0xbf: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xc0: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xc1: PushEmpty(string)
0xc2: Stack[-1] = "Fear"
0xc3: Call2 0x8b

0xc4: Pop(1)
0xc5: Push((int) 531250)
0xc6: @@ SetMessage(Stack[-1])
0xc7: Pop(1)
0xc8: @@ ClearReplies()
0xc9: Pop(0)
0xca: Push((int) 531251)
0xcb: Push((int) 32562)
0xcc: Push((int) 32566)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 32562)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Independence"
0xd5: Call2 0x8b

0xd6: Pop(1)
0xd7: Push((int) 531247)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 531248)
0xdd: Push((int) -1)
0xde: Push((int) 32563)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 531252)
0xe2: Push((int) -1)
0xe3: Push((int) 32568)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xe8: PushEmpty(bool)
0xe9: Call2 0x53a

0xea: Pop(0)
0xeb: IF (Stack[-1] == 0) GOTO 0xef; Pop(1)

0xec: @ lshStopAnimation()
0xed: Pop(0)
0xee: GOTO 0xf1

0xef: @ StopAnimation()
0xf0: Pop(0)
0xf1: Return(); Pop(0)

0xf2: GOTO 0xa2

0xf3: Return(); Pop(0)

0xf4: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xf5: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xf6: PushEmpty(bool, object, float)
0xf7: Stack[-2] = Stack[-12]
0xf8: Stack[-1] = (float) 70.0
0xf9: Call2 0x3e5

0xfa: Pop(2)
0xfb: Pop(1); Push((bool) Stack[-1] == 0)
0xfc: IF (Stack[-1] == 0) GOTO 0xff; Pop(1)

0xfd: Stack[-10] = (int) -2
0xfe: Return(); Pop(8)

0xff: @ CreateDialog(Stack[-4])
0x100: Pop(0)
0x101: PushEmpty(int)
0x102: Call2 0x534

0x103: Pop(0)
0x104: @@ SetNPCName(Stack[-1])
0x105: Pop(1)
0x106: PushEmpty(int)
0x107: Call2 0x532

0x108: Pop(0)
0x109: @@ SetNPCDescription(Stack[-1])
0x10a: Pop(1)
0x10b: PushEmpty(string)
0x10c: Call2 0x536

0x10d: Pop(0)
0x10e: @@ SetPhoto(Stack[-1])
0x10f: Pop(1)
0x110: PushEmpty(string)
0x111: Call2 0x538

0x112: Pop(0)
0x113: @@ SetPhoto2(Stack[-1])
0x114: Pop(1)
0x115: PushEmpty(int)
0x116: Call2 0x53c

0x117: Pop(0)
0x118: @@ SetPlayerName(Stack[-1])
0x119: Pop(1)
0x11a: Stack[-2] = (int) -1
0x11b: @ IsOverrideActive(Stack[-3])
0x11c: Pop(0)
0x11d: Push(Stack[-3])
0x11e: IF (Stack[-1] == 0) GOTO 0x121; Pop(1)

0x11f: Stack[-10] = (int) -2
0x120: Return(); Pop(8)

0x121: @ DoDialog(Stack[-4])
0x122: Pop(0)
0x123: PushEmpty(bool, object)
0x124: PushEmpty(object)
0x125: Call2 0x4fb

0x126: Stack[-2] = Stack[-1]
0x127: Pop(1)
0x128: Call2 0x43c

0x129: Pop(2)
0x12a: PushEmpty(object, object)
0x12b: Stack[-2] = Stack[-11]
0x12c: Stack[-1] = Stack[-6]
0x12d: Push(-2, 4); TaskCall(3)
0x12e: Call2 0x145

0x12f: Pop(-2, 4); TaskReturn
0x130: Pop(2)
0x131: @@ IsDialogEnd(Stack[-1])
0x132: Pop(0)
0x133: Pop(0); Push((bool) Stack[-1] == 0)
0x134: IF (Stack[-1] == 0) GOTO 0x13a; Pop(1)

0x135: @ sync()
0x136: Pop(0)
0x137: @@ IsDialogEnd(Stack[-1])
0x138: Pop(0)
0x139: GOTO 0x133

0x13a: PushEmpty(object)
0x13b: Stack[-1] = Stack[-10]
0x13c: Call2 0x42a

0x13d: Pop(1)
0x13e: @ StopDialog(Stack[-4])
0x13f: Pop(0)
0x140: @@ GetReturnValue(Stack[-2])
0x141: Pop(0)
0x142: Stack[-10] = Stack[-2]
0x143: Return(); Pop(8)

0x144: Stack[-4] = 0
0x145: PushEmpty()
0x146: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x147: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x148: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x149: Push((int) 1)
0x14a: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x14b: PushEmpty(string)
0x14c: Stack[-1] = "Neutral"
0x14d: Call2 0x184

0x14e: Pop(1)
0x14f: Push((int) 535294)
0x150: @@ SetMessage(Stack[-1])
0x151: Pop(1)
0x152: @@ ClearReplies()
0x153: Pop(0)
0x154: Push((int) 535295)
0x155: Push((int) 36973)
0x156: Push((int) 36972)
0x157: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x158: Pop(3)
0x159: Push((int) 535302)
0x15a: Push((int) -1)
0x15b: Push((int) 36980)
0x15c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x15d: Pop(3)
0x15e: Push((int) 535303)
0x15f: Push((int) -1)
0x160: Push((int) 36981)
0x161: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x162: Pop(3)
0x163: GOTO 0x166

0x164: Return(); Pop(0)

0x165: GOTO 0x149

0x166: PushEmpty(bool)
0x167: Call2 0x53a

0x168: Pop(0)
0x169: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16a: @ lshWaitForAnimEnd()
0x16b: Pop(0)
0x16c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x16f; Pop(1)

0x16e: GOTO 0x174

0x16f: PushEmpty(string)
0x170: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x171: Call2 0x4c6

0x172: Pop(1)
0x173: GOTO 0x16a

0x174: GOTO 0x183

0x175: Push("all")
0x176: Push("idle")
0x177: @ PlayAnimation(Stack[-2], Stack[-1])
0x178: Pop(2)
0x179: @ WaitForAnimEnd()
0x17a: Pop(0)
0x17b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x17c: IF (Stack[-1] == 0) GOTO 0x17e; Pop(1)

0x17d: GOTO 0x183

0x17e: Push("all")
0x17f: Push("idle")
0x180: @ PlayAnimation(Stack[-2], Stack[-1])
0x181: Pop(2)
0x182: GOTO 0x179

0x183: Return(); Pop(0)

0x184: PushEmpty()
0x185: PushEmpty(bool)
0x186: Call2 0x53a

0x187: Pop(0)
0x188: Pop(1); Push((bool) Stack[-1] == 0)
0x189: IF (Stack[-1] == 0) GOTO 0x18b; Pop(1)

0x18a: Return(); Pop(0)

0x18b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x18c: IF (Stack[-1] == 0) GOTO 0x18e; Pop(1)

0x18d: Return(); Pop(0)

0x18e: PushEmpty(string, bool)
0x18f: Stack[-2] = Stack[-3]
0x190: Push("")
0x191: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x192: IF (Stack[-1] == 0) GOTO 0x195; Pop(1)

0x193: Stack[-1] = (bool) 0
0x194: GOTO 0x196

0x195: Stack[-1] = (bool) 1
0x196: Call2 0x4d6

0x197: Pop(2)
0x198: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x199: Return(); Pop(0)

0x19a: PushEmpty()
0x19b: Push((int) 1)
0x19c: IF (Stack[-1] == 0) GOTO 0x1f6; Pop(1)

0x19d: PushEmpty()
0x19e: Call2 0x4f4

0x19f: Pop(0)
0x1a0: Push((int) 36971)
0x1a1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1a2: IF (Stack[-1] == 0) GOTO 0x1bc; Pop(1)

0x1a3: PushEmpty(string)
0x1a4: Stack[-1] = "Neutral"
0x1a5: Call2 0x184

0x1a6: Pop(1)
0x1a7: Push((int) 535294)
0x1a8: @@ SetMessage(Stack[-1])
0x1a9: Pop(1)
0x1aa: @@ ClearReplies()
0x1ab: Pop(0)
0x1ac: Push((int) 535295)
0x1ad: Push((int) 36973)
0x1ae: Push((int) 36972)
0x1af: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b0: Pop(3)
0x1b1: Push((int) 535302)
0x1b2: Push((int) -1)
0x1b3: Push((int) 36980)
0x1b4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1b5: Pop(3)
0x1b6: Push((int) 535303)
0x1b7: Push((int) -1)
0x1b8: Push((int) 36981)
0x1b9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ba: Pop(3)
0x1bb: Return(); Pop(0)

0x1bc: Push((int) 36973)
0x1bd: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1be: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1bf: PushEmpty(string)
0x1c0: Stack[-1] = "Neutral"
0x1c1: Call2 0x184

0x1c2: Pop(1)
0x1c3: Push((int) 535296)
0x1c4: @@ SetMessage(Stack[-1])
0x1c5: Pop(1)
0x1c6: @@ ClearReplies()
0x1c7: Pop(0)
0x1c8: Push((int) 535297)
0x1c9: Push((int) 36975)
0x1ca: Push((int) 36974)
0x1cb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1cc: Pop(3)
0x1cd: Push((int) 535301)
0x1ce: Push((int) 36975)
0x1cf: Push((int) 36978)
0x1d0: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1d1: Pop(3)
0x1d2: Return(); Pop(0)

0x1d3: Push((int) 36975)
0x1d4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1d5: IF (Stack[-1] == 0) GOTO 0x1ea; Pop(1)

0x1d6: PushEmpty(string)
0x1d7: Stack[-1] = "Neutral"
0x1d8: Call2 0x184

0x1d9: Pop(1)
0x1da: Push((int) 535298)
0x1db: @@ SetMessage(Stack[-1])
0x1dc: Pop(1)
0x1dd: @@ ClearReplies()
0x1de: Pop(0)
0x1df: Push((int) 535299)
0x1e0: Push((int) -1)
0x1e1: Push((int) 36976)
0x1e2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e3: Pop(3)
0x1e4: Push((int) 535300)
0x1e5: Push((int) -1)
0x1e6: Push((int) 36977)
0x1e7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1e8: Pop(3)
0x1e9: Return(); Pop(0)

0x1ea: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1eb: PushEmpty(bool)
0x1ec: Call2 0x53a

0x1ed: Pop(0)
0x1ee: IF (Stack[-1] == 0) GOTO 0x1f2; Pop(1)

0x1ef: @ lshStopAnimation()
0x1f0: Pop(0)
0x1f1: GOTO 0x1f4

0x1f2: @ StopAnimation()
0x1f3: Pop(0)
0x1f4: Return(); Pop(0)

0x1f5: GOTO 0x19b

0x1f6: Return(); Pop(0)

0x1f7: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1f8: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1f9: PushEmpty(bool, object, float)
0x1fa: Stack[-2] = Stack[-12]
0x1fb: Stack[-1] = (float) 70.0
0x1fc: Call2 0x3e5

0x1fd: Pop(2)
0x1fe: Pop(1); Push((bool) Stack[-1] == 0)
0x1ff: IF (Stack[-1] == 0) GOTO 0x202; Pop(1)

0x200: Stack[-10] = (int) -2
0x201: Return(); Pop(8)

0x202: @ CreateDialog(Stack[-4])
0x203: Pop(0)
0x204: PushEmpty(int)
0x205: Call2 0x534

0x206: Pop(0)
0x207: @@ SetNPCName(Stack[-1])
0x208: Pop(1)
0x209: PushEmpty(int)
0x20a: Call2 0x532

0x20b: Pop(0)
0x20c: @@ SetNPCDescription(Stack[-1])
0x20d: Pop(1)
0x20e: PushEmpty(string)
0x20f: Call2 0x536

0x210: Pop(0)
0x211: @@ SetPhoto(Stack[-1])
0x212: Pop(1)
0x213: PushEmpty(string)
0x214: Call2 0x538

0x215: Pop(0)
0x216: @@ SetPhoto2(Stack[-1])
0x217: Pop(1)
0x218: PushEmpty(int)
0x219: Call2 0x53c

0x21a: Pop(0)
0x21b: @@ SetPlayerName(Stack[-1])
0x21c: Pop(1)
0x21d: Stack[-2] = (int) -1
0x21e: @ IsOverrideActive(Stack[-3])
0x21f: Pop(0)
0x220: Push(Stack[-3])
0x221: IF (Stack[-1] == 0) GOTO 0x224; Pop(1)

0x222: Stack[-10] = (int) -2
0x223: Return(); Pop(8)

0x224: @ DoDialog(Stack[-4])
0x225: Pop(0)
0x226: PushEmpty(bool, object)
0x227: PushEmpty(object)
0x228: Call2 0x4fb

0x229: Stack[-2] = Stack[-1]
0x22a: Pop(1)
0x22b: Call2 0x43c

0x22c: Pop(2)
0x22d: PushEmpty(object, object)
0x22e: Stack[-2] = Stack[-11]
0x22f: Stack[-1] = Stack[-6]
0x230: Push(-2, 4); TaskCall(5)
0x231: Call2 0x248

0x232: Pop(-2, 4); TaskReturn
0x233: Pop(2)
0x234: @@ IsDialogEnd(Stack[-1])
0x235: Pop(0)
0x236: Pop(0); Push((bool) Stack[-1] == 0)
0x237: IF (Stack[-1] == 0) GOTO 0x23d; Pop(1)

0x238: @ sync()
0x239: Pop(0)
0x23a: @@ IsDialogEnd(Stack[-1])
0x23b: Pop(0)
0x23c: GOTO 0x236

0x23d: PushEmpty(object)
0x23e: Stack[-1] = Stack[-10]
0x23f: Call2 0x42a

0x240: Pop(1)
0x241: @ StopDialog(Stack[-4])
0x242: Pop(0)
0x243: @@ GetReturnValue(Stack[-2])
0x244: Pop(0)
0x245: Stack[-10] = Stack[-2]
0x246: Return(); Pop(8)

0x247: Stack[-4] = 0
0x248: PushEmpty()
0x249: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x24a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x24b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x24c: Push((int) 1)
0x24d: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x24e: PushEmpty(string)
0x24f: Stack[-1] = "Neutral"
0x250: Call2 0x282

0x251: Pop(1)
0x252: Push((int) 540551)
0x253: @@ SetMessage(Stack[-1])
0x254: Pop(1)
0x255: @@ ClearReplies()
0x256: Pop(0)
0x257: Push((int) 540552)
0x258: Push((int) -1)
0x259: Push((int) 42561)
0x25a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x25b: Pop(3)
0x25c: Push((int) 540795)
0x25d: Push((int) -1)
0x25e: Push((int) 42844)
0x25f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x260: Pop(3)
0x261: GOTO 0x264

0x262: Return(); Pop(0)

0x263: GOTO 0x24c

0x264: PushEmpty(bool)
0x265: Call2 0x53a

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x273; Pop(1)

0x268: @ lshWaitForAnimEnd()
0x269: Pop(0)
0x26a: Push( Stack[3 + Tasks[-1].StackPointer] )
0x26b: IF (Stack[-1] == 0) GOTO 0x26d; Pop(1)

0x26c: GOTO 0x272

0x26d: PushEmpty(string)
0x26e: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x26f: Call2 0x4c6

0x270: Pop(1)
0x271: GOTO 0x268

0x272: GOTO 0x281

0x273: Push("all")
0x274: Push("idle")
0x275: @ PlayAnimation(Stack[-2], Stack[-1])
0x276: Pop(2)
0x277: @ WaitForAnimEnd()
0x278: Pop(0)
0x279: Push( Stack[3 + Tasks[-1].StackPointer] )
0x27a: IF (Stack[-1] == 0) GOTO 0x27c; Pop(1)

0x27b: GOTO 0x281

0x27c: Push("all")
0x27d: Push("idle")
0x27e: @ PlayAnimation(Stack[-2], Stack[-1])
0x27f: Pop(2)
0x280: GOTO 0x277

0x281: Return(); Pop(0)

0x282: PushEmpty()
0x283: PushEmpty(bool)
0x284: Call2 0x53a

0x285: Pop(0)
0x286: Pop(1); Push((bool) Stack[-1] == 0)
0x287: IF (Stack[-1] == 0) GOTO 0x289; Pop(1)

0x288: Return(); Pop(0)

0x289: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x28a: IF (Stack[-1] == 0) GOTO 0x28c; Pop(1)

0x28b: Return(); Pop(0)

0x28c: PushEmpty(string, bool)
0x28d: Stack[-2] = Stack[-3]
0x28e: Push("")
0x28f: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x290: IF (Stack[-1] == 0) GOTO 0x293; Pop(1)

0x291: Stack[-1] = (bool) 0
0x292: GOTO 0x294

0x293: Stack[-1] = (bool) 1
0x294: Call2 0x4d6

0x295: Pop(2)
0x296: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x297: Return(); Pop(0)

0x298: PushEmpty()
0x299: Push((int) 1)
0x29a: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x29b: PushEmpty()
0x29c: Call2 0x4f4

0x29d: Pop(0)
0x29e: Push((int) 42560)
0x29f: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2a0: IF (Stack[-1] == 0) GOTO 0x2b5; Pop(1)

0x2a1: PushEmpty(string)
0x2a2: Stack[-1] = "Neutral"
0x2a3: Call2 0x282

0x2a4: Pop(1)
0x2a5: Push((int) 540551)
0x2a6: @@ SetMessage(Stack[-1])
0x2a7: Pop(1)
0x2a8: @@ ClearReplies()
0x2a9: Pop(0)
0x2aa: Push((int) 540552)
0x2ab: Push((int) -1)
0x2ac: Push((int) 42561)
0x2ad: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2ae: Pop(3)
0x2af: Push((int) 540795)
0x2b0: Push((int) -1)
0x2b1: Push((int) 42844)
0x2b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2b3: Pop(3)
0x2b4: Return(); Pop(0)

0x2b5: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x2b6: PushEmpty(bool)
0x2b7: Call2 0x53a

0x2b8: Pop(0)
0x2b9: IF (Stack[-1] == 0) GOTO 0x2bd; Pop(1)

0x2ba: @ lshStopAnimation()
0x2bb: Pop(0)
0x2bc: GOTO 0x2bf

0x2bd: @ StopAnimation()
0x2be: Pop(0)
0x2bf: Return(); Pop(0)

0x2c0: GOTO 0x299

0x2c1: Return(); Pop(0)

0x2c2: Push(GlobalVars[1])
0x2c3: Stack[-1] = (bool) 0
0x2c4: GlobalVars[1] = Stack[-1]; Pop(1)
0x2c5: PushEmpty()
0x2c6: Call2 0x2c9

0x2c7: Pop(0)
0x2c8: Return(); Pop(0)

0x2c9: PushEmpty(bool)
0x2ca: Call2 0x3e0

0x2cb: Pop(0)
0x2cc: Pop(1); Push((bool) Stack[-1] == 0)
0x2cd: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2ce: @ Hold()
0x2cf: Pop(0)
0x2d0: @ GetDirection(Stack[-0])
0x2d1: Pop(0)
0x2d2: PushEmpty()
0x2d3: Call2 0x379

0x2d4: Pop(0)
0x2d5: GOTO 0x2d2

0x2d6: Return(); Pop(0)

0x2d7: PushEmpty(object, object)
0x2d8: Push("player")
0x2d9: @ FindActor(Stack[-2], Stack[-1])
0x2da: Pop(1)
0x2db: Pop(0); Push((bool) Stack[-1] == 0)
0x2dc: IF (Stack[-1] == 0) GOTO 0x2df; Pop(1)

0x2dd: Stack[-3] = (bool) 0
0x2de: Return(); Pop(2)

0x2df: PushEmpty(bool, object)
0x2e0: Stack[-1] = Stack[-3]
0x2e1: Call2 0x3d7

0x2e2: Stack[-5] = Stack[-2]
0x2e3: Pop(2)
0x2e4: Return(); Pop(2)

0x2e5: Stack[-1] = 0
0x2e6: Push(CvectorIndex(Stack[-0], 0))
0x2e7: Push(CvectorIndex(Stack[-0], 2))
0x2e8: @ RotateAsync(Stack[-2], Stack[-1])
0x2e9: Pop(2)
0x2ea: Return(); Pop(0)

0x2eb: PushEmpty(object, bool, object, bool)
0x2ec: Push("player")
0x2ed: @ FindActor(Stack[-3], Stack[-1])
0x2ee: Pop(1)
0x2ef: Pop(0); Push((bool) Stack[-2] == 0)
0x2f0: IF (Stack[-1] == 0) GOTO 0x2f3; Pop(1)

0x2f1: Stack[-5] = (bool) 0
0x2f2: Return(); Pop(4)

0x2f3: PushEmpty(float, object)
0x2f4: Stack[-1] = Stack[-4]
0x2f5: Call2 0x3c5

0x2f6: Pop(1)
0x2f7: Push((float)90000.0)
0x2f8: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x2f9: IF (Stack[-1] == 0) GOTO 0x2fc; Pop(1)

0x2fa: Stack[-5] = (bool) 0
0x2fb: Return(); Pop(4)

0x2fc: @ CanSee(Stack[-1], Stack[-2])
0x2fd: Pop(0)
0x2fe: Stack[-5] = Stack[-1]
0x2ff: Return(); Pop(4)

0x300: Stack[-2] = 0
0x301: PushEmpty(float, float)
0x302: Push((int) 8)
0x303: Push((int) 16)
0x304: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x305: Pop(2)
0x306: Push((int) 10)
0x307: @ SetTimer(Stack[-1], Stack[-2])
0x308: Pop(1)
0x309: Return(); Pop(2)

0x30a: Push((int) 10)
0x30b: @ KillTimer(Stack[-1])
0x30c: Pop(1)
0x30d: Return(); Pop(0)

0x30e: PushEmpty()
0x30f: Push((int) 10)
0x310: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x311: IF (Stack[-1] == 0) GOTO 0x333; Pop(1)

0x312: PushEmpty()
0x313: Call2 0x30a

0x314: Pop(0)
0x315: PushEmpty(bool)
0x316: Stack[-1] = (bool) 0
0x317: PushEmpty(bool)
0x318: Call2 0x3e0

0x319: Pop(0)
0x31a: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31b: PushEmpty(bool)
0x31c: Call2 0x2eb

0x31d: Pop(0)
0x31e: IF (Stack[-1] == 0) GOTO 0x320; Pop(1)

0x31f: Stack[-1] = (bool) 1
0x320: IF (Stack[-1] == 0) GOTO 0x32d; Pop(1)

0x321: PushEmpty(bool)
0x322: Call2 0x2d7

0x323: Pop(0)
0x324: IF (Stack[-1] == 0) GOTO 0x32c; Pop(1)

0x325: PushEmpty(bool, object)
0x326: PushEmpty(object)
0x327: Call2 0x4fb

0x328: Stack[-2] = Stack[-1]
0x329: Pop(1)
0x32a: Call2 0x476

0x32b: Pop(2)
0x32c: GOTO 0x333

0x32d: PushEmpty()
0x32e: Call2 0x2e6

0x32f: Pop(0)
0x330: PushEmpty()
0x331: Call2 0x301

0x332: Pop(0)
0x333: Return(); Pop(0)

0x334: PushEmpty()
0x335: Call2 0x3c0

0x336: Pop(0)
0x337: PushEmpty()
0x338: Call2 0x30a

0x339: Pop(0)
0x33a: @ lshStopSpeech()
0x33b: Pop(0)
0x33c: @ lshStopAnimation()
0x33d: Pop(0)
0x33e: @ StopAsync()
0x33f: Pop(0)
0x340: @ Hold()
0x341: Pop(0)
0x342: Return(); Pop(0)

0x343: @ StopGroup0()
0x344: Pop(0)
0x345: PushEmpty()
0x346: Call2 0x30a

0x347: Pop(0)
0x348: PushEmpty(string)
0x349: Stack[-1] = "Neutral"
0x34a: Call2 0x4c6

0x34b: Pop(1)
0x34c: PushEmpty()
0x34d: Call2 0x301

0x34e: Pop(0)
0x34f: Return(); Pop(0)

0x350: PushEmpty()
0x351: Push(Stack[-1])
0x352: IF (Stack[-1] == 0) GOTO 0x357; Pop(1)

0x353: PushEmpty()
0x354: Call2 0x301

0x355: Pop(0)
0x356: GOTO 0x35b

0x357: PushEmpty(string)
0x358: Stack[-1] = "Neutral"
0x359: Call2 0x4c6

0x35a: Pop(1)
0x35b: Return(); Pop(0)

0x35c: PushEmpty(bool, bool)
0x35d: @ IsOverrideActive(Stack[-1])
0x35e: Pop(0)
0x35f: Pop(0); Push((bool) Stack[-1] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x378; Pop(1)

0x361: EventDisable(0)
0x362: PushEmpty()
0x363: Call2 0x3c0

0x364: Pop(0)
0x365: PushEmpty(bool, object)
0x366: Stack[-1] = Stack[-5]
0x367: Call2 0x3d7

0x368: Pop(2)
0x369: EventEnable(0)
0x36a: PushEmpty(object)
0x36b: Stack[-1] = Stack[-4]
0x36c: Call2 0x54d

0x36d: Pop(1)
0x36e: PushEmpty(string)
0x36f: Stack[-1] = "Neutral"
0x370: Call2 0x4c6

0x371: Pop(1)
0x372: PushEmpty()
0x373: Call2 0x30a

0x374: Pop(0)
0x375: PushEmpty()
0x376: Call2 0x301

0x377: Pop(0)
0x378: Return(); Pop(2)

0x379: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x37a: @ WaitForAnimEnd()
0x37b: Pop(0)
0x37c: PushEmpty(bool)
0x37d: Call2 0x3e0

0x37e: Pop(0)
0x37f: Pop(1); Push((bool) Stack[-1] == 0)
0x380: IF (Stack[-1] == 0) GOTO 0x382; Pop(1)

0x381: Return(); Pop(12)

0x382: PushEmpty(int)
0x383: Call2 0x521

0x384: Stack[-7] = Stack[-1]
0x385: Pop(1)
0x386: Stack[-5] = (int) 0
0x387: PushEmpty(bool)
0x388: Stack[-1] = (bool) 0
0x389: Push((int) 5)
0x38a: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: PushEmpty(bool)
0x38d: Call2 0x3e0

0x38e: Pop(0)
0x38f: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x390: Stack[-1] = (bool) 1
0x391: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x392: Pop(0); Push((bool) Stack[-6] == 0)
0x393: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x394: Push((int) 3)
0x395: @ Sleep(Stack[-1], Stack[-5])
0x396: Pop(1)
0x397: Pop(0); Push((bool) Stack[-4] == 0)
0x398: IF (Stack[-1] == 0) GOTO 0x39a; Pop(1)

0x399: GOTO 0x3bb

0x39a: GOTO 0x3b0

0x39b: @ irand(Stack[-3], Stack[-6])
0x39c: Pop(0)
0x39d: Push((int) 5)
0x39e: @ irand(Stack[-3], Stack[-1])
0x39f: Pop(1)
0x3a0: Push((int) 0)
0x3a1: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x3a2: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x3a3: Stack[-3] = (int) 0
0x3a4: Push("all")
0x3a5: PushEmpty(string, int)
0x3a6: Stack[-1] = Stack[-6]
0x3a7: Call2 0x51a

0x3a8: Pop(1)
0x3a9: @ PlayAnimation(Stack[-2], Stack[-1])
0x3aa: Pop(2)
0x3ab: @ WaitForAnimEnd(Stack[-1])
0x3ac: Pop(0)
0x3ad: Pop(0); Push((bool) Stack[-1] == 0)
0x3ae: IF (Stack[-1] == 0) GOTO 0x3b0; Pop(1)

0x3af: GOTO 0x3bb

0x3b0: PushEmpty(bool)
0x3b1: Call2 0x3be

0x3b2: Pop(0)
0x3b3: Pop(1); Push((bool) Stack[-1] == 0)
0x3b4: IF (Stack[-1] == 0) GOTO 0x3b6; Pop(1)

0x3b5: GOTO 0x3bb

0x3b6: @ ResetAAS()
0x3b7: Pop(0)
0x3b8: Push((int) 1)
0x3b9: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x3ba: GOTO 0x387

0x3bb: @ ResetAAS()
0x3bc: Pop(0)
0x3bd: Return(); Pop(12)

0x3be: Stack[-1] = (bool) 1
0x3bf: Return(); Pop(0)

0x3c0: @ StopAnimation()
0x3c1: Pop(0)
0x3c2: @ StopGroup0()
0x3c3: Pop(0)
0x3c4: Return(); Pop(0)

0x3c5: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x3c6: @ GetPosition(Stack[-3])
0x3c7: Pop(0)
0x3c8: @@ GetPosition(Stack[-2])
0x3c9: Pop(0)
0x3ca: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x3cb: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x3cc: Return(); Pop(6)

0x3cd: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x3ce: @ GetPosition(Stack[-3])
0x3cf: Pop(0)
0x3d0: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x3d1: Push(CvectorIndex(Stack[-2], 0))
0x3d2: Push(CvectorIndex(Stack[-3], 2))
0x3d3: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x3d4: Pop(2)
0x3d5: Stack[-8] = Stack[-1]
0x3d6: Return(); Pop(6)

0x3d7: PushEmpty(cvector, cvector)
0x3d8: @@ GetPosition(Stack[-1])
0x3d9: Pop(0)
0x3da: PushEmpty(bool, cvector)
0x3db: Stack[-1] = Stack[-3]
0x3dc: Call2 0x3cd

0x3dd: Stack[-6] = Stack[-2]
0x3de: Pop(2)
0x3df: Return(); Pop(2)

0x3e0: PushEmpty(bool, bool)
0x3e1: @ IsLoaded(Stack[-1])
0x3e2: Pop(0)
0x3e3: Stack[-3] = Stack[-1]
0x3e4: Return(); Pop(2)

0x3e5: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x3e6: @@ GetPosition(Stack[-8])
0x3e7: Pop(0)
0x3e8: @@ GetEyesHeight(Stack[-9])
0x3e9: Pop(0)
0x3ea: Push(CvectorIndex(Stack[-8], 1))
0x3eb: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3ec: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x3ed: @ GetPosition(Stack[-7])
0x3ee: Pop(0)
0x3ef: @ GetEyesHeight(Stack[-9])
0x3f0: Pop(0)
0x3f1: Push(CvectorIndex(Stack[-7], 1))
0x3f2: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x3f3: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x3f4: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x3f5: Push(CvectorIndex(Stack[-6], 1))
0x3f6: Stack[-1] = (int) 0
0x3f7: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x3f8: Pop(0); Push(Stack[-6] | Stack[-6]);
0x3f9: Pop(1); Push(Sqrt(Stack[-1]))
0x3fa: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x3fb: Stack[-5] = -Stack[-6]; Pop(0);
0x3fc: Pop(0); Push(Stack[-6] * Stack[-19]);
0x3fd: PushEmpty(cvector, cvector)
0x3fe: Push(CVector(0.0, 1.0, 0.0))
0x3ff: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x400: Call2 0x501

0x401: Pop(1)
0x402: Push((int) 25)
0x403: Pop(2); Push(Stack[-2] * Stack[-1]);
0x404: Pop(2); Push(Stack[-2] + Stack[-1]);
0x405: Push(CVector(0.0, 10.0, 0.0))
0x406: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x407: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x408: @ IsOverrideActive(Stack[-2])
0x409: Pop(0)
0x40a: Push(Stack[-2])
0x40b: IF (Stack[-1] == 0) GOTO 0x40e; Pop(1)

0x40c: Stack[-21] = (bool) 0
0x40d: Return(); Pop(18)

0x40e: @ StopWorld()
0x40f: Pop(0)
0x410: Push((bool) 1)
0x411: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x412: Pop(1)
0x413: Push(CvectorIndex(Stack[-4], 0))
0x414: Push(CvectorIndex(Stack[-5], 2))
0x415: @ Rotate(Stack[-2], Stack[-1])
0x416: Pop(2)
0x417: PushEmpty(bool)
0x418: Call2 0x53a

0x419: Pop(0)
0x41a: IF (Stack[-1] == 0) GOTO 0x41c; Pop(1)

0x41b: GOTO 0x424

0x41c: Push("head")
0x41d: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x41e: Pop(1)
0x41f: Push(Stack[-1])
0x420: IF (Stack[-1] == 0) GOTO 0x424; Pop(1)

0x421: Push("head")
0x422: @ LookAsyncCamera(Stack[-1])
0x423: Pop(1)
0x424: @ CameraWaitForPlayFinish()
0x425: Pop(0)
0x426: @ ResumeWorld()
0x427: Pop(0)
0x428: Stack[-21] = (bool) 1
0x429: Return(); Pop(18)

0x42a: PushEmpty(bool, bool)
0x42b: Push((bool) 1)
0x42c: @ CameraSwitchToNormal(Stack[-1])
0x42d: Pop(1)
0x42e: PushEmpty(bool)
0x42f: Call2 0x53a

0x430: Pop(0)
0x431: IF (Stack[-1] == 0) GOTO 0x433; Pop(1)

0x432: GOTO 0x43b

0x433: Push("head")
0x434: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x435: Pop(1)
0x436: Push(Stack[-1])
0x437: IF (Stack[-1] == 0) GOTO 0x43b; Pop(1)

0x438: Push("head")
0x439: @ UnlookAsync(Stack[-1])
0x43a: Pop(1)
0x43b: Return(); Pop(2)

0x43c: PushEmpty(int, int, int, int)
0x43d: Push("voice_common")
0x43e: @ GetVariable(Stack[-1], Stack[-3])
0x43f: Pop(1)
0x440: Push(Stack[-2])
0x441: IF (Stack[-1] == 0) GOTO 0x462; Pop(1)

0x442: PushEmpty(bool, object)
0x443: Stack[-1] = Stack[-7]
0x444: Call2 0x476

0x445: Pop(1)
0x446: Pop(1); Push((bool) Stack[-1] == 0)
0x447: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x448: PushEmpty(bool, object)
0x449: Stack[-1] = Stack[-7]
0x44a: Call2 0x49b

0x44b: Pop(1)
0x44c: Pop(1); Push((bool) Stack[-1] == 0)
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-6] = (bool) 0
0x44f: Return(); Pop(4)

0x450: Push((int) 2)
0x451: @ irand(Stack[-2], Stack[-1])
0x452: Pop(1)
0x453: Push(Stack[-1])
0x454: IF (Stack[-1] == 0) GOTO 0x45d; Pop(1)

0x455: Push("voice_common")
0x456: Push((int) 1)
0x457: Pop(1); Push(Stack[-4] + Stack[-1]);
0x458: Push((int) 3)
0x459: Pop(2); Push(Stack[-2] % Stack[-1]);
0x45a: @ SetVariable(Stack[-2], Stack[-1])
0x45b: Pop(2)
0x45c: GOTO 0x461

0x45d: Push("voice_common")
0x45e: Push((int) 0)
0x45f: @ SetVariable(Stack[-2], Stack[-1])
0x460: Pop(2)
0x461: GOTO 0x474

0x462: PushEmpty(bool, object)
0x463: Stack[-1] = Stack[-7]
0x464: Call2 0x49b

0x465: Pop(1)
0x466: Pop(1); Push((bool) Stack[-1] == 0)
0x467: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x468: PushEmpty(bool, object)
0x469: Stack[-1] = Stack[-7]
0x46a: Call2 0x476

0x46b: Pop(1)
0x46c: Pop(1); Push((bool) Stack[-1] == 0)
0x46d: IF (Stack[-1] == 0) GOTO 0x470; Pop(1)

0x46e: Stack[-6] = (bool) 0
0x46f: Return(); Pop(4)

0x470: Push("voice_common")
0x471: Push((int) 1)
0x472: @ SetVariable(Stack[-2], Stack[-1])
0x473: Pop(2)
0x474: Stack[-6] = (bool) 1
0x475: Return(); Pop(4)

0x476: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x477: Stack[-5] = "c"
0x478: Stack[-4] = (int) 0
0x479: Push((int) 1)
0x47a: IF (Stack[-1] == 0) GOTO 0x486; Pop(1)

0x47b: Push((int) 1)
0x47c: Pop(1); Push(Stack[-5] + Stack[-1]);
0x47d: Pop(1); Push(Stack[-6] + Stack[-1]);
0x47e: @@ HasProperty(Stack[-1], Stack[-4])
0x47f: Pop(1)
0x480: Pop(0); Push((bool) Stack[-3] == 0)
0x481: IF (Stack[-1] == 0) GOTO 0x483; Pop(1)

0x482: GOTO 0x486

0x483: Push((int) 1)
0x484: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x485: GOTO 0x479

0x486: Pop(0); Push((bool) Stack[-4] == 0)
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-12] = (bool) 0
0x489: Return(); Pop(10)

0x48a: Stack[-2] = (int) 0
0x48b: Push((int) 1)
0x48c: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x48d: IF (Stack[-1] == 0) GOTO 0x490; Pop(1)

0x48e: @ irand(Stack[-2], Stack[-4])
0x48f: Pop(0)
0x490: Push((int) 1)
0x491: Pop(1); Push(Stack[-3] + Stack[-1]);
0x492: Pop(1); Push(Stack[-6] + Stack[-1]);
0x493: @@ GetProperty(Stack[-1], Stack[-2])
0x494: Pop(1)
0x495: PushEmpty(bool, string)
0x496: Stack[-1] = Stack[-3]
0x497: Call2 0x4e5

0x498: Stack[-14] = Stack[-2]
0x499: Pop(2)
0x49a: Return(); Pop(10)

0x49b: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x49c: Push("d")
0x49d: PushEmpty(int)
0x49e: Call2 0x50b

0x49f: Pop(0)
0x4a0: Pop(2); Push(Stack[-2] + Stack[-1]);
0x4a1: Push("m")
0x4a2: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x4a3: Stack[-4] = (int) 0
0x4a4: Push((int) 1)
0x4a5: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x4a6: Push((int) 1)
0x4a7: Pop(1); Push(Stack[-5] + Stack[-1]);
0x4a8: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4a9: @@ HasProperty(Stack[-1], Stack[-4])
0x4aa: Pop(1)
0x4ab: Pop(0); Push((bool) Stack[-3] == 0)
0x4ac: IF (Stack[-1] == 0) GOTO 0x4ae; Pop(1)

0x4ad: GOTO 0x4b1

0x4ae: Push((int) 1)
0x4af: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x4b0: GOTO 0x4a4

0x4b1: Pop(0); Push((bool) Stack[-4] == 0)
0x4b2: IF (Stack[-1] == 0) GOTO 0x4b5; Pop(1)

0x4b3: Stack[-12] = (bool) 0
0x4b4: Return(); Pop(10)

0x4b5: Stack[-2] = (int) 0
0x4b6: Push((int) 1)
0x4b7: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x4b8: IF (Stack[-1] == 0) GOTO 0x4bb; Pop(1)

0x4b9: @ irand(Stack[-2], Stack[-4])
0x4ba: Pop(0)
0x4bb: Push((int) 1)
0x4bc: Pop(1); Push(Stack[-3] + Stack[-1]);
0x4bd: Pop(1); Push(Stack[-6] + Stack[-1]);
0x4be: @@ GetProperty(Stack[-1], Stack[-2])
0x4bf: Pop(1)
0x4c0: PushEmpty(bool, string)
0x4c1: Stack[-1] = Stack[-3]
0x4c2: Call2 0x4e5

0x4c3: Stack[-14] = Stack[-2]
0x4c4: Pop(2)
0x4c5: Return(); Pop(10)

0x4c6: PushEmpty(bool, float, float, bool, float, float)
0x4c7: @ lshHasAnimation(Stack[-3], Stack[-7])
0x4c8: Pop(0)
0x4c9: Push(Stack[-3])
0x4ca: IF (Stack[-1] == 0) GOTO 0x4d1; Pop(1)

0x4cb: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x4cc: Pop(0)
0x4cd: Push((bool) 0)
0x4ce: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x4cf: Pop(1)
0x4d0: GOTO 0x4d5

0x4d1: Push("Can't find lsh animation : ")
0x4d2: Pop(1); Push(Stack[-1] + Stack[-8]);
0x4d3: @ Trace(Stack[-1])
0x4d4: Pop(1)
0x4d5: Return(); Pop(6)

0x4d6: PushEmpty(bool, float, float, bool, float, float)
0x4d7: @ lshHasAnimation(Stack[-3], Stack[-8])
0x4d8: Pop(0)
0x4d9: Push(Stack[-3])
0x4da: IF (Stack[-1] == 0) GOTO 0x4e0; Pop(1)

0x4db: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x4dc: Pop(0)
0x4dd: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x4de: Pop(0)
0x4df: GOTO 0x4e4

0x4e0: Push("Can't find lsh animation : ")
0x4e1: Pop(1); Push(Stack[-1] + Stack[-9]);
0x4e2: @ Trace(Stack[-1])
0x4e3: Pop(1)
0x4e4: Return(); Pop(6)

0x4e5: PushEmpty(bool, bool)
0x4e6: PushEmpty(bool)
0x4e7: Call2 0x53a

0x4e8: Pop(0)
0x4e9: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ea: @ lshHasSpeech(Stack[-1], Stack[-3])
0x4eb: Pop(0)
0x4ec: Push(Stack[-1])
0x4ed: IF (Stack[-1] == 0) GOTO 0x4f2; Pop(1)

0x4ee: @ lshPlaySpeech(Stack[-3])
0x4ef: Pop(0)
0x4f0: Stack[-4] = (bool) 1
0x4f1: Return(); Pop(2)

0x4f2: Stack[-4] = (bool) 0
0x4f3: Return(); Pop(2)

0x4f4: PushEmpty(bool)
0x4f5: Call2 0x53a

0x4f6: Pop(0)
0x4f7: IF (Stack[-1] == 0) GOTO 0x4fa; Pop(1)

0x4f8: @ lshStopSpeech()
0x4f9: Pop(0)
0x4fa: Return(); Pop(0)

0x4fb: PushEmpty(object, object)
0x4fc: @ self(Stack[-1])
0x4fd: Pop(0)
0x4fe: Stack[-3] = Stack[-1]
0x4ff: Return(); Pop(2)

0x500: Stack[-1] = 0
0x501: PushEmpty(float, float)
0x502: Pop(0); Push(Stack[-3] | Stack[-3]);
0x503: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x504: Push((float)0.0)
0x505: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x506: IF (Stack[-1] == 0) GOTO 0x509; Pop(1)

0x507: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x508: Return(); Pop(2)

0x509: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x50a: Return(); Pop(2)

0x50b: PushEmpty(float, float)
0x50c: @ GetGameTime(Stack[-1])
0x50d: Pop(0)
0x50e: Push((int) 1)
0x50f: PushEmpty(int)
0x510: Push((int) 24)
0x511: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x512: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x513: Return(); Pop(2)

0x514: PushEmpty()
0x515: PushEmpty(int)
0x516: Call2 0x50b

0x517: Pop(0)
0x518: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x519: Return(); Pop(0)

0x51a: PushEmpty(string, string)
0x51b: Stack[-1] = "idle"
0x51c: Push(Stack[-3])
0x51d: IF (Stack[-1] == 0) GOTO 0x51f; Pop(1)

0x51e: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x51f: Stack[-4] = Stack[-1]
0x520: Return(); Pop(2)

0x521: PushEmpty(int, bool, int, bool)
0x522: Stack[-2] = (int) 0
0x523: Push("all")
0x524: PushEmpty(string, int)
0x525: Stack[-1] = Stack[-5]
0x526: Call2 0x51a

0x527: Pop(1)
0x528: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(2)
0x52a: Pop(0); Push((bool) Stack[-1] == 0)
0x52b: IF (Stack[-1] == 0) GOTO 0x52d; Pop(1)

0x52c: GOTO 0x530

0x52d: Push((int) 1)
0x52e: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x52f: GOTO 0x523

0x530: Stack[-5] = Stack[-2]
0x531: Return(); Pop(4)

0x532: Stack[-1] = (int) 515537
0x533: Return(); Pop(0)

0x534: Stack[-1] = (int) 502862
0x535: Return(); Pop(0)

0x536: Stack[-1] = "ui/NPC_Julia.png"
0x537: Return(); Pop(0)

0x538: Stack[-1] = "ui/NPC_Julia_b.png"
0x539: Return(); Pop(0)

0x53a: Stack[-1] = (bool) 1
0x53b: Return(); Pop(0)

0x53c: PushEmpty(int, int)
0x53d: Push("branch")
0x53e: @ GetVariable(Stack[-1], Stack[-2])
0x53f: Pop(1)
0x540: Push((int) 0)
0x541: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x542: IF (Stack[-1] == 0) GOTO 0x546; Pop(1)

0x543: Stack[-3] = (int) 1
0x544: Return(); Pop(2)

0x545: GOTO 0x54b

0x546: Push((int) 1)
0x547: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x548: IF (Stack[-1] == 0) GOTO 0x54b; Pop(1)

0x549: Stack[-3] = (int) 2
0x54a: Return(); Pop(2)

0x54b: Stack[-3] = (int) 3
0x54c: Return(); Pop(2)

0x54d: PushEmpty()
0x54e: Push(GlobalVars[1])
0x54f: Pop(1); Push((bool) Stack[-1] == 0)
0x550: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x551: PushEmpty(int, object)
0x552: Stack[-1] = Stack[-3]
0x553: Push(-2, 1); TaskCall(0)
0x554: Call2 0x0

0x555: Pop(-2, 1); TaskReturn
0x556: Pop(2)
0x557: Push(GlobalVars[1])
0x558: Stack[-1] = (bool) 1
0x559: GlobalVars[1] = Stack[-1]; Pop(1)
0x55a: PushEmpty(bool)
0x55b: Stack[-1] = (bool) 0
0x55c: PushEmpty(bool, int)
0x55d: Stack[-1] = (int) 12
0x55e: Call2 0x514

0x55f: Pop(1)
0x560: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x561: Push(GlobalVars[2])
0x562: Pop(1); Push((bool) Stack[-1] == 0)
0x563: IF (Stack[-1] == 0) GOTO 0x565; Pop(1)

0x564: Stack[-1] = (bool) 1
0x565: IF (Stack[-1] == 0) GOTO 0x570; Pop(1)

0x566: PushEmpty(int, object)
0x567: Stack[-1] = Stack[-3]
0x568: Push(-2, 1); TaskCall(2)
0x569: Call2 0xf4

0x56a: Pop(-2, 1); TaskReturn
0x56b: Pop(2)
0x56c: Push(GlobalVars[2])
0x56d: Stack[-1] = (bool) 1
0x56e: GlobalVars[2] = Stack[-1]; Pop(1)
0x56f: Return(); Pop(0)

0x570: PushEmpty(int, object)
0x571: Stack[-1] = Stack[-3]
0x572: Push(-2, 1); TaskCall(4)
0x573: Call2 0x1f7

0x574: Pop(-2, 1); TaskReturn
0x575: Pop(2)
0x576: Return(); Pop(0)

