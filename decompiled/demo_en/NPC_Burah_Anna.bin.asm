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
	Rage
	Adoration
	Dream
	player
	GetPosition
	GetProperty
	SetProperty
	GetEyesHeight
	head
	voice_common
	c
	HasProperty
	Can't find lsh animation : 
	add
	money
	Money
	ui/NPC_Anna.png
	ui/NPC_Anna_b.png
	b5q01_1
	money10000 is given
	playsound
	givemoney
	oob6Anna1
	money3000 is given
	b5q01TalkToVera
	b5q01VeraDead
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
	CameraTransit (2 args)
	Rotate (2 args)
	HasAnimationTrack (2 args)
	LookAsyncCamera (1 args)
	CameraWaitForPlayFinish (0 args)
	ResumeWorld (0 args)
	CameraSwitchToNormal (0 args)
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
	CreateIntVector (1 args)
	SendWorldWndMessage (2 args)
	GetInvItemByName (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	TriggerWorld (2 args)

RunOp = 0x61a
RunTask = 10

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xa6 Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x1df Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x2dd Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x3e0 Vars = (int, int)
	GTASK_8 Vars = (object) Params = 2
	GTASK_9 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x5f0 Vars = (int, int)
	GTASK_10 Vars = (cvector) Params = 0
		EVENT_7 Op = 0x666 Vars = (int)
		EVENT_6 Op = 0x68c Vars = ()
		EVENT_5 Op = 0x69b Vars = ()
		EVENT_45 Op = 0x6a8 Vars = (bool)
		EVENT_0 Op = 0x6b4 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x744

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x8b5

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x8b3

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x8b7

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x8b9

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x925

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
0x31: Call2 0x858

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x799

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
0x48: Call2 0x788

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
0x56: IF (Stack[-1] == 0) GOTO 0x72; Pop(1)

0x57: PushEmpty(string)
0x58: Stack[-1] = "Neutral"
0x59: Call2 0x90

0x5a: Pop(1)
0x5b: Push((int) 530857)
0x5c: @@ SetMessage(Stack[-1])
0x5d: Pop(1)
0x5e: @@ ClearReplies()
0x5f: Pop(0)
0x60: PushEmpty(bool, object)
0x61: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x62: Call2 0x8e9

0x63: Pop(1)
0x64: IF (Stack[-1] == 0) GOTO 0x6a; Pop(1)

0x65: Push((int) 530859)
0x66: Push((int) 32176)
0x67: Push((int) 32175)
0x68: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x69: Pop(3)
0x6a: Push((int) 530858)
0x6b: Push((int) -1)
0x6c: Push((int) 32174)
0x6d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6e: Pop(3)
0x6f: GOTO 0x72

0x70: Return(); Pop(0)

0x71: GOTO 0x55

0x72: PushEmpty(bool)
0x73: Call2 0x8bb

0x74: Pop(0)
0x75: IF (Stack[-1] == 0) GOTO 0x81; Pop(1)

0x76: @ lshWaitForAnimEnd()
0x77: Pop(0)
0x78: Push( Stack[3 + Tasks[-1].StackPointer] )
0x79: IF (Stack[-1] == 0) GOTO 0x7b; Pop(1)

0x7a: GOTO 0x80

0x7b: PushEmpty(string)
0x7c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x7d: Call2 0x823

0x7e: Pop(1)
0x7f: GOTO 0x76

0x80: GOTO 0x8f

0x81: Push("all")
0x82: Push("idle")
0x83: @ PlayAnimation(Stack[-2], Stack[-1])
0x84: Pop(2)
0x85: @ WaitForAnimEnd()
0x86: Pop(0)
0x87: Push( Stack[3 + Tasks[-1].StackPointer] )
0x88: IF (Stack[-1] == 0) GOTO 0x8a; Pop(1)

0x89: GOTO 0x8f

0x8a: Push("all")
0x8b: Push("idle")
0x8c: @ PlayAnimation(Stack[-2], Stack[-1])
0x8d: Pop(2)
0x8e: GOTO 0x85

0x8f: Return(); Pop(0)

0x90: PushEmpty()
0x91: PushEmpty(bool)
0x92: Call2 0x8bb

0x93: Pop(0)
0x94: Pop(1); Push((bool) Stack[-1] == 0)
0x95: IF (Stack[-1] == 0) GOTO 0x97; Pop(1)

0x96: Return(); Pop(0)

0x97: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x98: IF (Stack[-1] == 0) GOTO 0x9a; Pop(1)

0x99: Return(); Pop(0)

0x9a: PushEmpty(string, bool)
0x9b: Stack[-2] = Stack[-3]
0x9c: Push("")
0x9d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x9e: IF (Stack[-1] == 0) GOTO 0xa1; Pop(1)

0x9f: Stack[-1] = (bool) 0
0xa0: GOTO 0xa2

0xa1: Stack[-1] = (bool) 1
0xa2: Call2 0x833

0xa3: Pop(2)
0xa4: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xa5: Return(); Pop(0)

0xa6: PushEmpty()
0xa7: Push((int) 1)
0xa8: IF (Stack[-1] == 0) GOTO 0x138; Pop(1)

0xa9: PushEmpty()
0xaa: Call2 0x851

0xab: Pop(0)
0xac: Push((int) 32175)
0xad: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xae: IF (Stack[-1] == 0) GOTO 0xb4; Pop(1)

0xaf: PushEmpty(object, object)
0xb0: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb1: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb2: Call2 0x8d9

0xb3: Pop(2)
0xb4: Push((int) 32173)
0xb5: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xb6: IF (Stack[-1] == 0) GOTO 0xd0; Pop(1)

0xb7: PushEmpty(string)
0xb8: Stack[-1] = "Neutral"
0xb9: Call2 0x90

0xba: Pop(1)
0xbb: Push((int) 530857)
0xbc: @@ SetMessage(Stack[-1])
0xbd: Pop(1)
0xbe: @@ ClearReplies()
0xbf: Pop(0)
0xc0: PushEmpty(bool, object)
0xc1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xc2: Call2 0x8e9

0xc3: Pop(1)
0xc4: IF (Stack[-1] == 0) GOTO 0xca; Pop(1)

0xc5: Push((int) 530859)
0xc6: Push((int) 32176)
0xc7: Push((int) 32175)
0xc8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xc9: Pop(3)
0xca: Push((int) 530858)
0xcb: Push((int) -1)
0xcc: Push((int) 32174)
0xcd: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xce: Pop(3)
0xcf: Return(); Pop(0)

0xd0: Push((int) 32176)
0xd1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xd2: IF (Stack[-1] == 0) GOTO 0xe7; Pop(1)

0xd3: PushEmpty(string)
0xd4: Stack[-1] = "Fear"
0xd5: Call2 0x90

0xd6: Pop(1)
0xd7: Push((int) 530860)
0xd8: @@ SetMessage(Stack[-1])
0xd9: Pop(1)
0xda: @@ ClearReplies()
0xdb: Pop(0)
0xdc: Push((int) 530861)
0xdd: Push((int) 32179)
0xde: Push((int) 32177)
0xdf: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe0: Pop(3)
0xe1: Push((int) 530862)
0xe2: Push((int) 32185)
0xe3: Push((int) 32178)
0xe4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe5: Pop(3)
0xe6: Return(); Pop(0)

0xe7: Push((int) 32179)
0xe8: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xe9: IF (Stack[-1] == 0) GOTO 0xfe; Pop(1)

0xea: PushEmpty(string)
0xeb: Stack[-1] = "Fear"
0xec: Call2 0x90

0xed: Pop(1)
0xee: Push((int) 530863)
0xef: @@ SetMessage(Stack[-1])
0xf0: Pop(1)
0xf1: @@ ClearReplies()
0xf2: Pop(0)
0xf3: Push((int) 530864)
0xf4: Push((int) 32182)
0xf5: Push((int) 32180)
0xf6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf7: Pop(3)
0xf8: Push((int) 530865)
0xf9: Push((int) 32185)
0xfa: Push((int) 32181)
0xfb: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xfc: Pop(3)
0xfd: Return(); Pop(0)

0xfe: Push((int) 32182)
0xff: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x100: IF (Stack[-1] == 0) GOTO 0x115; Pop(1)

0x101: PushEmpty(string)
0x102: Stack[-1] = "Fear"
0x103: Call2 0x90

0x104: Pop(1)
0x105: Push((int) 530866)
0x106: @@ SetMessage(Stack[-1])
0x107: Pop(1)
0x108: @@ ClearReplies()
0x109: Pop(0)
0x10a: Push((int) 530867)
0x10b: Push((int) 32185)
0x10c: Push((int) 32183)
0x10d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10e: Pop(3)
0x10f: Push((int) 530868)
0x110: Push((int) 32185)
0x111: Push((int) 32184)
0x112: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x113: Pop(3)
0x114: Return(); Pop(0)

0x115: Push((int) 32185)
0x116: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x117: IF (Stack[-1] == 0) GOTO 0x12c; Pop(1)

0x118: PushEmpty(string)
0x119: Stack[-1] = "Fear"
0x11a: Call2 0x90

0x11b: Pop(1)
0x11c: Push((int) 530870)
0x11d: @@ SetMessage(Stack[-1])
0x11e: Pop(1)
0x11f: @@ ClearReplies()
0x120: Pop(0)
0x121: Push((int) 530871)
0x122: Push((int) -1)
0x123: Push((int) 32189)
0x124: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x125: Pop(3)
0x126: Push((int) 530872)
0x127: Push((int) -1)
0x128: Push((int) 32190)
0x129: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x12a: Pop(3)
0x12b: Return(); Pop(0)

0x12c: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x12d: PushEmpty(bool)
0x12e: Call2 0x8bb

0x12f: Pop(0)
0x130: IF (Stack[-1] == 0) GOTO 0x134; Pop(1)

0x131: @ lshStopAnimation()
0x132: Pop(0)
0x133: GOTO 0x136

0x134: @ StopAnimation()
0x135: Pop(0)
0x136: Return(); Pop(0)

0x137: GOTO 0xa7

0x138: Return(); Pop(0)

0x139: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x13a: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x13b: PushEmpty(bool, object, float)
0x13c: Stack[-2] = Stack[-12]
0x13d: Stack[-1] = (float) 70.0
0x13e: Call2 0x744

0x13f: Pop(2)
0x140: Pop(1); Push((bool) Stack[-1] == 0)
0x141: IF (Stack[-1] == 0) GOTO 0x144; Pop(1)

0x142: Stack[-10] = (int) -2
0x143: Return(); Pop(8)

0x144: @ CreateDialog(Stack[-4])
0x145: Pop(0)
0x146: PushEmpty(int)
0x147: Call2 0x8b5

0x148: Pop(0)
0x149: @@ SetNPCName(Stack[-1])
0x14a: Pop(1)
0x14b: PushEmpty(int)
0x14c: Call2 0x8b3

0x14d: Pop(0)
0x14e: @@ SetNPCDescription(Stack[-1])
0x14f: Pop(1)
0x150: PushEmpty(string)
0x151: Call2 0x8b7

0x152: Pop(0)
0x153: @@ SetPhoto(Stack[-1])
0x154: Pop(1)
0x155: PushEmpty(string)
0x156: Call2 0x8b9

0x157: Pop(0)
0x158: @@ SetPhoto2(Stack[-1])
0x159: Pop(1)
0x15a: PushEmpty(int)
0x15b: Call2 0x925

0x15c: Pop(0)
0x15d: @@ SetPlayerName(Stack[-1])
0x15e: Pop(1)
0x15f: Stack[-2] = (int) -1
0x160: @ IsOverrideActive(Stack[-3])
0x161: Pop(0)
0x162: Push(Stack[-3])
0x163: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x164: Stack[-10] = (int) -2
0x165: Return(); Pop(8)

0x166: @ DoDialog(Stack[-4])
0x167: Pop(0)
0x168: PushEmpty(bool, object)
0x169: PushEmpty(object)
0x16a: Call2 0x858

0x16b: Stack[-2] = Stack[-1]
0x16c: Pop(1)
0x16d: Call2 0x799

0x16e: Pop(2)
0x16f: PushEmpty(object, object)
0x170: Stack[-2] = Stack[-11]
0x171: Stack[-1] = Stack[-6]
0x172: Push(-2, 4); TaskCall(3)
0x173: Call2 0x18a

0x174: Pop(-2, 4); TaskReturn
0x175: Pop(2)
0x176: @@ IsDialogEnd(Stack[-1])
0x177: Pop(0)
0x178: Pop(0); Push((bool) Stack[-1] == 0)
0x179: IF (Stack[-1] == 0) GOTO 0x17f; Pop(1)

0x17a: @ sync()
0x17b: Pop(0)
0x17c: @@ IsDialogEnd(Stack[-1])
0x17d: Pop(0)
0x17e: GOTO 0x178

0x17f: PushEmpty(object)
0x180: Stack[-1] = Stack[-10]
0x181: Call2 0x788

0x182: Pop(1)
0x183: @ StopDialog(Stack[-4])
0x184: Pop(0)
0x185: @@ GetReturnValue(Stack[-2])
0x186: Pop(0)
0x187: Stack[-10] = Stack[-2]
0x188: Return(); Pop(8)

0x189: Stack[-4] = 0
0x18a: PushEmpty()
0x18b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x18c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x18d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x18e: Push((int) 1)
0x18f: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x190: PushEmpty(string)
0x191: Stack[-1] = "Neutral"
0x192: Call2 0x1c9

0x193: Pop(1)
0x194: Push((int) 535294)
0x195: @@ SetMessage(Stack[-1])
0x196: Pop(1)
0x197: @@ ClearReplies()
0x198: Pop(0)
0x199: Push((int) 535295)
0x19a: Push((int) 36973)
0x19b: Push((int) 36972)
0x19c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x19d: Pop(3)
0x19e: Push((int) 535302)
0x19f: Push((int) -1)
0x1a0: Push((int) 36980)
0x1a1: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a2: Pop(3)
0x1a3: Push((int) 535303)
0x1a4: Push((int) -1)
0x1a5: Push((int) 36981)
0x1a6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1a7: Pop(3)
0x1a8: GOTO 0x1ab

0x1a9: Return(); Pop(0)

0x1aa: GOTO 0x18e

0x1ab: PushEmpty(bool)
0x1ac: Call2 0x8bb

0x1ad: Pop(0)
0x1ae: IF (Stack[-1] == 0) GOTO 0x1ba; Pop(1)

0x1af: @ lshWaitForAnimEnd()
0x1b0: Pop(0)
0x1b1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1b2: IF (Stack[-1] == 0) GOTO 0x1b4; Pop(1)

0x1b3: GOTO 0x1b9

0x1b4: PushEmpty(string)
0x1b5: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x1b6: Call2 0x823

0x1b7: Pop(1)
0x1b8: GOTO 0x1af

0x1b9: GOTO 0x1c8

0x1ba: Push("all")
0x1bb: Push("idle")
0x1bc: @ PlayAnimation(Stack[-2], Stack[-1])
0x1bd: Pop(2)
0x1be: @ WaitForAnimEnd()
0x1bf: Pop(0)
0x1c0: Push( Stack[3 + Tasks[-1].StackPointer] )
0x1c1: IF (Stack[-1] == 0) GOTO 0x1c3; Pop(1)

0x1c2: GOTO 0x1c8

0x1c3: Push("all")
0x1c4: Push("idle")
0x1c5: @ PlayAnimation(Stack[-2], Stack[-1])
0x1c6: Pop(2)
0x1c7: GOTO 0x1be

0x1c8: Return(); Pop(0)

0x1c9: PushEmpty()
0x1ca: PushEmpty(bool)
0x1cb: Call2 0x8bb

0x1cc: Pop(0)
0x1cd: Pop(1); Push((bool) Stack[-1] == 0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d0; Pop(1)

0x1cf: Return(); Pop(0)

0x1d0: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x1d1: IF (Stack[-1] == 0) GOTO 0x1d3; Pop(1)

0x1d2: Return(); Pop(0)

0x1d3: PushEmpty(string, bool)
0x1d4: Stack[-2] = Stack[-3]
0x1d5: Push("")
0x1d6: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x1d7: IF (Stack[-1] == 0) GOTO 0x1da; Pop(1)

0x1d8: Stack[-1] = (bool) 0
0x1d9: GOTO 0x1db

0x1da: Stack[-1] = (bool) 1
0x1db: Call2 0x833

0x1dc: Pop(2)
0x1dd: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x1de: Return(); Pop(0)

0x1df: PushEmpty()
0x1e0: Push((int) 1)
0x1e1: IF (Stack[-1] == 0) GOTO 0x23b; Pop(1)

0x1e2: PushEmpty()
0x1e3: Call2 0x851

0x1e4: Pop(0)
0x1e5: Push((int) 36971)
0x1e6: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x1e7: IF (Stack[-1] == 0) GOTO 0x201; Pop(1)

0x1e8: PushEmpty(string)
0x1e9: Stack[-1] = "Neutral"
0x1ea: Call2 0x1c9

0x1eb: Pop(1)
0x1ec: Push((int) 535294)
0x1ed: @@ SetMessage(Stack[-1])
0x1ee: Pop(1)
0x1ef: @@ ClearReplies()
0x1f0: Pop(0)
0x1f1: Push((int) 535295)
0x1f2: Push((int) 36973)
0x1f3: Push((int) 36972)
0x1f4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1f5: Pop(3)
0x1f6: Push((int) 535302)
0x1f7: Push((int) -1)
0x1f8: Push((int) 36980)
0x1f9: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1fa: Pop(3)
0x1fb: Push((int) 535303)
0x1fc: Push((int) -1)
0x1fd: Push((int) 36981)
0x1fe: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x1ff: Pop(3)
0x200: Return(); Pop(0)

0x201: Push((int) 36973)
0x202: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x203: IF (Stack[-1] == 0) GOTO 0x218; Pop(1)

0x204: PushEmpty(string)
0x205: Stack[-1] = "Neutral"
0x206: Call2 0x1c9

0x207: Pop(1)
0x208: Push((int) 535296)
0x209: @@ SetMessage(Stack[-1])
0x20a: Pop(1)
0x20b: @@ ClearReplies()
0x20c: Pop(0)
0x20d: Push((int) 535297)
0x20e: Push((int) 36975)
0x20f: Push((int) 36974)
0x210: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x211: Pop(3)
0x212: Push((int) 535301)
0x213: Push((int) 36975)
0x214: Push((int) 36978)
0x215: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x216: Pop(3)
0x217: Return(); Pop(0)

0x218: Push((int) 36975)
0x219: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x21a: IF (Stack[-1] == 0) GOTO 0x22f; Pop(1)

0x21b: PushEmpty(string)
0x21c: Stack[-1] = "Neutral"
0x21d: Call2 0x1c9

0x21e: Pop(1)
0x21f: Push((int) 535298)
0x220: @@ SetMessage(Stack[-1])
0x221: Pop(1)
0x222: @@ ClearReplies()
0x223: Pop(0)
0x224: Push((int) 535299)
0x225: Push((int) -1)
0x226: Push((int) 36976)
0x227: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x228: Pop(3)
0x229: Push((int) 535300)
0x22a: Push((int) -1)
0x22b: Push((int) 36977)
0x22c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x22d: Pop(3)
0x22e: Return(); Pop(0)

0x22f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x230: PushEmpty(bool)
0x231: Call2 0x8bb

0x232: Pop(0)
0x233: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x234: @ lshStopAnimation()
0x235: Pop(0)
0x236: GOTO 0x239

0x237: @ StopAnimation()
0x238: Pop(0)
0x239: Return(); Pop(0)

0x23a: GOTO 0x1e0

0x23b: Return(); Pop(0)

0x23c: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x23d: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x23e: PushEmpty(bool, object, float)
0x23f: Stack[-2] = Stack[-12]
0x240: Stack[-1] = (float) 70.0
0x241: Call2 0x744

0x242: Pop(2)
0x243: Pop(1); Push((bool) Stack[-1] == 0)
0x244: IF (Stack[-1] == 0) GOTO 0x247; Pop(1)

0x245: Stack[-10] = (int) -2
0x246: Return(); Pop(8)

0x247: @ CreateDialog(Stack[-4])
0x248: Pop(0)
0x249: PushEmpty(int)
0x24a: Call2 0x8b5

0x24b: Pop(0)
0x24c: @@ SetNPCName(Stack[-1])
0x24d: Pop(1)
0x24e: PushEmpty(int)
0x24f: Call2 0x8b3

0x250: Pop(0)
0x251: @@ SetNPCDescription(Stack[-1])
0x252: Pop(1)
0x253: PushEmpty(string)
0x254: Call2 0x8b7

0x255: Pop(0)
0x256: @@ SetPhoto(Stack[-1])
0x257: Pop(1)
0x258: PushEmpty(string)
0x259: Call2 0x8b9

0x25a: Pop(0)
0x25b: @@ SetPhoto2(Stack[-1])
0x25c: Pop(1)
0x25d: PushEmpty(int)
0x25e: Call2 0x925

0x25f: Pop(0)
0x260: @@ SetPlayerName(Stack[-1])
0x261: Pop(1)
0x262: Stack[-2] = (int) -1
0x263: @ IsOverrideActive(Stack[-3])
0x264: Pop(0)
0x265: Push(Stack[-3])
0x266: IF (Stack[-1] == 0) GOTO 0x269; Pop(1)

0x267: Stack[-10] = (int) -2
0x268: Return(); Pop(8)

0x269: @ DoDialog(Stack[-4])
0x26a: Pop(0)
0x26b: PushEmpty(bool, object)
0x26c: PushEmpty(object)
0x26d: Call2 0x858

0x26e: Stack[-2] = Stack[-1]
0x26f: Pop(1)
0x270: Call2 0x799

0x271: Pop(2)
0x272: PushEmpty(object, object)
0x273: Stack[-2] = Stack[-11]
0x274: Stack[-1] = Stack[-6]
0x275: Push(-2, 4); TaskCall(5)
0x276: Call2 0x28d

0x277: Pop(-2, 4); TaskReturn
0x278: Pop(2)
0x279: @@ IsDialogEnd(Stack[-1])
0x27a: Pop(0)
0x27b: Pop(0); Push((bool) Stack[-1] == 0)
0x27c: IF (Stack[-1] == 0) GOTO 0x282; Pop(1)

0x27d: @ sync()
0x27e: Pop(0)
0x27f: @@ IsDialogEnd(Stack[-1])
0x280: Pop(0)
0x281: GOTO 0x27b

0x282: PushEmpty(object)
0x283: Stack[-1] = Stack[-10]
0x284: Call2 0x788

0x285: Pop(1)
0x286: @ StopDialog(Stack[-4])
0x287: Pop(0)
0x288: @@ GetReturnValue(Stack[-2])
0x289: Pop(0)
0x28a: Stack[-10] = Stack[-2]
0x28b: Return(); Pop(8)

0x28c: Stack[-4] = 0
0x28d: PushEmpty()
0x28e: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x28f: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x290: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x291: Push((int) 1)
0x292: IF (Stack[-1] == 0) GOTO 0x2a9; Pop(1)

0x293: PushEmpty(string)
0x294: Stack[-1] = "Neutral"
0x295: Call2 0x2c7

0x296: Pop(1)
0x297: Push((int) 517997)
0x298: @@ SetMessage(Stack[-1])
0x299: Pop(1)
0x29a: @@ ClearReplies()
0x29b: Pop(0)
0x29c: Push((int) 517998)
0x29d: Push((int) 29658)
0x29e: Push((int) 19131)
0x29f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a0: Pop(3)
0x2a1: Push((int) 528292)
0x2a2: Push((int) 29658)
0x2a3: Push((int) 29657)
0x2a4: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2a5: Pop(3)
0x2a6: GOTO 0x2a9

0x2a7: Return(); Pop(0)

0x2a8: GOTO 0x291

0x2a9: PushEmpty(bool)
0x2aa: Call2 0x8bb

0x2ab: Pop(0)
0x2ac: IF (Stack[-1] == 0) GOTO 0x2b8; Pop(1)

0x2ad: @ lshWaitForAnimEnd()
0x2ae: Pop(0)
0x2af: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2b0: IF (Stack[-1] == 0) GOTO 0x2b2; Pop(1)

0x2b1: GOTO 0x2b7

0x2b2: PushEmpty(string)
0x2b3: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x2b4: Call2 0x823

0x2b5: Pop(1)
0x2b6: GOTO 0x2ad

0x2b7: GOTO 0x2c6

0x2b8: Push("all")
0x2b9: Push("idle")
0x2ba: @ PlayAnimation(Stack[-2], Stack[-1])
0x2bb: Pop(2)
0x2bc: @ WaitForAnimEnd()
0x2bd: Pop(0)
0x2be: Push( Stack[3 + Tasks[-1].StackPointer] )
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c1; Pop(1)

0x2c0: GOTO 0x2c6

0x2c1: Push("all")
0x2c2: Push("idle")
0x2c3: @ PlayAnimation(Stack[-2], Stack[-1])
0x2c4: Pop(2)
0x2c5: GOTO 0x2bc

0x2c6: Return(); Pop(0)

0x2c7: PushEmpty()
0x2c8: PushEmpty(bool)
0x2c9: Call2 0x8bb

0x2ca: Pop(0)
0x2cb: Pop(1); Push((bool) Stack[-1] == 0)
0x2cc: IF (Stack[-1] == 0) GOTO 0x2ce; Pop(1)

0x2cd: Return(); Pop(0)

0x2ce: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x2cf: IF (Stack[-1] == 0) GOTO 0x2d1; Pop(1)

0x2d0: Return(); Pop(0)

0x2d1: PushEmpty(string, bool)
0x2d2: Stack[-2] = Stack[-3]
0x2d3: Push("")
0x2d4: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x2d5: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d6: Stack[-1] = (bool) 0
0x2d7: GOTO 0x2d9

0x2d8: Stack[-1] = (bool) 1
0x2d9: Call2 0x833

0x2da: Pop(2)
0x2db: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x2dc: Return(); Pop(0)

0x2dd: PushEmpty()
0x2de: Push((int) 1)
0x2df: IF (Stack[-1] == 0) GOTO 0x31d; Pop(1)

0x2e0: PushEmpty()
0x2e1: Call2 0x851

0x2e2: Pop(0)
0x2e3: Push((int) 19130)
0x2e4: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2e5: IF (Stack[-1] == 0) GOTO 0x2fa; Pop(1)

0x2e6: PushEmpty(string)
0x2e7: Stack[-1] = "Neutral"
0x2e8: Call2 0x2c7

0x2e9: Pop(1)
0x2ea: Push((int) 517997)
0x2eb: @@ SetMessage(Stack[-1])
0x2ec: Pop(1)
0x2ed: @@ ClearReplies()
0x2ee: Pop(0)
0x2ef: Push((int) 517998)
0x2f0: Push((int) 29658)
0x2f1: Push((int) 19131)
0x2f2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f3: Pop(3)
0x2f4: Push((int) 528292)
0x2f5: Push((int) 29658)
0x2f6: Push((int) 29657)
0x2f7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x2f8: Pop(3)
0x2f9: Return(); Pop(0)

0x2fa: Push((int) 29658)
0x2fb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x2fc: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x2fd: PushEmpty(string)
0x2fe: Stack[-1] = "Neutral"
0x2ff: Call2 0x2c7

0x300: Pop(1)
0x301: Push((int) 528293)
0x302: @@ SetMessage(Stack[-1])
0x303: Pop(1)
0x304: @@ ClearReplies()
0x305: Pop(0)
0x306: Push((int) 528294)
0x307: Push((int) -1)
0x308: Push((int) 29660)
0x309: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30a: Pop(3)
0x30b: Push((int) 528295)
0x30c: Push((int) -1)
0x30d: Push((int) 29661)
0x30e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x30f: Pop(3)
0x310: Return(); Pop(0)

0x311: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x312: PushEmpty(bool)
0x313: Call2 0x8bb

0x314: Pop(0)
0x315: IF (Stack[-1] == 0) GOTO 0x319; Pop(1)

0x316: @ lshStopAnimation()
0x317: Pop(0)
0x318: GOTO 0x31b

0x319: @ StopAnimation()
0x31a: Pop(0)
0x31b: Return(); Pop(0)

0x31c: GOTO 0x2de

0x31d: Return(); Pop(0)

0x31e: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x31f: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x320: PushEmpty(bool, object, float)
0x321: Stack[-2] = Stack[-12]
0x322: Stack[-1] = (float) 70.0
0x323: Call2 0x744

0x324: Pop(2)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x329; Pop(1)

0x327: Stack[-10] = (int) -2
0x328: Return(); Pop(8)

0x329: @ CreateDialog(Stack[-4])
0x32a: Pop(0)
0x32b: PushEmpty(int)
0x32c: Call2 0x8b5

0x32d: Pop(0)
0x32e: @@ SetNPCName(Stack[-1])
0x32f: Pop(1)
0x330: PushEmpty(int)
0x331: Call2 0x8b3

0x332: Pop(0)
0x333: @@ SetNPCDescription(Stack[-1])
0x334: Pop(1)
0x335: PushEmpty(string)
0x336: Call2 0x8b7

0x337: Pop(0)
0x338: @@ SetPhoto(Stack[-1])
0x339: Pop(1)
0x33a: PushEmpty(string)
0x33b: Call2 0x8b9

0x33c: Pop(0)
0x33d: @@ SetPhoto2(Stack[-1])
0x33e: Pop(1)
0x33f: PushEmpty(int)
0x340: Call2 0x925

0x341: Pop(0)
0x342: @@ SetPlayerName(Stack[-1])
0x343: Pop(1)
0x344: Stack[-2] = (int) -1
0x345: @ IsOverrideActive(Stack[-3])
0x346: Pop(0)
0x347: Push(Stack[-3])
0x348: IF (Stack[-1] == 0) GOTO 0x34b; Pop(1)

0x349: Stack[-10] = (int) -2
0x34a: Return(); Pop(8)

0x34b: @ DoDialog(Stack[-4])
0x34c: Pop(0)
0x34d: PushEmpty(bool, object)
0x34e: PushEmpty(object)
0x34f: Call2 0x858

0x350: Stack[-2] = Stack[-1]
0x351: Pop(1)
0x352: Call2 0x799

0x353: Pop(2)
0x354: PushEmpty(object, object)
0x355: Stack[-2] = Stack[-11]
0x356: Stack[-1] = Stack[-6]
0x357: Push(-2, 4); TaskCall(7)
0x358: Call2 0x36f

0x359: Pop(-2, 4); TaskReturn
0x35a: Pop(2)
0x35b: @@ IsDialogEnd(Stack[-1])
0x35c: Pop(0)
0x35d: Pop(0); Push((bool) Stack[-1] == 0)
0x35e: IF (Stack[-1] == 0) GOTO 0x364; Pop(1)

0x35f: @ sync()
0x360: Pop(0)
0x361: @@ IsDialogEnd(Stack[-1])
0x362: Pop(0)
0x363: GOTO 0x35d

0x364: PushEmpty(object)
0x365: Stack[-1] = Stack[-10]
0x366: Call2 0x788

0x367: Pop(1)
0x368: @ StopDialog(Stack[-4])
0x369: Pop(0)
0x36a: @@ GetReturnValue(Stack[-2])
0x36b: Pop(0)
0x36c: Stack[-10] = Stack[-2]
0x36d: Return(); Pop(8)

0x36e: Stack[-4] = 0
0x36f: PushEmpty()
0x370: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x371: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x372: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x373: Push((int) 1)
0x374: IF (Stack[-1] == 0) GOTO 0x3ac; Pop(1)

0x375: PushEmpty(string)
0x376: Stack[-1] = "Fear"
0x377: Call2 0x3ca

0x378: Pop(1)
0x379: Push((int) 518646)
0x37a: @@ SetMessage(Stack[-1])
0x37b: Pop(1)
0x37c: @@ ClearReplies()
0x37d: Pop(0)
0x37e: PushEmpty(bool)
0x37f: Stack[-1] = (bool) 0
0x380: PushEmpty(bool, object)
0x381: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x382: Call2 0x8f5

0x383: Pop(1)
0x384: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x385: PushEmpty(bool, object)
0x386: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x387: Call2 0x90d

0x388: Pop(1)
0x389: IF (Stack[-1] == 0) GOTO 0x38b; Pop(1)

0x38a: Stack[-1] = (bool) 1
0x38b: IF (Stack[-1] == 0) GOTO 0x391; Pop(1)

0x38c: Push((int) 518647)
0x38d: Push((int) 19740)
0x38e: Push((int) 19739)
0x38f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x390: Pop(3)
0x391: PushEmpty(bool)
0x392: Stack[-1] = (bool) 0
0x393: PushEmpty(bool, object)
0x394: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x395: Call2 0x901

0x396: Pop(1)
0x397: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x398: PushEmpty(bool, object)
0x399: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x39a: Call2 0x919

0x39b: Pop(1)
0x39c: IF (Stack[-1] == 0) GOTO 0x39e; Pop(1)

0x39d: Stack[-1] = (bool) 1
0x39e: IF (Stack[-1] == 0) GOTO 0x3a4; Pop(1)

0x39f: Push((int) 518651)
0x3a0: Push((int) 19744)
0x3a1: Push((int) 19743)
0x3a2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a3: Pop(3)
0x3a4: Push((int) 518654)
0x3a5: Push((int) -1)
0x3a6: Push((int) 19746)
0x3a7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x3a8: Pop(3)
0x3a9: GOTO 0x3ac

0x3aa: Return(); Pop(0)

0x3ab: GOTO 0x373

0x3ac: PushEmpty(bool)
0x3ad: Call2 0x8bb

0x3ae: Pop(0)
0x3af: IF (Stack[-1] == 0) GOTO 0x3bb; Pop(1)

0x3b0: @ lshWaitForAnimEnd()
0x3b1: Pop(0)
0x3b2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3b3: IF (Stack[-1] == 0) GOTO 0x3b5; Pop(1)

0x3b4: GOTO 0x3ba

0x3b5: PushEmpty(string)
0x3b6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x3b7: Call2 0x823

0x3b8: Pop(1)
0x3b9: GOTO 0x3b0

0x3ba: GOTO 0x3c9

0x3bb: Push("all")
0x3bc: Push("idle")
0x3bd: @ PlayAnimation(Stack[-2], Stack[-1])
0x3be: Pop(2)
0x3bf: @ WaitForAnimEnd()
0x3c0: Pop(0)
0x3c1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x3c2: IF (Stack[-1] == 0) GOTO 0x3c4; Pop(1)

0x3c3: GOTO 0x3c9

0x3c4: Push("all")
0x3c5: Push("idle")
0x3c6: @ PlayAnimation(Stack[-2], Stack[-1])
0x3c7: Pop(2)
0x3c8: GOTO 0x3bf

0x3c9: Return(); Pop(0)

0x3ca: PushEmpty()
0x3cb: PushEmpty(bool)
0x3cc: Call2 0x8bb

0x3cd: Pop(0)
0x3ce: Pop(1); Push((bool) Stack[-1] == 0)
0x3cf: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3d0: Return(); Pop(0)

0x3d1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x3d2: IF (Stack[-1] == 0) GOTO 0x3d4; Pop(1)

0x3d3: Return(); Pop(0)

0x3d4: PushEmpty(string, bool)
0x3d5: Stack[-2] = Stack[-3]
0x3d6: Push("")
0x3d7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x3d8: IF (Stack[-1] == 0) GOTO 0x3db; Pop(1)

0x3d9: Stack[-1] = (bool) 0
0x3da: GOTO 0x3dc

0x3db: Stack[-1] = (bool) 1
0x3dc: Call2 0x833

0x3dd: Pop(2)
0x3de: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x3df: Return(); Pop(0)

0x3e0: PushEmpty()
0x3e1: Push((int) 1)
0x3e2: IF (Stack[-1] == 0) GOTO 0x54e; Pop(1)

0x3e3: PushEmpty()
0x3e4: Call2 0x851

0x3e5: Pop(0)
0x3e6: Push((int) 19739)
0x3e7: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3e8: IF (Stack[-1] == 0) GOTO 0x3ee; Pop(1)

0x3e9: PushEmpty(object, object)
0x3ea: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3eb: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3ec: Call2 0x8bd

0x3ed: Pop(2)
0x3ee: Push((int) 19745)
0x3ef: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x3f0: IF (Stack[-1] == 0) GOTO 0x400; Pop(1)

0x3f1: PushEmpty(object, object)
0x3f2: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f3: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f4: Call2 0x8c3

0x3f5: Pop(2)
0x3f6: PushEmpty(object, object)
0x3f7: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3f8: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3f9: Call2 0x8c9

0x3fa: Pop(2)
0x3fb: PushEmpty(object, object)
0x3fc: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x3fd: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x3fe: Call2 0x8d3

0x3ff: Pop(2)
0x400: Push((int) 19824)
0x401: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x402: IF (Stack[-1] == 0) GOTO 0x412; Pop(1)

0x403: PushEmpty(object, object)
0x404: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x405: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x406: Call2 0x8c3

0x407: Pop(2)
0x408: PushEmpty(object, object)
0x409: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40a: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x40b: Call2 0x8df

0x40c: Pop(2)
0x40d: PushEmpty(object, object)
0x40e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x40f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x410: Call2 0x8d3

0x411: Pop(2)
0x412: Push((int) 19738)
0x413: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x414: IF (Stack[-1] == 0) GOTO 0x44a; Pop(1)

0x415: PushEmpty(string)
0x416: Stack[-1] = "Fear"
0x417: Call2 0x3ca

0x418: Pop(1)
0x419: Push((int) 518646)
0x41a: @@ SetMessage(Stack[-1])
0x41b: Pop(1)
0x41c: @@ ClearReplies()
0x41d: Pop(0)
0x41e: PushEmpty(bool)
0x41f: Stack[-1] = (bool) 0
0x420: PushEmpty(bool, object)
0x421: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x422: Call2 0x8f5

0x423: Pop(1)
0x424: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x425: PushEmpty(bool, object)
0x426: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x427: Call2 0x90d

0x428: Pop(1)
0x429: IF (Stack[-1] == 0) GOTO 0x42b; Pop(1)

0x42a: Stack[-1] = (bool) 1
0x42b: IF (Stack[-1] == 0) GOTO 0x431; Pop(1)

0x42c: Push((int) 518647)
0x42d: Push((int) 19740)
0x42e: Push((int) 19739)
0x42f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x430: Pop(3)
0x431: PushEmpty(bool)
0x432: Stack[-1] = (bool) 0
0x433: PushEmpty(bool, object)
0x434: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x435: Call2 0x901

0x436: Pop(1)
0x437: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x438: PushEmpty(bool, object)
0x439: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x43a: Call2 0x919

0x43b: Pop(1)
0x43c: IF (Stack[-1] == 0) GOTO 0x43e; Pop(1)

0x43d: Stack[-1] = (bool) 1
0x43e: IF (Stack[-1] == 0) GOTO 0x444; Pop(1)

0x43f: Push((int) 518651)
0x440: Push((int) 19744)
0x441: Push((int) 19743)
0x442: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x443: Pop(3)
0x444: Push((int) 518654)
0x445: Push((int) -1)
0x446: Push((int) 19746)
0x447: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x448: Pop(3)
0x449: Return(); Pop(0)

0x44a: Push((int) 19744)
0x44b: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x44c: IF (Stack[-1] == 0) GOTO 0x466; Pop(1)

0x44d: PushEmpty(string)
0x44e: Stack[-1] = "Rage"
0x44f: Call2 0x3ca

0x450: Pop(1)
0x451: Push((int) 518652)
0x452: @@ SetMessage(Stack[-1])
0x453: Pop(1)
0x454: @@ ClearReplies()
0x455: Pop(0)
0x456: Push((int) 518720)
0x457: Push((int) 19815)
0x458: Push((int) 19811)
0x459: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45a: Pop(3)
0x45b: Push((int) 518722)
0x45c: Push((int) -1)
0x45d: Push((int) 19813)
0x45e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x45f: Pop(3)
0x460: Push((int) 518732)
0x461: Push((int) -1)
0x462: Push((int) 19824)
0x463: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x464: Pop(3)
0x465: Return(); Pop(0)

0x466: Push((int) 19815)
0x467: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x468: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x469: PushEmpty(string)
0x46a: Stack[-1] = "Rage"
0x46b: Call2 0x3ca

0x46c: Pop(1)
0x46d: Push((int) 518724)
0x46e: @@ SetMessage(Stack[-1])
0x46f: Pop(1)
0x470: @@ ClearReplies()
0x471: Pop(0)
0x472: Push((int) 518725)
0x473: Push((int) 19817)
0x474: Push((int) 19816)
0x475: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x476: Pop(3)
0x477: Push((int) 518727)
0x478: Push((int) 19819)
0x479: Push((int) 19818)
0x47a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x47b: Pop(3)
0x47c: Return(); Pop(0)

0x47d: Push((int) 19819)
0x47e: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x47f: IF (Stack[-1] == 0) GOTO 0x48f; Pop(1)

0x480: PushEmpty(string)
0x481: Stack[-1] = "Adoration"
0x482: Call2 0x3ca

0x483: Pop(1)
0x484: Push((int) 518728)
0x485: @@ SetMessage(Stack[-1])
0x486: Pop(1)
0x487: @@ ClearReplies()
0x488: Pop(0)
0x489: Push((int) 518729)
0x48a: Push((int) 19817)
0x48b: Push((int) 19820)
0x48c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x48d: Pop(3)
0x48e: Return(); Pop(0)

0x48f: Push((int) 19817)
0x490: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x491: IF (Stack[-1] == 0) GOTO 0x4a6; Pop(1)

0x492: PushEmpty(string)
0x493: Stack[-1] = "Adoration"
0x494: Call2 0x3ca

0x495: Pop(1)
0x496: Push((int) 518726)
0x497: @@ SetMessage(Stack[-1])
0x498: Pop(1)
0x499: @@ ClearReplies()
0x49a: Pop(0)
0x49b: Push((int) 518730)
0x49c: Push((int) -1)
0x49d: Push((int) 19822)
0x49e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x49f: Pop(3)
0x4a0: Push((int) 518653)
0x4a1: Push((int) -1)
0x4a2: Push((int) 19745)
0x4a3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4a4: Pop(3)
0x4a5: Return(); Pop(0)

0x4a6: Push((int) 19740)
0x4a7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4a8: IF (Stack[-1] == 0) GOTO 0x4b8; Pop(1)

0x4a9: PushEmpty(string)
0x4aa: Stack[-1] = "Rage"
0x4ab: Call2 0x3ca

0x4ac: Pop(1)
0x4ad: Push((int) 518648)
0x4ae: @@ SetMessage(Stack[-1])
0x4af: Pop(1)
0x4b0: @@ ClearReplies()
0x4b1: Pop(0)
0x4b2: Push((int) 518649)
0x4b3: Push((int) 19826)
0x4b4: Push((int) 19741)
0x4b5: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4b6: Pop(3)
0x4b7: Return(); Pop(0)

0x4b8: Push((int) 19826)
0x4b9: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4ba: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4bb: PushEmpty(string)
0x4bc: Stack[-1] = "Rage"
0x4bd: Call2 0x3ca

0x4be: Pop(1)
0x4bf: Push((int) 518734)
0x4c0: @@ SetMessage(Stack[-1])
0x4c1: Pop(1)
0x4c2: @@ ClearReplies()
0x4c3: Pop(0)
0x4c4: Push((int) 518735)
0x4c5: Push((int) 19830)
0x4c6: Push((int) 19827)
0x4c7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4c8: Pop(3)
0x4c9: Push((int) 518736)
0x4ca: Push((int) 19829)
0x4cb: Push((int) 19828)
0x4cc: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4cd: Pop(3)
0x4ce: PushEmpty(bool, object)
0x4cf: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x4d0: Call2 0x901

0x4d1: Pop(1)
0x4d2: IF (Stack[-1] == 0) GOTO 0x4d8; Pop(1)

0x4d3: Push((int) 531552)
0x4d4: Push((int) 19744)
0x4d5: Push((int) 32915)
0x4d6: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4d7: Pop(3)
0x4d8: Return(); Pop(0)

0x4d9: Push((int) 19829)
0x4da: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4db: IF (Stack[-1] == 0) GOTO 0x4f0; Pop(1)

0x4dc: PushEmpty(string)
0x4dd: Stack[-1] = "Rage"
0x4de: Call2 0x3ca

0x4df: Pop(1)
0x4e0: Push((int) 518737)
0x4e1: @@ SetMessage(Stack[-1])
0x4e2: Pop(1)
0x4e3: @@ ClearReplies()
0x4e4: Pop(0)
0x4e5: Push((int) 528296)
0x4e6: Push((int) 29663)
0x4e7: Push((int) 29662)
0x4e8: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4e9: Pop(3)
0x4ea: Push((int) 518742)
0x4eb: Push((int) -1)
0x4ec: Push((int) 19834)
0x4ed: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x4ee: Pop(3)
0x4ef: Return(); Pop(0)

0x4f0: Push((int) 29663)
0x4f1: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x4f2: IF (Stack[-1] == 0) GOTO 0x502; Pop(1)

0x4f3: PushEmpty(string)
0x4f4: Stack[-1] = "Dream"
0x4f5: Call2 0x3ca

0x4f6: Pop(1)
0x4f7: Push((int) 528297)
0x4f8: @@ SetMessage(Stack[-1])
0x4f9: Pop(1)
0x4fa: @@ ClearReplies()
0x4fb: Pop(0)
0x4fc: Push((int) 518741)
0x4fd: Push((int) 19835)
0x4fe: Push((int) 19833)
0x4ff: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x500: Pop(3)
0x501: Return(); Pop(0)

0x502: Push((int) 19835)
0x503: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x504: IF (Stack[-1] == 0) GOTO 0x514; Pop(1)

0x505: PushEmpty(string)
0x506: Stack[-1] = "Dream"
0x507: Call2 0x3ca

0x508: Pop(1)
0x509: Push((int) 518743)
0x50a: @@ SetMessage(Stack[-1])
0x50b: Pop(1)
0x50c: @@ ClearReplies()
0x50d: Pop(0)
0x50e: Push((int) 518744)
0x50f: Push((int) 19837)
0x510: Push((int) 19836)
0x511: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x512: Pop(3)
0x513: Return(); Pop(0)

0x514: Push((int) 19837)
0x515: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x516: IF (Stack[-1] == 0) GOTO 0x52b; Pop(1)

0x517: PushEmpty(string)
0x518: Stack[-1] = "Dream"
0x519: Call2 0x3ca

0x51a: Pop(1)
0x51b: Push((int) 518745)
0x51c: @@ SetMessage(Stack[-1])
0x51d: Pop(1)
0x51e: @@ ClearReplies()
0x51f: Pop(0)
0x520: Push((int) 518746)
0x521: Push((int) -1)
0x522: Push((int) 19838)
0x523: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x524: Pop(3)
0x525: Push((int) 518747)
0x526: Push((int) -1)
0x527: Push((int) 19839)
0x528: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x529: Pop(3)
0x52a: Return(); Pop(0)

0x52b: Push((int) 19830)
0x52c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x52d: IF (Stack[-1] == 0) GOTO 0x542; Pop(1)

0x52e: PushEmpty(string)
0x52f: Stack[-1] = "Adoration"
0x530: Call2 0x3ca

0x531: Pop(1)
0x532: Push((int) 518738)
0x533: @@ SetMessage(Stack[-1])
0x534: Pop(1)
0x535: @@ ClearReplies()
0x536: Pop(0)
0x537: Push((int) 518739)
0x538: Push((int) -1)
0x539: Push((int) 19831)
0x53a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x53b: Pop(3)
0x53c: Push((int) 518740)
0x53d: Push((int) -1)
0x53e: Push((int) 19832)
0x53f: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x540: Pop(3)
0x541: Return(); Pop(0)

0x542: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x543: PushEmpty(bool)
0x544: Call2 0x8bb

0x545: Pop(0)
0x546: IF (Stack[-1] == 0) GOTO 0x54a; Pop(1)

0x547: @ lshStopAnimation()
0x548: Pop(0)
0x549: GOTO 0x54c

0x54a: @ StopAnimation()
0x54b: Pop(0)
0x54c: Return(); Pop(0)

0x54d: GOTO 0x3e1

0x54e: Return(); Pop(0)

0x54f: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x550: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x551: PushEmpty(bool, object, float)
0x552: Stack[-2] = Stack[-12]
0x553: Stack[-1] = (float) 70.0
0x554: Call2 0x744

0x555: Pop(2)
0x556: Pop(1); Push((bool) Stack[-1] == 0)
0x557: IF (Stack[-1] == 0) GOTO 0x55a; Pop(1)

0x558: Stack[-10] = (int) -2
0x559: Return(); Pop(8)

0x55a: @ CreateDialog(Stack[-4])
0x55b: Pop(0)
0x55c: PushEmpty(int)
0x55d: Call2 0x8b5

0x55e: Pop(0)
0x55f: @@ SetNPCName(Stack[-1])
0x560: Pop(1)
0x561: PushEmpty(int)
0x562: Call2 0x8b3

0x563: Pop(0)
0x564: @@ SetNPCDescription(Stack[-1])
0x565: Pop(1)
0x566: PushEmpty(string)
0x567: Call2 0x8b7

0x568: Pop(0)
0x569: @@ SetPhoto(Stack[-1])
0x56a: Pop(1)
0x56b: PushEmpty(string)
0x56c: Call2 0x8b9

0x56d: Pop(0)
0x56e: @@ SetPhoto2(Stack[-1])
0x56f: Pop(1)
0x570: PushEmpty(int)
0x571: Call2 0x925

0x572: Pop(0)
0x573: @@ SetPlayerName(Stack[-1])
0x574: Pop(1)
0x575: Stack[-2] = (int) -1
0x576: @ IsOverrideActive(Stack[-3])
0x577: Pop(0)
0x578: Push(Stack[-3])
0x579: IF (Stack[-1] == 0) GOTO 0x57c; Pop(1)

0x57a: Stack[-10] = (int) -2
0x57b: Return(); Pop(8)

0x57c: @ DoDialog(Stack[-4])
0x57d: Pop(0)
0x57e: PushEmpty(bool, object)
0x57f: PushEmpty(object)
0x580: Call2 0x858

0x581: Stack[-2] = Stack[-1]
0x582: Pop(1)
0x583: Call2 0x799

0x584: Pop(2)
0x585: PushEmpty(object, object)
0x586: Stack[-2] = Stack[-11]
0x587: Stack[-1] = Stack[-6]
0x588: Push(-2, 4); TaskCall(9)
0x589: Call2 0x5a0

0x58a: Pop(-2, 4); TaskReturn
0x58b: Pop(2)
0x58c: @@ IsDialogEnd(Stack[-1])
0x58d: Pop(0)
0x58e: Pop(0); Push((bool) Stack[-1] == 0)
0x58f: IF (Stack[-1] == 0) GOTO 0x595; Pop(1)

0x590: @ sync()
0x591: Pop(0)
0x592: @@ IsDialogEnd(Stack[-1])
0x593: Pop(0)
0x594: GOTO 0x58e

0x595: PushEmpty(object)
0x596: Stack[-1] = Stack[-10]
0x597: Call2 0x788

0x598: Pop(1)
0x599: @ StopDialog(Stack[-4])
0x59a: Pop(0)
0x59b: @@ GetReturnValue(Stack[-2])
0x59c: Pop(0)
0x59d: Stack[-10] = Stack[-2]
0x59e: Return(); Pop(8)

0x59f: Stack[-4] = 0
0x5a0: PushEmpty()
0x5a1: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x5a2: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x5a3: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x5a4: Push((int) 1)
0x5a5: IF (Stack[-1] == 0) GOTO 0x5bc; Pop(1)

0x5a6: PushEmpty(string)
0x5a7: Stack[-1] = "Neutral"
0x5a8: Call2 0x5da

0x5a9: Pop(1)
0x5aa: Push((int) 540551)
0x5ab: @@ SetMessage(Stack[-1])
0x5ac: Pop(1)
0x5ad: @@ ClearReplies()
0x5ae: Pop(0)
0x5af: Push((int) 540552)
0x5b0: Push((int) -1)
0x5b1: Push((int) 42561)
0x5b2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b3: Pop(3)
0x5b4: Push((int) 540795)
0x5b5: Push((int) -1)
0x5b6: Push((int) 42844)
0x5b7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x5b8: Pop(3)
0x5b9: GOTO 0x5bc

0x5ba: Return(); Pop(0)

0x5bb: GOTO 0x5a4

0x5bc: PushEmpty(bool)
0x5bd: Call2 0x8bb

0x5be: Pop(0)
0x5bf: IF (Stack[-1] == 0) GOTO 0x5cb; Pop(1)

0x5c0: @ lshWaitForAnimEnd()
0x5c1: Pop(0)
0x5c2: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5c3: IF (Stack[-1] == 0) GOTO 0x5c5; Pop(1)

0x5c4: GOTO 0x5ca

0x5c5: PushEmpty(string)
0x5c6: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x5c7: Call2 0x823

0x5c8: Pop(1)
0x5c9: GOTO 0x5c0

0x5ca: GOTO 0x5d9

0x5cb: Push("all")
0x5cc: Push("idle")
0x5cd: @ PlayAnimation(Stack[-2], Stack[-1])
0x5ce: Pop(2)
0x5cf: @ WaitForAnimEnd()
0x5d0: Pop(0)
0x5d1: Push( Stack[3 + Tasks[-1].StackPointer] )
0x5d2: IF (Stack[-1] == 0) GOTO 0x5d4; Pop(1)

0x5d3: GOTO 0x5d9

0x5d4: Push("all")
0x5d5: Push("idle")
0x5d6: @ PlayAnimation(Stack[-2], Stack[-1])
0x5d7: Pop(2)
0x5d8: GOTO 0x5cf

0x5d9: Return(); Pop(0)

0x5da: PushEmpty()
0x5db: PushEmpty(bool)
0x5dc: Call2 0x8bb

0x5dd: Pop(0)
0x5de: Pop(1); Push((bool) Stack[-1] == 0)
0x5df: IF (Stack[-1] == 0) GOTO 0x5e1; Pop(1)

0x5e0: Return(); Pop(0)

0x5e1: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x5e2: IF (Stack[-1] == 0) GOTO 0x5e4; Pop(1)

0x5e3: Return(); Pop(0)

0x5e4: PushEmpty(string, bool)
0x5e5: Stack[-2] = Stack[-3]
0x5e6: Push("")
0x5e7: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x5e8: IF (Stack[-1] == 0) GOTO 0x5eb; Pop(1)

0x5e9: Stack[-1] = (bool) 0
0x5ea: GOTO 0x5ec

0x5eb: Stack[-1] = (bool) 1
0x5ec: Call2 0x833

0x5ed: Pop(2)
0x5ee: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x5ef: Return(); Pop(0)

0x5f0: PushEmpty()
0x5f1: Push((int) 1)
0x5f2: IF (Stack[-1] == 0) GOTO 0x619; Pop(1)

0x5f3: PushEmpty()
0x5f4: Call2 0x851

0x5f5: Pop(0)
0x5f6: Push((int) 42560)
0x5f7: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x5f8: IF (Stack[-1] == 0) GOTO 0x60d; Pop(1)

0x5f9: PushEmpty(string)
0x5fa: Stack[-1] = "Neutral"
0x5fb: Call2 0x5da

0x5fc: Pop(1)
0x5fd: Push((int) 540551)
0x5fe: @@ SetMessage(Stack[-1])
0x5ff: Pop(1)
0x600: @@ ClearReplies()
0x601: Pop(0)
0x602: Push((int) 540552)
0x603: Push((int) -1)
0x604: Push((int) 42561)
0x605: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x606: Pop(3)
0x607: Push((int) 540795)
0x608: Push((int) -1)
0x609: Push((int) 42844)
0x60a: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x60b: Pop(3)
0x60c: Return(); Pop(0)

0x60d: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x60e: PushEmpty(bool)
0x60f: Call2 0x8bb

0x610: Pop(0)
0x611: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x612: @ lshStopAnimation()
0x613: Pop(0)
0x614: GOTO 0x617

0x615: @ StopAnimation()
0x616: Pop(0)
0x617: Return(); Pop(0)

0x618: GOTO 0x5f1

0x619: Return(); Pop(0)

0x61a: Push(GlobalVars[1])
0x61b: Stack[-1] = (bool) 0
0x61c: GlobalVars[1] = Stack[-1]; Pop(1)
0x61d: PushEmpty()
0x61e: Call2 0x621

0x61f: Pop(0)
0x620: Return(); Pop(0)

0x621: PushEmpty(bool)
0x622: Call2 0x73f

0x623: Pop(0)
0x624: Pop(1); Push((bool) Stack[-1] == 0)
0x625: IF (Stack[-1] == 0) GOTO 0x628; Pop(1)

0x626: @ Hold()
0x627: Pop(0)
0x628: @ GetDirection(Stack[-0])
0x629: Pop(0)
0x62a: PushEmpty()
0x62b: Call2 0x6d1

0x62c: Pop(0)
0x62d: GOTO 0x62a

0x62e: Return(); Pop(0)

0x62f: PushEmpty(object, object)
0x630: Push("player")
0x631: @ FindActor(Stack[-2], Stack[-1])
0x632: Pop(1)
0x633: Pop(0); Push((bool) Stack[-1] == 0)
0x634: IF (Stack[-1] == 0) GOTO 0x637; Pop(1)

0x635: Stack[-3] = (bool) 0
0x636: Return(); Pop(2)

0x637: PushEmpty(bool, object)
0x638: Stack[-1] = Stack[-3]
0x639: Call2 0x736

0x63a: Stack[-5] = Stack[-2]
0x63b: Pop(2)
0x63c: Return(); Pop(2)

0x63d: Stack[-1] = 0
0x63e: Push(CvectorIndex(Stack[-0], 0))
0x63f: Push(CvectorIndex(Stack[-0], 2))
0x640: @ RotateAsync(Stack[-2], Stack[-1])
0x641: Pop(2)
0x642: Return(); Pop(0)

0x643: PushEmpty(object, bool, object, bool)
0x644: Push("player")
0x645: @ FindActor(Stack[-3], Stack[-1])
0x646: Pop(1)
0x647: Pop(0); Push((bool) Stack[-2] == 0)
0x648: IF (Stack[-1] == 0) GOTO 0x64b; Pop(1)

0x649: Stack[-5] = (bool) 0
0x64a: Return(); Pop(4)

0x64b: PushEmpty(float, object)
0x64c: Stack[-1] = Stack[-4]
0x64d: Call2 0x71d

0x64e: Pop(1)
0x64f: Push((float)90000.0)
0x650: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x651: IF (Stack[-1] == 0) GOTO 0x654; Pop(1)

0x652: Stack[-5] = (bool) 0
0x653: Return(); Pop(4)

0x654: @ CanSee(Stack[-1], Stack[-2])
0x655: Pop(0)
0x656: Stack[-5] = Stack[-1]
0x657: Return(); Pop(4)

0x658: Stack[-2] = 0
0x659: PushEmpty(float, float)
0x65a: Push((int) 8)
0x65b: Push((int) 16)
0x65c: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x65d: Pop(2)
0x65e: Push((int) 10)
0x65f: @ SetTimer(Stack[-1], Stack[-2])
0x660: Pop(1)
0x661: Return(); Pop(2)

0x662: Push((int) 10)
0x663: @ KillTimer(Stack[-1])
0x664: Pop(1)
0x665: Return(); Pop(0)

0x666: PushEmpty()
0x667: Push((int) 10)
0x668: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x669: IF (Stack[-1] == 0) GOTO 0x68b; Pop(1)

0x66a: PushEmpty()
0x66b: Call2 0x662

0x66c: Pop(0)
0x66d: PushEmpty(bool)
0x66e: Stack[-1] = (bool) 0
0x66f: PushEmpty(bool)
0x670: Call2 0x73f

0x671: Pop(0)
0x672: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x673: PushEmpty(bool)
0x674: Call2 0x643

0x675: Pop(0)
0x676: IF (Stack[-1] == 0) GOTO 0x678; Pop(1)

0x677: Stack[-1] = (bool) 1
0x678: IF (Stack[-1] == 0) GOTO 0x685; Pop(1)

0x679: PushEmpty(bool)
0x67a: Call2 0x62f

0x67b: Pop(0)
0x67c: IF (Stack[-1] == 0) GOTO 0x684; Pop(1)

0x67d: PushEmpty(bool, object)
0x67e: PushEmpty(object)
0x67f: Call2 0x858

0x680: Stack[-2] = Stack[-1]
0x681: Pop(1)
0x682: Call2 0x7d3

0x683: Pop(2)
0x684: GOTO 0x68b

0x685: PushEmpty()
0x686: Call2 0x63e

0x687: Pop(0)
0x688: PushEmpty()
0x689: Call2 0x659

0x68a: Pop(0)
0x68b: Return(); Pop(0)

0x68c: PushEmpty()
0x68d: Call2 0x718

0x68e: Pop(0)
0x68f: PushEmpty()
0x690: Call2 0x662

0x691: Pop(0)
0x692: @ lshStopSpeech()
0x693: Pop(0)
0x694: @ lshStopAnimation()
0x695: Pop(0)
0x696: @ StopAsync()
0x697: Pop(0)
0x698: @ Hold()
0x699: Pop(0)
0x69a: Return(); Pop(0)

0x69b: @ StopGroup0()
0x69c: Pop(0)
0x69d: PushEmpty()
0x69e: Call2 0x662

0x69f: Pop(0)
0x6a0: PushEmpty(string)
0x6a1: Stack[-1] = "Neutral"
0x6a2: Call2 0x823

0x6a3: Pop(1)
0x6a4: PushEmpty()
0x6a5: Call2 0x659

0x6a6: Pop(0)
0x6a7: Return(); Pop(0)

0x6a8: PushEmpty()
0x6a9: Push(Stack[-1])
0x6aa: IF (Stack[-1] == 0) GOTO 0x6af; Pop(1)

0x6ab: PushEmpty()
0x6ac: Call2 0x659

0x6ad: Pop(0)
0x6ae: GOTO 0x6b3

0x6af: PushEmpty(string)
0x6b0: Stack[-1] = "Neutral"
0x6b1: Call2 0x823

0x6b2: Pop(1)
0x6b3: Return(); Pop(0)

0x6b4: PushEmpty(bool, bool)
0x6b5: @ IsOverrideActive(Stack[-1])
0x6b6: Pop(0)
0x6b7: Pop(0); Push((bool) Stack[-1] == 0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6d0; Pop(1)

0x6b9: EventDisable(0)
0x6ba: PushEmpty()
0x6bb: Call2 0x718

0x6bc: Pop(0)
0x6bd: PushEmpty(bool, object)
0x6be: Stack[-1] = Stack[-5]
0x6bf: Call2 0x736

0x6c0: Pop(2)
0x6c1: EventEnable(0)
0x6c2: PushEmpty(object)
0x6c3: Stack[-1] = Stack[-4]
0x6c4: Call2 0x936

0x6c5: Pop(1)
0x6c6: PushEmpty(string)
0x6c7: Stack[-1] = "Neutral"
0x6c8: Call2 0x823

0x6c9: Pop(1)
0x6ca: PushEmpty()
0x6cb: Call2 0x662

0x6cc: Pop(0)
0x6cd: PushEmpty()
0x6ce: Call2 0x659

0x6cf: Pop(0)
0x6d0: Return(); Pop(2)

0x6d1: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x6d2: @ WaitForAnimEnd()
0x6d3: Pop(0)
0x6d4: PushEmpty(bool)
0x6d5: Call2 0x73f

0x6d6: Pop(0)
0x6d7: Pop(1); Push((bool) Stack[-1] == 0)
0x6d8: IF (Stack[-1] == 0) GOTO 0x6da; Pop(1)

0x6d9: Return(); Pop(12)

0x6da: PushEmpty(int)
0x6db: Call2 0x8a2

0x6dc: Stack[-7] = Stack[-1]
0x6dd: Pop(1)
0x6de: Stack[-5] = (int) 0
0x6df: PushEmpty(bool)
0x6e0: Stack[-1] = (bool) 0
0x6e1: Push((int) 5)
0x6e2: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x6e3: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e4: PushEmpty(bool)
0x6e5: Call2 0x73f

0x6e6: Pop(0)
0x6e7: IF (Stack[-1] == 0) GOTO 0x6e9; Pop(1)

0x6e8: Stack[-1] = (bool) 1
0x6e9: IF (Stack[-1] == 0) GOTO 0x713; Pop(1)

0x6ea: Pop(0); Push((bool) Stack[-6] == 0)
0x6eb: IF (Stack[-1] == 0) GOTO 0x6f3; Pop(1)

0x6ec: Push((int) 3)
0x6ed: @ Sleep(Stack[-1], Stack[-5])
0x6ee: Pop(1)
0x6ef: Pop(0); Push((bool) Stack[-4] == 0)
0x6f0: IF (Stack[-1] == 0) GOTO 0x6f2; Pop(1)

0x6f1: GOTO 0x713

0x6f2: GOTO 0x708

0x6f3: @ irand(Stack[-3], Stack[-6])
0x6f4: Pop(0)
0x6f5: Push((int) 5)
0x6f6: @ irand(Stack[-3], Stack[-1])
0x6f7: Pop(1)
0x6f8: Push((int) 0)
0x6f9: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x6fa: IF (Stack[-1] == 0) GOTO 0x6fc; Pop(1)

0x6fb: Stack[-3] = (int) 0
0x6fc: Push("all")
0x6fd: PushEmpty(string, int)
0x6fe: Stack[-1] = Stack[-6]
0x6ff: Call2 0x89b

0x700: Pop(1)
0x701: @ PlayAnimation(Stack[-2], Stack[-1])
0x702: Pop(2)
0x703: @ WaitForAnimEnd(Stack[-1])
0x704: Pop(0)
0x705: Pop(0); Push((bool) Stack[-1] == 0)
0x706: IF (Stack[-1] == 0) GOTO 0x708; Pop(1)

0x707: GOTO 0x713

0x708: PushEmpty(bool)
0x709: Call2 0x716

0x70a: Pop(0)
0x70b: Pop(1); Push((bool) Stack[-1] == 0)
0x70c: IF (Stack[-1] == 0) GOTO 0x70e; Pop(1)

0x70d: GOTO 0x713

0x70e: @ ResetAAS()
0x70f: Pop(0)
0x710: Push((int) 1)
0x711: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x712: GOTO 0x6df

0x713: @ ResetAAS()
0x714: Pop(0)
0x715: Return(); Pop(12)

0x716: Stack[-1] = (bool) 1
0x717: Return(); Pop(0)

0x718: @ StopAnimation()
0x719: Pop(0)
0x71a: @ StopGroup0()
0x71b: Pop(0)
0x71c: Return(); Pop(0)

0x71d: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x71e: @ GetPosition(Stack[-3])
0x71f: Pop(0)
0x720: @@ GetPosition(Stack[-2])
0x721: Pop(0)
0x722: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x723: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x724: Return(); Pop(6)

0x725: PushEmpty(int, int)
0x726: @@ GetProperty(Stack[-4], Stack[-1])
0x727: Pop(0)
0x728: Pop(0); Push(Stack[-1] + Stack[-3]);
0x729: @@ SetProperty(Stack[-5], Stack[-1])
0x72a: Pop(1)
0x72b: Return(); Pop(2)

0x72c: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x72d: @ GetPosition(Stack[-3])
0x72e: Pop(0)
0x72f: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x730: Push(CvectorIndex(Stack[-2], 0))
0x731: Push(CvectorIndex(Stack[-3], 2))
0x732: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x733: Pop(2)
0x734: Stack[-8] = Stack[-1]
0x735: Return(); Pop(6)

0x736: PushEmpty(cvector, cvector)
0x737: @@ GetPosition(Stack[-1])
0x738: Pop(0)
0x739: PushEmpty(bool, cvector)
0x73a: Stack[-1] = Stack[-3]
0x73b: Call2 0x72c

0x73c: Stack[-6] = Stack[-2]
0x73d: Pop(2)
0x73e: Return(); Pop(2)

0x73f: PushEmpty(bool, bool)
0x740: @ IsLoaded(Stack[-1])
0x741: Pop(0)
0x742: Stack[-3] = Stack[-1]
0x743: Return(); Pop(2)

0x744: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x745: @@ GetPosition(Stack[-8])
0x746: Pop(0)
0x747: @@ GetEyesHeight(Stack[-9])
0x748: Pop(0)
0x749: Push(CvectorIndex(Stack[-8], 1))
0x74a: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x74b: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x74c: @ GetPosition(Stack[-7])
0x74d: Pop(0)
0x74e: @ GetEyesHeight(Stack[-9])
0x74f: Pop(0)
0x750: Push(CvectorIndex(Stack[-7], 1))
0x751: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x752: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x753: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x754: Push(CvectorIndex(Stack[-6], 1))
0x755: Stack[-1] = (int) 0
0x756: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x757: Pop(0); Push(Stack[-6] | Stack[-6]);
0x758: Pop(1); Push(Sqrt(Stack[-1]))
0x759: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x75a: Stack[-5] = -Stack[-6]; Pop(0);
0x75b: Pop(0); Push(Stack[-6] * Stack[-19]);
0x75c: PushEmpty(cvector, cvector)
0x75d: Push(CVector(0.0, 1.0, 0.0))
0x75e: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x75f: Call2 0x85e

0x760: Pop(1)
0x761: Push((int) 25)
0x762: Pop(2); Push(Stack[-2] * Stack[-1]);
0x763: Pop(2); Push(Stack[-2] + Stack[-1]);
0x764: Push(CVector(0.0, 10.0, 0.0))
0x765: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x766: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x767: @ IsOverrideActive(Stack[-2])
0x768: Pop(0)
0x769: Push(Stack[-2])
0x76a: IF (Stack[-1] == 0) GOTO 0x76d; Pop(1)

0x76b: Stack[-21] = (bool) 0
0x76c: Return(); Pop(18)

0x76d: @ StopWorld()
0x76e: Pop(0)
0x76f: @ CameraTransit(Stack[-3], Stack[-5])
0x770: Pop(0)
0x771: Push(CvectorIndex(Stack[-4], 0))
0x772: Push(CvectorIndex(Stack[-5], 2))
0x773: @ Rotate(Stack[-2], Stack[-1])
0x774: Pop(2)
0x775: PushEmpty(bool)
0x776: Call2 0x8bb

0x777: Pop(0)
0x778: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x779: GOTO 0x782

0x77a: Push("head")
0x77b: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x77c: Pop(1)
0x77d: Push(Stack[-1])
0x77e: IF (Stack[-1] == 0) GOTO 0x782; Pop(1)

0x77f: Push("head")
0x780: @ LookAsyncCamera(Stack[-1])
0x781: Pop(1)
0x782: @ CameraWaitForPlayFinish()
0x783: Pop(0)
0x784: @ ResumeWorld()
0x785: Pop(0)
0x786: Stack[-21] = (bool) 1
0x787: Return(); Pop(18)

0x788: PushEmpty(bool, bool)
0x789: @ CameraSwitchToNormal()
0x78a: Pop(0)
0x78b: PushEmpty(bool)
0x78c: Call2 0x8bb

0x78d: Pop(0)
0x78e: IF (Stack[-1] == 0) GOTO 0x790; Pop(1)

0x78f: GOTO 0x798

0x790: Push("head")
0x791: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x792: Pop(1)
0x793: Push(Stack[-1])
0x794: IF (Stack[-1] == 0) GOTO 0x798; Pop(1)

0x795: Push("head")
0x796: @ UnlookAsync(Stack[-1])
0x797: Pop(1)
0x798: Return(); Pop(2)

0x799: PushEmpty(int, int, int, int)
0x79a: Push("voice_common")
0x79b: @ GetVariable(Stack[-1], Stack[-3])
0x79c: Pop(1)
0x79d: Push(Stack[-2])
0x79e: IF (Stack[-1] == 0) GOTO 0x7bf; Pop(1)

0x79f: PushEmpty(bool, object)
0x7a0: Stack[-1] = Stack[-7]
0x7a1: Call2 0x7d3

0x7a2: Pop(1)
0x7a3: Pop(1); Push((bool) Stack[-1] == 0)
0x7a4: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7a5: PushEmpty(bool, object)
0x7a6: Stack[-1] = Stack[-7]
0x7a7: Call2 0x7f8

0x7a8: Pop(1)
0x7a9: Pop(1); Push((bool) Stack[-1] == 0)
0x7aa: IF (Stack[-1] == 0) GOTO 0x7ad; Pop(1)

0x7ab: Stack[-6] = (bool) 0
0x7ac: Return(); Pop(4)

0x7ad: Push((int) 2)
0x7ae: @ irand(Stack[-2], Stack[-1])
0x7af: Pop(1)
0x7b0: Push(Stack[-1])
0x7b1: IF (Stack[-1] == 0) GOTO 0x7ba; Pop(1)

0x7b2: Push("voice_common")
0x7b3: Push((int) 1)
0x7b4: Pop(1); Push(Stack[-4] + Stack[-1]);
0x7b5: Push((int) 3)
0x7b6: Pop(2); Push(Stack[-2] % Stack[-1]);
0x7b7: @ SetVariable(Stack[-2], Stack[-1])
0x7b8: Pop(2)
0x7b9: GOTO 0x7be

0x7ba: Push("voice_common")
0x7bb: Push((int) 0)
0x7bc: @ SetVariable(Stack[-2], Stack[-1])
0x7bd: Pop(2)
0x7be: GOTO 0x7d1

0x7bf: PushEmpty(bool, object)
0x7c0: Stack[-1] = Stack[-7]
0x7c1: Call2 0x7f8

0x7c2: Pop(1)
0x7c3: Pop(1); Push((bool) Stack[-1] == 0)
0x7c4: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7c5: PushEmpty(bool, object)
0x7c6: Stack[-1] = Stack[-7]
0x7c7: Call2 0x7d3

0x7c8: Pop(1)
0x7c9: Pop(1); Push((bool) Stack[-1] == 0)
0x7ca: IF (Stack[-1] == 0) GOTO 0x7cd; Pop(1)

0x7cb: Stack[-6] = (bool) 0
0x7cc: Return(); Pop(4)

0x7cd: Push("voice_common")
0x7ce: Push((int) 1)
0x7cf: @ SetVariable(Stack[-2], Stack[-1])
0x7d0: Pop(2)
0x7d1: Stack[-6] = (bool) 1
0x7d2: Return(); Pop(4)

0x7d3: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7d4: Stack[-5] = "c"
0x7d5: Stack[-4] = (int) 0
0x7d6: Push((int) 1)
0x7d7: IF (Stack[-1] == 0) GOTO 0x7e3; Pop(1)

0x7d8: Push((int) 1)
0x7d9: Pop(1); Push(Stack[-5] + Stack[-1]);
0x7da: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7db: @@ HasProperty(Stack[-1], Stack[-4])
0x7dc: Pop(1)
0x7dd: Pop(0); Push((bool) Stack[-3] == 0)
0x7de: IF (Stack[-1] == 0) GOTO 0x7e0; Pop(1)

0x7df: GOTO 0x7e3

0x7e0: Push((int) 1)
0x7e1: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x7e2: GOTO 0x7d6

0x7e3: Pop(0); Push((bool) Stack[-4] == 0)
0x7e4: IF (Stack[-1] == 0) GOTO 0x7e7; Pop(1)

0x7e5: Stack[-12] = (bool) 0
0x7e6: Return(); Pop(10)

0x7e7: Stack[-2] = (int) 0
0x7e8: Push((int) 1)
0x7e9: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x7ea: IF (Stack[-1] == 0) GOTO 0x7ed; Pop(1)

0x7eb: @ irand(Stack[-2], Stack[-4])
0x7ec: Pop(0)
0x7ed: Push((int) 1)
0x7ee: Pop(1); Push(Stack[-3] + Stack[-1]);
0x7ef: Pop(1); Push(Stack[-6] + Stack[-1]);
0x7f0: @@ GetProperty(Stack[-1], Stack[-2])
0x7f1: Pop(1)
0x7f2: PushEmpty(bool, string)
0x7f3: Stack[-1] = Stack[-3]
0x7f4: Call2 0x842

0x7f5: Stack[-14] = Stack[-2]
0x7f6: Pop(2)
0x7f7: Return(); Pop(10)

0x7f8: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x7f9: Push("d")
0x7fa: PushEmpty(int)
0x7fb: Call2 0x88c

0x7fc: Pop(0)
0x7fd: Pop(2); Push(Stack[-2] + Stack[-1]);
0x7fe: Push("m")
0x7ff: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x800: Stack[-4] = (int) 0
0x801: Push((int) 1)
0x802: IF (Stack[-1] == 0) GOTO 0x80e; Pop(1)

0x803: Push((int) 1)
0x804: Pop(1); Push(Stack[-5] + Stack[-1]);
0x805: Pop(1); Push(Stack[-6] + Stack[-1]);
0x806: @@ HasProperty(Stack[-1], Stack[-4])
0x807: Pop(1)
0x808: Pop(0); Push((bool) Stack[-3] == 0)
0x809: IF (Stack[-1] == 0) GOTO 0x80b; Pop(1)

0x80a: GOTO 0x80e

0x80b: Push((int) 1)
0x80c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x80d: GOTO 0x801

0x80e: Pop(0); Push((bool) Stack[-4] == 0)
0x80f: IF (Stack[-1] == 0) GOTO 0x812; Pop(1)

0x810: Stack[-12] = (bool) 0
0x811: Return(); Pop(10)

0x812: Stack[-2] = (int) 0
0x813: Push((int) 1)
0x814: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x815: IF (Stack[-1] == 0) GOTO 0x818; Pop(1)

0x816: @ irand(Stack[-2], Stack[-4])
0x817: Pop(0)
0x818: Push((int) 1)
0x819: Pop(1); Push(Stack[-3] + Stack[-1]);
0x81a: Pop(1); Push(Stack[-6] + Stack[-1]);
0x81b: @@ GetProperty(Stack[-1], Stack[-2])
0x81c: Pop(1)
0x81d: PushEmpty(bool, string)
0x81e: Stack[-1] = Stack[-3]
0x81f: Call2 0x842

0x820: Stack[-14] = Stack[-2]
0x821: Pop(2)
0x822: Return(); Pop(10)

0x823: PushEmpty(bool, float, float, bool, float, float)
0x824: @ lshHasAnimation(Stack[-3], Stack[-7])
0x825: Pop(0)
0x826: Push(Stack[-3])
0x827: IF (Stack[-1] == 0) GOTO 0x82e; Pop(1)

0x828: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x829: Pop(0)
0x82a: Push((bool) 0)
0x82b: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x82c: Pop(1)
0x82d: GOTO 0x832

0x82e: Push("Can't find lsh animation : ")
0x82f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x830: @ Trace(Stack[-1])
0x831: Pop(1)
0x832: Return(); Pop(6)

0x833: PushEmpty(bool, float, float, bool, float, float)
0x834: @ lshHasAnimation(Stack[-3], Stack[-8])
0x835: Pop(0)
0x836: Push(Stack[-3])
0x837: IF (Stack[-1] == 0) GOTO 0x83d; Pop(1)

0x838: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x839: Pop(0)
0x83a: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x83b: Pop(0)
0x83c: GOTO 0x841

0x83d: Push("Can't find lsh animation : ")
0x83e: Pop(1); Push(Stack[-1] + Stack[-9]);
0x83f: @ Trace(Stack[-1])
0x840: Pop(1)
0x841: Return(); Pop(6)

0x842: PushEmpty(bool, bool)
0x843: PushEmpty(bool)
0x844: Call2 0x8bb

0x845: Pop(0)
0x846: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x847: @ lshHasSpeech(Stack[-1], Stack[-3])
0x848: Pop(0)
0x849: Push(Stack[-1])
0x84a: IF (Stack[-1] == 0) GOTO 0x84f; Pop(1)

0x84b: @ lshPlaySpeech(Stack[-3])
0x84c: Pop(0)
0x84d: Stack[-4] = (bool) 1
0x84e: Return(); Pop(2)

0x84f: Stack[-4] = (bool) 0
0x850: Return(); Pop(2)

0x851: PushEmpty(bool)
0x852: Call2 0x8bb

0x853: Pop(0)
0x854: IF (Stack[-1] == 0) GOTO 0x857; Pop(1)

0x855: @ lshStopSpeech()
0x856: Pop(0)
0x857: Return(); Pop(0)

0x858: PushEmpty(object, object)
0x859: @ self(Stack[-1])
0x85a: Pop(0)
0x85b: Stack[-3] = Stack[-1]
0x85c: Return(); Pop(2)

0x85d: Stack[-1] = 0
0x85e: PushEmpty(float, float)
0x85f: Pop(0); Push(Stack[-3] | Stack[-3]);
0x860: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x861: Push((float)0.0)
0x862: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x863: IF (Stack[-1] == 0) GOTO 0x866; Pop(1)

0x864: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x865: Return(); Pop(2)

0x866: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x867: Return(); Pop(2)

0x868: PushEmpty(int, int)
0x869: @ GetVariable(Stack[-3], Stack[-1])
0x86a: Pop(0)
0x86b: Stack[-4] = Stack[-1]
0x86c: Return(); Pop(2)

0x86d: PushEmpty(object, object)
0x86e: @ CreateIntVector(Stack[-1])
0x86f: Pop(0)
0x870: @@ add(Stack[-4])
0x871: Pop(0)
0x872: @@ add(Stack[-3])
0x873: Pop(0)
0x874: Push((int) 3)
0x875: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x876: Pop(1)
0x877: Return(); Pop(2)

0x878: Stack[-1] = 0
0x879: PushEmpty(int, int)
0x87a: PushEmpty(object, string, int)
0x87b: Stack[-3] = Stack[-7]
0x87c: Stack[-2] = "money"
0x87d: Stack[-1] = Stack[-6]
0x87e: Call2 0x725

0x87f: Pop(3)
0x880: Push((int) 0)
0x881: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x882: IF (Stack[-1] == 0) GOTO 0x88b; Pop(1)

0x883: Push("Money")
0x884: @ GetInvItemByName(Stack[-2], Stack[-1])
0x885: Pop(1)
0x886: PushEmpty(int, int)
0x887: Stack[-2] = Stack[-3]
0x888: Stack[-1] = Stack[-5]
0x889: Call2 0x86d

0x88a: Pop(2)
0x88b: Return(); Pop(2)

0x88c: PushEmpty(float, float)
0x88d: @ GetGameTime(Stack[-1])
0x88e: Pop(0)
0x88f: Push((int) 1)
0x890: PushEmpty(int)
0x891: Push((int) 24)
0x892: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x893: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x894: Return(); Pop(2)

0x895: PushEmpty()
0x896: PushEmpty(int)
0x897: Call2 0x88c

0x898: Pop(0)
0x899: Stack[-3] = Stack[-1] == Stack[-2]; Pop(1);
0x89a: Return(); Pop(0)

0x89b: PushEmpty(string, string)
0x89c: Stack[-1] = "idle"
0x89d: Push(Stack[-3])
0x89e: IF (Stack[-1] == 0) GOTO 0x8a0; Pop(1)

0x89f: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x8a0: Stack[-4] = Stack[-1]
0x8a1: Return(); Pop(2)

0x8a2: PushEmpty(int, bool, int, bool)
0x8a3: Stack[-2] = (int) 0
0x8a4: Push("all")
0x8a5: PushEmpty(string, int)
0x8a6: Stack[-1] = Stack[-5]
0x8a7: Call2 0x89b

0x8a8: Pop(1)
0x8a9: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x8aa: Pop(2)
0x8ab: Pop(0); Push((bool) Stack[-1] == 0)
0x8ac: IF (Stack[-1] == 0) GOTO 0x8ae; Pop(1)

0x8ad: GOTO 0x8b1

0x8ae: Push((int) 1)
0x8af: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x8b0: GOTO 0x8a4

0x8b1: Stack[-5] = Stack[-2]
0x8b2: Return(); Pop(4)

0x8b3: Stack[-1] = (int) 515530
0x8b4: Return(); Pop(0)

0x8b5: Stack[-1] = (int) 502856
0x8b6: Return(); Pop(0)

0x8b7: Stack[-1] = "ui/NPC_Anna.png"
0x8b8: Return(); Pop(0)

0x8b9: Stack[-1] = "ui/NPC_Anna_b.png"
0x8ba: Return(); Pop(0)

0x8bb: Stack[-1] = (bool) 1
0x8bc: Return(); Pop(0)

0x8bd: PushEmpty()
0x8be: Push("b5q01_1")
0x8bf: Push((int) 1)
0x8c0: @ SetVariable(Stack[-2], Stack[-1])
0x8c1: Pop(2)
0x8c2: Return(); Pop(0)

0x8c3: PushEmpty()
0x8c4: Push("b5q01_1")
0x8c5: Push((int) 1000)
0x8c6: @ SetVariable(Stack[-2], Stack[-1])
0x8c7: Pop(2)
0x8c8: Return(); Pop(0)

0x8c9: PushEmpty()
0x8ca: Push("money10000 is given")
0x8cb: @ Trace(Stack[-1])
0x8cc: Pop(1)
0x8cd: PushEmpty(object, int)
0x8ce: Stack[-2] = Stack[-4]
0x8cf: Stack[-1] = (int) 10000
0x8d0: Call2 0x879

0x8d1: Pop(2)
0x8d2: Return(); Pop(0)

0x8d3: PushEmpty()
0x8d4: Push("playsound")
0x8d5: Push("givemoney")
0x8d6: @ TriggerWorld(Stack[-2], Stack[-1])
0x8d7: Pop(2)
0x8d8: Return(); Pop(0)

0x8d9: PushEmpty()
0x8da: Push("oob6Anna1")
0x8db: Push((int) 1)
0x8dc: @ SetVariable(Stack[-2], Stack[-1])
0x8dd: Pop(2)
0x8de: Return(); Pop(0)

0x8df: PushEmpty()
0x8e0: Push("money3000 is given")
0x8e1: @ Trace(Stack[-1])
0x8e2: Pop(1)
0x8e3: PushEmpty(object, int)
0x8e4: Stack[-2] = Stack[-4]
0x8e5: Stack[-1] = (int) 3000
0x8e6: Call2 0x879

0x8e7: Pop(2)
0x8e8: Return(); Pop(0)

0x8e9: PushEmpty()
0x8ea: PushEmpty(int, string)
0x8eb: Stack[-1] = "oob6Anna1"
0x8ec: Call2 0x868

0x8ed: Pop(1)
0x8ee: Push((int) 0)
0x8ef: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8f0: IF (Stack[-1] == 0) GOTO 0x8f3; Pop(1)

0x8f1: Stack[-2] = (bool) 1
0x8f2: Return(); Pop(0)

0x8f3: Stack[-2] = (bool) 0
0x8f4: Return(); Pop(0)

0x8f5: PushEmpty()
0x8f6: PushEmpty(int, string)
0x8f7: Stack[-1] = "b5q01TalkToVera"
0x8f8: Call2 0x868

0x8f9: Pop(1)
0x8fa: Push((int) 1)
0x8fb: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x8fc: IF (Stack[-1] == 0) GOTO 0x8ff; Pop(1)

0x8fd: Stack[-2] = (bool) 1
0x8fe: Return(); Pop(0)

0x8ff: Stack[-2] = (bool) 0
0x900: Return(); Pop(0)

0x901: PushEmpty()
0x902: PushEmpty(int, string)
0x903: Stack[-1] = "b5q01VeraDead"
0x904: Call2 0x868

0x905: Pop(1)
0x906: Push((int) 0)
0x907: Pop(2); Push((bool) Stack[-2] != Stack[-1])
0x908: IF (Stack[-1] == 0) GOTO 0x90b; Pop(1)

0x909: Stack[-2] = (bool) 1
0x90a: Return(); Pop(0)

0x90b: Stack[-2] = (bool) 0
0x90c: Return(); Pop(0)

0x90d: PushEmpty()
0x90e: PushEmpty(int, string)
0x90f: Stack[-1] = "b5q01_1"
0x910: Call2 0x868

0x911: Pop(1)
0x912: Push((int) 0)
0x913: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x914: IF (Stack[-1] == 0) GOTO 0x917; Pop(1)

0x915: Stack[-2] = (bool) 1
0x916: Return(); Pop(0)

0x917: Stack[-2] = (bool) 0
0x918: Return(); Pop(0)

0x919: PushEmpty()
0x91a: PushEmpty(int, string)
0x91b: Stack[-1] = "b5q01_1"
0x91c: Call2 0x868

0x91d: Pop(1)
0x91e: Push((int) 1)
0x91f: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x920: IF (Stack[-1] == 0) GOTO 0x923; Pop(1)

0x921: Stack[-2] = (bool) 1
0x922: Return(); Pop(0)

0x923: Stack[-2] = (bool) 0
0x924: Return(); Pop(0)

0x925: PushEmpty(int, int)
0x926: Push("branch")
0x927: @ GetVariable(Stack[-1], Stack[-2])
0x928: Pop(1)
0x929: Push((int) 0)
0x92a: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x92b: IF (Stack[-1] == 0) GOTO 0x92f; Pop(1)

0x92c: Stack[-3] = (int) 1
0x92d: Return(); Pop(2)

0x92e: GOTO 0x934

0x92f: Push((int) 1)
0x930: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x931: IF (Stack[-1] == 0) GOTO 0x934; Pop(1)

0x932: Stack[-3] = (int) 2
0x933: Return(); Pop(2)

0x934: Stack[-3] = (int) 3
0x935: Return(); Pop(2)

0x936: PushEmpty()
0x937: Push(GlobalVars[1])
0x938: Pop(1); Push((bool) Stack[-1] == 0)
0x939: IF (Stack[-1] == 0) GOTO 0x943; Pop(1)

0x93a: PushEmpty(int, object)
0x93b: Stack[-1] = Stack[-3]
0x93c: Push(-2, 1); TaskCall(4)
0x93d: Call2 0x23c

0x93e: Pop(-2, 1); TaskReturn
0x93f: Pop(2)
0x940: Push(GlobalVars[1])
0x941: Stack[-1] = (bool) 1
0x942: GlobalVars[1] = Stack[-1]; Pop(1)
0x943: PushEmpty(bool, int)
0x944: Stack[-1] = (int) 5
0x945: Call2 0x895

0x946: Pop(1)
0x947: IF (Stack[-1] == 0) GOTO 0x94f; Pop(1)

0x948: PushEmpty(int, object)
0x949: Stack[-1] = Stack[-3]
0x94a: Push(-2, 1); TaskCall(6)
0x94b: Call2 0x31e

0x94c: Pop(-2, 1); TaskReturn
0x94d: Pop(2)
0x94e: Return(); Pop(0)

0x94f: PushEmpty(bool, int)
0x950: Stack[-1] = (int) 6
0x951: Call2 0x895

0x952: Pop(1)
0x953: IF (Stack[-1] == 0) GOTO 0x95b; Pop(1)

0x954: PushEmpty(int, object)
0x955: Stack[-1] = Stack[-3]
0x956: Push(-2, 1); TaskCall(0)
0x957: Call2 0x0

0x958: Pop(-2, 1); TaskReturn
0x959: Pop(2)
0x95a: Return(); Pop(0)

0x95b: PushEmpty(bool)
0x95c: Stack[-1] = (bool) 0
0x95d: PushEmpty(bool, int)
0x95e: Stack[-1] = (int) 12
0x95f: Call2 0x895

0x960: Pop(1)
0x961: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x962: Push(GlobalVars[2])
0x963: Pop(1); Push((bool) Stack[-1] == 0)
0x964: IF (Stack[-1] == 0) GOTO 0x966; Pop(1)

0x965: Stack[-1] = (bool) 1
0x966: IF (Stack[-1] == 0) GOTO 0x971; Pop(1)

0x967: PushEmpty(int, object)
0x968: Stack[-1] = Stack[-3]
0x969: Push(-2, 1); TaskCall(2)
0x96a: Call2 0x139

0x96b: Pop(-2, 1); TaskReturn
0x96c: Pop(2)
0x96d: Push(GlobalVars[2])
0x96e: Stack[-1] = (bool) 1
0x96f: GlobalVars[2] = Stack[-1]; Pop(1)
0x970: Return(); Pop(0)

0x971: PushEmpty(int, object)
0x972: Stack[-1] = Stack[-3]
0x973: Push(-2, 1); TaskCall(8)
0x974: Call2 0x54f

0x975: Pop(-2, 1); TaskReturn
0x976: Pop(2)
0x977: Return(); Pop(0)

