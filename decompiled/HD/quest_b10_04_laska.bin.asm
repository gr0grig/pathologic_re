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
	restore
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
	b10q04LaskaTalk
	quest_b10_04
	restore_laska
	Can't retrieve diary root
	Find
	Can't find diary parent with id: 
	AddChild
	GetCategory
	branch
	ui/NPC_Laska.png
	ui/NPC_Laska_b.png

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
	IsLoaded (1 args)
	RemoveActor (1 args)
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
	Trigger (2 args)
	GetGameTime (1 args)
	HasAnimation (3 args)
	CreateDiaryEntry (4 args)
	GetDiaryRoot (1 args)
	SendWorldWndMessage (1 args)
	SetDiarySection (1 args)

RunOp = 0x154
RunTask = 2

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0xbb Vars = (int, int)
	GTASK_2 Vars = (cvector, bool) Params = 0
		EVENT_26 Op = 0x158 Vars = (string)
		EVENT_6 Op = 0x16c Vars = ()
		EVENT_5 Op = 0x179 Vars = ()
		EVENT_7 Op = 0x1c2 Vars = (int)
		EVENT_45 Op = 0x204 Vars = (bool)
		EVENT_0 Op = 0x210 Vars = (object)


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-2] = Stack[-12]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x299

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x454

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1])
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x452

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1])
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x456

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1])
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x458

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1])
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x441

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
0x31: Call2 0x3af

0x32: Stack[-2] = Stack[-1]
0x33: Pop(1)
0x34: Call2 0x2f0

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
0x48: Call2 0x2de

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
0x56: IF (Stack[-1] == 0) GOTO 0x87; Pop(1)

0x57: PushEmpty(bool, object)
0x58: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x59: Call2 0x3ff

0x5a: Pop(1)
0x5b: Pop(1); Push((bool) Stack[-1] == 0)
0x5c: IF (Stack[-1] == 0) GOTO 0x71; Pop(1)

0x5d: PushEmpty(string)
0x5e: Stack[-1] = "Neutral"
0x5f: Call2 0xa5

0x60: Pop(1)
0x61: Push((int) 530461)
0x62: @@ SetMessage(Stack[-1])
0x63: Pop(1)
0x64: @@ ClearReplies()
0x65: Pop(0)
0x66: Push((int) 531473)
0x67: Push((int) 32825)
0x68: Push((int) 32824)
0x69: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6a: Pop(3)
0x6b: Push((int) 531479)
0x6c: Push((int) 32825)
0x6d: Push((int) 32830)
0x6e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x6f: Pop(3)
0x70: GOTO 0x87

0x71: PushEmpty(string)
0x72: Stack[-1] = "Neutral"
0x73: Call2 0xa5

0x74: Pop(1)
0x75: Push((int) 530463)
0x76: @@ SetMessage(Stack[-1])
0x77: Pop(1)
0x78: @@ ClearReplies()
0x79: Pop(0)
0x7a: Push((int) 530464)
0x7b: Push((int) -1)
0x7c: Push((int) 31830)
0x7d: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x7e: Pop(3)
0x7f: Push((int) 531472)
0x80: Push((int) -1)
0x81: Push((int) 32823)
0x82: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x83: Pop(3)
0x84: GOTO 0x87

0x85: Return(); Pop(0)

0x86: GOTO 0x55

0x87: PushEmpty(bool)
0x88: Call2 0x45a

0x89: Pop(0)
0x8a: IF (Stack[-1] == 0) GOTO 0x96; Pop(1)

0x8b: @ lshWaitForAnimEnd()
0x8c: Pop(0)
0x8d: Push( Stack[3 + Tasks[-1].StackPointer] )
0x8e: IF (Stack[-1] == 0) GOTO 0x90; Pop(1)

0x8f: GOTO 0x95

0x90: PushEmpty(string)
0x91: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x92: Call2 0x37a

0x93: Pop(1)
0x94: GOTO 0x8b

0x95: GOTO 0xa4

0x96: Push("all")
0x97: Push("idle")
0x98: @ PlayAnimation(Stack[-2], Stack[-1])
0x99: Pop(2)
0x9a: @ WaitForAnimEnd()
0x9b: Pop(0)
0x9c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x9d: IF (Stack[-1] == 0) GOTO 0x9f; Pop(1)

0x9e: GOTO 0xa4

0x9f: Push("all")
0xa0: Push("idle")
0xa1: @ PlayAnimation(Stack[-2], Stack[-1])
0xa2: Pop(2)
0xa3: GOTO 0x9a

0xa4: Return(); Pop(0)

0xa5: PushEmpty()
0xa6: PushEmpty(bool)
0xa7: Call2 0x45a

0xa8: Pop(0)
0xa9: Pop(1); Push((bool) Stack[-1] == 0)
0xaa: IF (Stack[-1] == 0) GOTO 0xac; Pop(1)

0xab: Return(); Pop(0)

0xac: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0xad: IF (Stack[-1] == 0) GOTO 0xaf; Pop(1)

0xae: Return(); Pop(0)

0xaf: PushEmpty(string, bool)
0xb0: Stack[-2] = Stack[-3]
0xb1: Push("")
0xb2: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0xb3: IF (Stack[-1] == 0) GOTO 0xb6; Pop(1)

0xb4: Stack[-1] = (bool) 0
0xb5: GOTO 0xb7

0xb6: Stack[-1] = (bool) 1
0xb7: Call2 0x38a

0xb8: Pop(2)
0xb9: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0xba: Return(); Pop(0)

0xbb: PushEmpty()
0xbc: Push((int) 1)
0xbd: IF (Stack[-1] == 0) GOTO 0x14b; Pop(1)

0xbe: PushEmpty()
0xbf: Call2 0x3a8

0xc0: Pop(0)
0xc1: Push((int) 31828)
0xc2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xc3: IF (Stack[-1] == 0) GOTO 0xc9; Pop(1)

0xc4: PushEmpty(object, object)
0xc5: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xc6: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xc7: Call2 0x3f1

0xc8: Pop(2)
0xc9: Push((int) 31827)
0xca: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xcb: IF (Stack[-1] == 0) GOTO 0xfa; Pop(1)

0xcc: PushEmpty(bool, object)
0xcd: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0xce: Call2 0x3ff

0xcf: Pop(1)
0xd0: Pop(1); Push((bool) Stack[-1] == 0)
0xd1: IF (Stack[-1] == 0) GOTO 0xe6; Pop(1)

0xd2: PushEmpty(string)
0xd3: Stack[-1] = "Neutral"
0xd4: Call2 0xa5

0xd5: Pop(1)
0xd6: Push((int) 530461)
0xd7: @@ SetMessage(Stack[-1])
0xd8: Pop(1)
0xd9: @@ ClearReplies()
0xda: Pop(0)
0xdb: Push((int) 531473)
0xdc: Push((int) 32825)
0xdd: Push((int) 32824)
0xde: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xdf: Pop(3)
0xe0: Push((int) 531479)
0xe1: Push((int) 32825)
0xe2: Push((int) 32830)
0xe3: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xe4: Pop(3)
0xe5: Return(); Pop(0)

0xe6: PushEmpty(string)
0xe7: Stack[-1] = "Neutral"
0xe8: Call2 0xa5

0xe9: Pop(1)
0xea: Push((int) 530463)
0xeb: @@ SetMessage(Stack[-1])
0xec: Pop(1)
0xed: @@ ClearReplies()
0xee: Pop(0)
0xef: Push((int) 530464)
0xf0: Push((int) -1)
0xf1: Push((int) 31830)
0xf2: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf3: Pop(3)
0xf4: Push((int) 531472)
0xf5: Push((int) -1)
0xf6: Push((int) 32823)
0xf7: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0xf8: Pop(3)
0xf9: Return(); Pop(0)

0xfa: Push((int) 32825)
0xfb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xfc: IF (Stack[-1] == 0) GOTO 0x111; Pop(1)

0xfd: PushEmpty(string)
0xfe: Stack[-1] = "Neutral"
0xff: Call2 0xa5

0x100: Pop(1)
0x101: Push((int) 531474)
0x102: @@ SetMessage(Stack[-1])
0x103: Pop(1)
0x104: @@ ClearReplies()
0x105: Pop(0)
0x106: Push((int) 531475)
0x107: Push((int) 32827)
0x108: Push((int) 32826)
0x109: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10a: Pop(3)
0x10b: Push((int) 531480)
0x10c: Push((int) 32827)
0x10d: Push((int) 32832)
0x10e: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x10f: Pop(3)
0x110: Return(); Pop(0)

0x111: Push((int) 32827)
0x112: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x113: IF (Stack[-1] == 0) GOTO 0x128; Pop(1)

0x114: PushEmpty(string)
0x115: Stack[-1] = "Neutral"
0x116: Call2 0xa5

0x117: Pop(1)
0x118: Push((int) 531476)
0x119: @@ SetMessage(Stack[-1])
0x11a: Pop(1)
0x11b: @@ ClearReplies()
0x11c: Pop(0)
0x11d: Push((int) 531477)
0x11e: Push((int) 32829)
0x11f: Push((int) 32828)
0x120: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x121: Pop(3)
0x122: Push((int) 531481)
0x123: Push((int) 32829)
0x124: Push((int) 32834)
0x125: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x126: Pop(3)
0x127: Return(); Pop(0)

0x128: Push((int) 32829)
0x129: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x12a: IF (Stack[-1] == 0) GOTO 0x13f; Pop(1)

0x12b: PushEmpty(string)
0x12c: Stack[-1] = "Neutral"
0x12d: Call2 0xa5

0x12e: Pop(1)
0x12f: Push((int) 531478)
0x130: @@ SetMessage(Stack[-1])
0x131: Pop(1)
0x132: @@ ClearReplies()
0x133: Pop(0)
0x134: Push((int) 530462)
0x135: Push((int) -1)
0x136: Push((int) 31828)
0x137: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x138: Pop(3)
0x139: Push((int) 531482)
0x13a: Push((int) -1)
0x13b: Push((int) 32836)
0x13c: @@ AddReply(Stack[-3], Stack[-2], Stack[-1])
0x13d: Pop(3)
0x13e: Return(); Pop(0)

0x13f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x140: PushEmpty(bool)
0x141: Call2 0x45a

0x142: Pop(0)
0x143: IF (Stack[-1] == 0) GOTO 0x147; Pop(1)

0x144: @ lshStopAnimation()
0x145: Pop(0)
0x146: GOTO 0x149

0x147: @ StopAnimation()
0x148: Pop(0)
0x149: Return(); Pop(0)

0x14a: GOTO 0xbc

0x14b: Return(); Pop(0)

0x14c: PushEmpty()
0x14d: PushEmpty(int, object)
0x14e: Stack[-1] = Stack[-3]
0x14f: Push(-2, 1); TaskCall(0)
0x150: Call2 0x0

0x151: Pop(-2, 1); TaskReturn
0x152: Pop(2)
0x153: Return(); Pop(0)

0x154: PushEmpty()
0x155: Call2 0x17d

0x156: Pop(0)
0x157: Return(); Pop(0)

0x158: PushEmpty(bool, bool)
0x159: Push("cleanup")
0x15a: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x15b: IF (Stack[-1] == 0) GOTO 0x167; Pop(1)

0x15c: Stack[1 + Tasks[-1].StackPointer] = (bool)1
0x15d: @ IsLoaded(Stack[-1])
0x15e: Pop(0)
0x15f: Pop(0); Push((bool) Stack[-1] == 0)
0x160: IF (Stack[-1] == 0) GOTO 0x166; Pop(1)

0x161: PushEmpty(object)
0x162: Call2 0x3af

0x163: Pop(0)
0x164: @ RemoveActor(Stack[-1])
0x165: Pop(1)
0x166: GOTO 0x16b

0x167: Push("restore")
0x168: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x169: IF (Stack[-1] == 0) GOTO 0x16b; Pop(1)

0x16a: Stack[1 + Tasks[-1].StackPointer] = (bool)0
0x16b: Return(); Pop(2)

0x16c: Push( Stack[1 + Tasks[-1].StackPointer] )
0x16d: IF (Stack[-1] == 0) GOTO 0x175; Pop(1)

0x16e: PushEmpty(object)
0x16f: Call2 0x3af

0x170: Pop(0)
0x171: @ RemoveActor(Stack[-1])
0x172: Pop(1)
0x173: @ Hold()
0x174: Pop(0)
0x175: PushEmpty()
0x176: Call2 0x1e8

0x177: Pop(0)
0x178: Return(); Pop(0)

0x179: PushEmpty()
0x17a: Call2 0x1f7

0x17b: Pop(0)
0x17c: Return(); Pop(0)

0x17d: PushEmpty(bool)
0x17e: Call2 0x294

0x17f: Pop(0)
0x180: Pop(1); Push((bool) Stack[-1] == 0)
0x181: IF (Stack[-1] == 0) GOTO 0x184; Pop(1)

0x182: @ Hold()
0x183: Pop(0)
0x184: @ GetDirection(Stack[-0])
0x185: Pop(0)
0x186: PushEmpty()
0x187: Call2 0x22d

0x188: Pop(0)
0x189: GOTO 0x186

0x18a: Return(); Pop(0)

0x18b: PushEmpty(object, object)
0x18c: Push("player")
0x18d: @ FindActor(Stack[-2], Stack[-1])
0x18e: Pop(1)
0x18f: Pop(0); Push((bool) Stack[-1] == 0)
0x190: IF (Stack[-1] == 0) GOTO 0x193; Pop(1)

0x191: Stack[-3] = (bool) 0
0x192: Return(); Pop(2)

0x193: PushEmpty(bool, object)
0x194: Stack[-1] = Stack[-3]
0x195: Call2 0x28b

0x196: Stack[-5] = Stack[-2]
0x197: Pop(2)
0x198: Return(); Pop(2)

0x199: Stack[-1] = 0
0x19a: Push(CvectorIndex(Stack[-0], 0))
0x19b: Push(CvectorIndex(Stack[-0], 2))
0x19c: @ RotateAsync(Stack[-2], Stack[-1])
0x19d: Pop(2)
0x19e: Return(); Pop(0)

0x19f: PushEmpty(object, bool, object, bool)
0x1a0: Push("player")
0x1a1: @ FindActor(Stack[-3], Stack[-1])
0x1a2: Pop(1)
0x1a3: Pop(0); Push((bool) Stack[-2] == 0)
0x1a4: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a5: Stack[-5] = (bool) 0
0x1a6: Return(); Pop(4)

0x1a7: PushEmpty(float, object)
0x1a8: Stack[-1] = Stack[-4]
0x1a9: Call2 0x279

0x1aa: Pop(1)
0x1ab: Push((float)90000.0)
0x1ac: Pop(2); Push((bool) Stack[-2] > Stack[-1])
0x1ad: IF (Stack[-1] == 0) GOTO 0x1b0; Pop(1)

0x1ae: Stack[-5] = (bool) 0
0x1af: Return(); Pop(4)

0x1b0: @ CanSee(Stack[-1], Stack[-2])
0x1b1: Pop(0)
0x1b2: Stack[-5] = Stack[-1]
0x1b3: Return(); Pop(4)

0x1b4: Stack[-2] = 0
0x1b5: PushEmpty(float, float)
0x1b6: Push((int) 8)
0x1b7: Push((int) 16)
0x1b8: @ rand(Stack[-3], Stack[-2], Stack[-1])
0x1b9: Pop(2)
0x1ba: Push((int) 10)
0x1bb: @ SetTimer(Stack[-1], Stack[-2])
0x1bc: Pop(1)
0x1bd: Return(); Pop(2)

0x1be: Push((int) 10)
0x1bf: @ KillTimer(Stack[-1])
0x1c0: Pop(1)
0x1c1: Return(); Pop(0)

0x1c2: PushEmpty()
0x1c3: Push((int) 10)
0x1c4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x1c5: IF (Stack[-1] == 0) GOTO 0x1e7; Pop(1)

0x1c6: PushEmpty()
0x1c7: Call2 0x1be

0x1c8: Pop(0)
0x1c9: PushEmpty(bool)
0x1ca: Stack[-1] = (bool) 0
0x1cb: PushEmpty(bool)
0x1cc: Call2 0x294

0x1cd: Pop(0)
0x1ce: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1cf: PushEmpty(bool)
0x1d0: Call2 0x19f

0x1d1: Pop(0)
0x1d2: IF (Stack[-1] == 0) GOTO 0x1d4; Pop(1)

0x1d3: Stack[-1] = (bool) 1
0x1d4: IF (Stack[-1] == 0) GOTO 0x1e1; Pop(1)

0x1d5: PushEmpty(bool)
0x1d6: Call2 0x18b

0x1d7: Pop(0)
0x1d8: IF (Stack[-1] == 0) GOTO 0x1e0; Pop(1)

0x1d9: PushEmpty(bool, object)
0x1da: PushEmpty(object)
0x1db: Call2 0x3af

0x1dc: Stack[-2] = Stack[-1]
0x1dd: Pop(1)
0x1de: Call2 0x32a

0x1df: Pop(2)
0x1e0: GOTO 0x1e7

0x1e1: PushEmpty()
0x1e2: Call2 0x19a

0x1e3: Pop(0)
0x1e4: PushEmpty()
0x1e5: Call2 0x1b5

0x1e6: Pop(0)
0x1e7: Return(); Pop(0)

0x1e8: PushEmpty()
0x1e9: Call2 0x274

0x1ea: Pop(0)
0x1eb: PushEmpty()
0x1ec: Call2 0x1be

0x1ed: Pop(0)
0x1ee: @ lshStopSpeech()
0x1ef: Pop(0)
0x1f0: @ lshStopAnimation()
0x1f1: Pop(0)
0x1f2: @ StopAsync()
0x1f3: Pop(0)
0x1f4: @ Hold()
0x1f5: Pop(0)
0x1f6: Return(); Pop(0)

0x1f7: @ StopGroup0()
0x1f8: Pop(0)
0x1f9: PushEmpty()
0x1fa: Call2 0x1be

0x1fb: Pop(0)
0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral"
0x1fe: Call2 0x37a

0x1ff: Pop(1)
0x200: PushEmpty()
0x201: Call2 0x1b5

0x202: Pop(0)
0x203: Return(); Pop(0)

0x204: PushEmpty()
0x205: Push(Stack[-1])
0x206: IF (Stack[-1] == 0) GOTO 0x20b; Pop(1)

0x207: PushEmpty()
0x208: Call2 0x1b5

0x209: Pop(0)
0x20a: GOTO 0x20f

0x20b: PushEmpty(string)
0x20c: Stack[-1] = "Neutral"
0x20d: Call2 0x37a

0x20e: Pop(1)
0x20f: Return(); Pop(0)

0x210: PushEmpty(bool, bool)
0x211: @ IsOverrideActive(Stack[-1])
0x212: Pop(0)
0x213: Pop(0); Push((bool) Stack[-1] == 0)
0x214: IF (Stack[-1] == 0) GOTO 0x22c; Pop(1)

0x215: EventDisable(0)
0x216: PushEmpty()
0x217: Call2 0x274

0x218: Pop(0)
0x219: PushEmpty(bool, object)
0x21a: Stack[-1] = Stack[-5]
0x21b: Call2 0x28b

0x21c: Pop(2)
0x21d: EventEnable(0)
0x21e: PushEmpty(object)
0x21f: Stack[-1] = Stack[-4]
0x220: Call2 0x14c

0x221: Pop(1)
0x222: PushEmpty(string)
0x223: Stack[-1] = "Neutral"
0x224: Call2 0x37a

0x225: Pop(1)
0x226: PushEmpty()
0x227: Call2 0x1be

0x228: Pop(0)
0x229: PushEmpty()
0x22a: Call2 0x1b5

0x22b: Pop(0)
0x22c: Return(); Pop(2)

0x22d: PushEmpty(int, int, bool, int, int, bool, int, int, bool, int, int, bool)
0x22e: @ WaitForAnimEnd()
0x22f: Pop(0)
0x230: PushEmpty(bool)
0x231: Call2 0x294

0x232: Pop(0)
0x233: Pop(1); Push((bool) Stack[-1] == 0)
0x234: IF (Stack[-1] == 0) GOTO 0x236; Pop(1)

0x235: Return(); Pop(12)

0x236: PushEmpty(int)
0x237: Call2 0x3e0

0x238: Stack[-7] = Stack[-1]
0x239: Pop(1)
0x23a: Stack[-5] = (int) 0
0x23b: PushEmpty(bool)
0x23c: Stack[-1] = (bool) 0
0x23d: Push((int) 5)
0x23e: Pop(1); Push((bool) Stack[-7] < Stack[-1])
0x23f: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x240: PushEmpty(bool)
0x241: Call2 0x294

0x242: Pop(0)
0x243: IF (Stack[-1] == 0) GOTO 0x245; Pop(1)

0x244: Stack[-1] = (bool) 1
0x245: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x246: Pop(0); Push((bool) Stack[-6] == 0)
0x247: IF (Stack[-1] == 0) GOTO 0x24f; Pop(1)

0x248: Push((int) 3)
0x249: @ Sleep(Stack[-1], Stack[-5])
0x24a: Pop(1)
0x24b: Pop(0); Push((bool) Stack[-4] == 0)
0x24c: IF (Stack[-1] == 0) GOTO 0x24e; Pop(1)

0x24d: GOTO 0x26f

0x24e: GOTO 0x264

0x24f: @ irand(Stack[-3], Stack[-6])
0x250: Pop(0)
0x251: Push((int) 5)
0x252: @ irand(Stack[-3], Stack[-1])
0x253: Pop(1)
0x254: Push((int) 0)
0x255: Pop(1); Push((bool) Stack[-3] != Stack[-1])
0x256: IF (Stack[-1] == 0) GOTO 0x258; Pop(1)

0x257: Stack[-3] = (int) 0
0x258: Push("all")
0x259: PushEmpty(string, int)
0x25a: Stack[-1] = Stack[-6]
0x25b: Call2 0x3d9

0x25c: Pop(1)
0x25d: @ PlayAnimation(Stack[-2], Stack[-1])
0x25e: Pop(2)
0x25f: @ WaitForAnimEnd(Stack[-1])
0x260: Pop(0)
0x261: Pop(0); Push((bool) Stack[-1] == 0)
0x262: IF (Stack[-1] == 0) GOTO 0x264; Pop(1)

0x263: GOTO 0x26f

0x264: PushEmpty(bool)
0x265: Call2 0x272

0x266: Pop(0)
0x267: Pop(1); Push((bool) Stack[-1] == 0)
0x268: IF (Stack[-1] == 0) GOTO 0x26a; Pop(1)

0x269: GOTO 0x26f

0x26a: @ ResetAAS()
0x26b: Pop(0)
0x26c: Push((int) 1)
0x26d: Stack[-6] = Stack[-6] + Stack[-1]; Pop(1);
0x26e: GOTO 0x23b

0x26f: @ ResetAAS()
0x270: Pop(0)
0x271: Return(); Pop(12)

0x272: Stack[-1] = (bool) 1
0x273: Return(); Pop(0)

0x274: @ StopAnimation()
0x275: Pop(0)
0x276: @ StopGroup0()
0x277: Pop(0)
0x278: Return(); Pop(0)

0x279: PushEmpty(cvector, cvector, cvector, cvector, cvector, cvector)
0x27a: @ GetPosition(Stack[-3])
0x27b: Pop(0)
0x27c: @@ GetPosition(Stack[-2])
0x27d: Pop(0)
0x27e: Stack[-1] = Stack[-2] - Stack[-3]; Pop(0);
0x27f: Stack[-8] = Stack[-1] | Stack[-1]; Pop(0);
0x280: Return(); Pop(6)

0x281: PushEmpty(cvector, cvector, bool, cvector, cvector, bool)
0x282: @ GetPosition(Stack[-3])
0x283: Pop(0)
0x284: Stack[-2] = Stack[-7] - Stack[-3]; Pop(0);
0x285: Push(CvectorIndex(Stack[-2], 0))
0x286: Push(CvectorIndex(Stack[-3], 2))
0x287: @ Rotate(Stack[-2], Stack[-1], Stack[-3])
0x288: Pop(2)
0x289: Stack[-8] = Stack[-1]
0x28a: Return(); Pop(6)

0x28b: PushEmpty(cvector, cvector)
0x28c: @@ GetPosition(Stack[-1])
0x28d: Pop(0)
0x28e: PushEmpty(bool, cvector)
0x28f: Stack[-1] = Stack[-3]
0x290: Call2 0x281

0x291: Stack[-6] = Stack[-2]
0x292: Pop(2)
0x293: Return(); Pop(2)

0x294: PushEmpty(bool, bool)
0x295: @ IsLoaded(Stack[-1])
0x296: Pop(0)
0x297: Stack[-3] = Stack[-1]
0x298: Return(); Pop(2)

0x299: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x29a: @@ GetPosition(Stack[-8])
0x29b: Pop(0)
0x29c: @@ GetEyesHeight(Stack[-9])
0x29d: Pop(0)
0x29e: Push(CvectorIndex(Stack[-8], 1))
0x29f: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a0: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x2a1: @ GetPosition(Stack[-7])
0x2a2: Pop(0)
0x2a3: @ GetEyesHeight(Stack[-9])
0x2a4: Pop(0)
0x2a5: Push(CvectorIndex(Stack[-7], 1))
0x2a6: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x2a7: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x2a8: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x2a9: Push(CvectorIndex(Stack[-6], 1))
0x2aa: Stack[-1] = (int) 0
0x2ab: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x2ac: Pop(0); Push(Stack[-6] | Stack[-6]);
0x2ad: Pop(1); Push(Sqrt(Stack[-1]))
0x2ae: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x2af: Stack[-5] = -Stack[-6]; Pop(0);
0x2b0: Pop(0); Push(Stack[-6] * Stack[-19]);
0x2b1: PushEmpty(cvector, cvector)
0x2b2: Push(CVector(0.0, 1.0, 0.0))
0x2b3: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x2b4: Call2 0x3b5

0x2b5: Pop(1)
0x2b6: Push((int) 25)
0x2b7: Pop(2); Push(Stack[-2] * Stack[-1]);
0x2b8: Pop(2); Push(Stack[-2] + Stack[-1]);
0x2b9: Push(CVector(0.0, 10.0, 0.0))
0x2ba: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x2bb: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x2bc: @ IsOverrideActive(Stack[-2])
0x2bd: Pop(0)
0x2be: Push(Stack[-2])
0x2bf: IF (Stack[-1] == 0) GOTO 0x2c2; Pop(1)

0x2c0: Stack[-21] = (bool) 0
0x2c1: Return(); Pop(18)

0x2c2: @ StopWorld()
0x2c3: Pop(0)
0x2c4: Push((bool) 1)
0x2c5: @ CameraTransit(Stack[-4], Stack[-6], Stack[-1])
0x2c6: Pop(1)
0x2c7: Push(CvectorIndex(Stack[-4], 0))
0x2c8: Push(CvectorIndex(Stack[-5], 2))
0x2c9: @ Rotate(Stack[-2], Stack[-1])
0x2ca: Pop(2)
0x2cb: PushEmpty(bool)
0x2cc: Call2 0x45a

0x2cd: Pop(0)
0x2ce: IF (Stack[-1] == 0) GOTO 0x2d0; Pop(1)

0x2cf: GOTO 0x2d8

0x2d0: Push("head")
0x2d1: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2d2: Pop(1)
0x2d3: Push(Stack[-1])
0x2d4: IF (Stack[-1] == 0) GOTO 0x2d8; Pop(1)

0x2d5: Push("head")
0x2d6: @ LookAsyncCamera(Stack[-1])
0x2d7: Pop(1)
0x2d8: @ CameraWaitForPlayFinish()
0x2d9: Pop(0)
0x2da: @ ResumeWorld()
0x2db: Pop(0)
0x2dc: Stack[-21] = (bool) 1
0x2dd: Return(); Pop(18)

0x2de: PushEmpty(bool, bool)
0x2df: Push((bool) 1)
0x2e0: @ CameraSwitchToNormal(Stack[-1])
0x2e1: Pop(1)
0x2e2: PushEmpty(bool)
0x2e3: Call2 0x45a

0x2e4: Pop(0)
0x2e5: IF (Stack[-1] == 0) GOTO 0x2e7; Pop(1)

0x2e6: GOTO 0x2ef

0x2e7: Push("head")
0x2e8: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x2e9: Pop(1)
0x2ea: Push(Stack[-1])
0x2eb: IF (Stack[-1] == 0) GOTO 0x2ef; Pop(1)

0x2ec: Push("head")
0x2ed: @ UnlookAsync(Stack[-1])
0x2ee: Pop(1)
0x2ef: Return(); Pop(2)

0x2f0: PushEmpty(int, int, int, int)
0x2f1: Push("voice_common")
0x2f2: @ GetVariable(Stack[-1], Stack[-3])
0x2f3: Pop(1)
0x2f4: Push(Stack[-2])
0x2f5: IF (Stack[-1] == 0) GOTO 0x316; Pop(1)

0x2f6: PushEmpty(bool, object)
0x2f7: Stack[-1] = Stack[-7]
0x2f8: Call2 0x32a

0x2f9: Pop(1)
0x2fa: Pop(1); Push((bool) Stack[-1] == 0)
0x2fb: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x2fc: PushEmpty(bool, object)
0x2fd: Stack[-1] = Stack[-7]
0x2fe: Call2 0x34f

0x2ff: Pop(1)
0x300: Pop(1); Push((bool) Stack[-1] == 0)
0x301: IF (Stack[-1] == 0) GOTO 0x304; Pop(1)

0x302: Stack[-6] = (bool) 0
0x303: Return(); Pop(4)

0x304: Push((int) 2)
0x305: @ irand(Stack[-2], Stack[-1])
0x306: Pop(1)
0x307: Push(Stack[-1])
0x308: IF (Stack[-1] == 0) GOTO 0x311; Pop(1)

0x309: Push("voice_common")
0x30a: Push((int) 1)
0x30b: Pop(1); Push(Stack[-4] + Stack[-1]);
0x30c: Push((int) 3)
0x30d: Pop(2); Push(Stack[-2] % Stack[-1]);
0x30e: @ SetVariable(Stack[-2], Stack[-1])
0x30f: Pop(2)
0x310: GOTO 0x315

0x311: Push("voice_common")
0x312: Push((int) 0)
0x313: @ SetVariable(Stack[-2], Stack[-1])
0x314: Pop(2)
0x315: GOTO 0x328

0x316: PushEmpty(bool, object)
0x317: Stack[-1] = Stack[-7]
0x318: Call2 0x34f

0x319: Pop(1)
0x31a: Pop(1); Push((bool) Stack[-1] == 0)
0x31b: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x31c: PushEmpty(bool, object)
0x31d: Stack[-1] = Stack[-7]
0x31e: Call2 0x32a

0x31f: Pop(1)
0x320: Pop(1); Push((bool) Stack[-1] == 0)
0x321: IF (Stack[-1] == 0) GOTO 0x324; Pop(1)

0x322: Stack[-6] = (bool) 0
0x323: Return(); Pop(4)

0x324: Push("voice_common")
0x325: Push((int) 1)
0x326: @ SetVariable(Stack[-2], Stack[-1])
0x327: Pop(2)
0x328: Stack[-6] = (bool) 1
0x329: Return(); Pop(4)

0x32a: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x32b: Stack[-5] = "c"
0x32c: Stack[-4] = (int) 0
0x32d: Push((int) 1)
0x32e: IF (Stack[-1] == 0) GOTO 0x33a; Pop(1)

0x32f: Push((int) 1)
0x330: Pop(1); Push(Stack[-5] + Stack[-1]);
0x331: Pop(1); Push(Stack[-6] + Stack[-1]);
0x332: @@ HasProperty(Stack[-1], Stack[-4])
0x333: Pop(1)
0x334: Pop(0); Push((bool) Stack[-3] == 0)
0x335: IF (Stack[-1] == 0) GOTO 0x337; Pop(1)

0x336: GOTO 0x33a

0x337: Push((int) 1)
0x338: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x339: GOTO 0x32d

0x33a: Pop(0); Push((bool) Stack[-4] == 0)
0x33b: IF (Stack[-1] == 0) GOTO 0x33e; Pop(1)

0x33c: Stack[-12] = (bool) 0
0x33d: Return(); Pop(10)

0x33e: Stack[-2] = (int) 0
0x33f: Push((int) 1)
0x340: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x341: IF (Stack[-1] == 0) GOTO 0x344; Pop(1)

0x342: @ irand(Stack[-2], Stack[-4])
0x343: Pop(0)
0x344: Push((int) 1)
0x345: Pop(1); Push(Stack[-3] + Stack[-1]);
0x346: Pop(1); Push(Stack[-6] + Stack[-1]);
0x347: @@ GetProperty(Stack[-1], Stack[-2])
0x348: Pop(1)
0x349: PushEmpty(bool, string)
0x34a: Stack[-1] = Stack[-3]
0x34b: Call2 0x399

0x34c: Stack[-14] = Stack[-2]
0x34d: Pop(2)
0x34e: Return(); Pop(10)

0x34f: PushEmpty(string, int, bool, int, string, string, int, bool, int, string)
0x350: Push("d")
0x351: PushEmpty(int)
0x352: Call2 0x3d0

0x353: Pop(0)
0x354: Pop(2); Push(Stack[-2] + Stack[-1]);
0x355: Push("m")
0x356: Stack[-7] = Stack[-2] + Stack[-1]; Pop(2);
0x357: Stack[-4] = (int) 0
0x358: Push((int) 1)
0x359: IF (Stack[-1] == 0) GOTO 0x365; Pop(1)

0x35a: Push((int) 1)
0x35b: Pop(1); Push(Stack[-5] + Stack[-1]);
0x35c: Pop(1); Push(Stack[-6] + Stack[-1]);
0x35d: @@ HasProperty(Stack[-1], Stack[-4])
0x35e: Pop(1)
0x35f: Pop(0); Push((bool) Stack[-3] == 0)
0x360: IF (Stack[-1] == 0) GOTO 0x362; Pop(1)

0x361: GOTO 0x365

0x362: Push((int) 1)
0x363: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x364: GOTO 0x358

0x365: Pop(0); Push((bool) Stack[-4] == 0)
0x366: IF (Stack[-1] == 0) GOTO 0x369; Pop(1)

0x367: Stack[-12] = (bool) 0
0x368: Return(); Pop(10)

0x369: Stack[-2] = (int) 0
0x36a: Push((int) 1)
0x36b: Pop(1); Push((bool) Stack[-5] > Stack[-1])
0x36c: IF (Stack[-1] == 0) GOTO 0x36f; Pop(1)

0x36d: @ irand(Stack[-2], Stack[-4])
0x36e: Pop(0)
0x36f: Push((int) 1)
0x370: Pop(1); Push(Stack[-3] + Stack[-1]);
0x371: Pop(1); Push(Stack[-6] + Stack[-1]);
0x372: @@ GetProperty(Stack[-1], Stack[-2])
0x373: Pop(1)
0x374: PushEmpty(bool, string)
0x375: Stack[-1] = Stack[-3]
0x376: Call2 0x399

0x377: Stack[-14] = Stack[-2]
0x378: Pop(2)
0x379: Return(); Pop(10)

0x37a: PushEmpty(bool, float, float, bool, float, float)
0x37b: @ lshHasAnimation(Stack[-3], Stack[-7])
0x37c: Pop(0)
0x37d: Push(Stack[-3])
0x37e: IF (Stack[-1] == 0) GOTO 0x385; Pop(1)

0x37f: @ lshGetAnimTimes(Stack[-7], Stack[-2], Stack[-1])
0x380: Pop(0)
0x381: Push((bool) 0)
0x382: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x383: Pop(1)
0x384: GOTO 0x389

0x385: Push("Can't find lsh animation : ")
0x386: Pop(1); Push(Stack[-1] + Stack[-8]);
0x387: @ Trace(Stack[-1])
0x388: Pop(1)
0x389: Return(); Pop(6)

0x38a: PushEmpty(bool, float, float, bool, float, float)
0x38b: @ lshHasAnimation(Stack[-3], Stack[-8])
0x38c: Pop(0)
0x38d: Push(Stack[-3])
0x38e: IF (Stack[-1] == 0) GOTO 0x394; Pop(1)

0x38f: @ lshGetAnimTimes(Stack[-8], Stack[-2], Stack[-1])
0x390: Pop(0)
0x391: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-7])
0x392: Pop(0)
0x393: GOTO 0x398

0x394: Push("Can't find lsh animation : ")
0x395: Pop(1); Push(Stack[-1] + Stack[-9]);
0x396: @ Trace(Stack[-1])
0x397: Pop(1)
0x398: Return(); Pop(6)

0x399: PushEmpty(bool, bool)
0x39a: PushEmpty(bool)
0x39b: Call2 0x45a

0x39c: Pop(0)
0x39d: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x39e: @ lshHasSpeech(Stack[-1], Stack[-3])
0x39f: Pop(0)
0x3a0: Push(Stack[-1])
0x3a1: IF (Stack[-1] == 0) GOTO 0x3a6; Pop(1)

0x3a2: @ lshPlaySpeech(Stack[-3])
0x3a3: Pop(0)
0x3a4: Stack[-4] = (bool) 1
0x3a5: Return(); Pop(2)

0x3a6: Stack[-4] = (bool) 0
0x3a7: Return(); Pop(2)

0x3a8: PushEmpty(bool)
0x3a9: Call2 0x45a

0x3aa: Pop(0)
0x3ab: IF (Stack[-1] == 0) GOTO 0x3ae; Pop(1)

0x3ac: @ lshStopSpeech()
0x3ad: Pop(0)
0x3ae: Return(); Pop(0)

0x3af: PushEmpty(object, object)
0x3b0: @ self(Stack[-1])
0x3b1: Pop(0)
0x3b2: Stack[-3] = Stack[-1]
0x3b3: Return(); Pop(2)

0x3b4: Stack[-1] = 0
0x3b5: PushEmpty(float, float)
0x3b6: Pop(0); Push(Stack[-3] | Stack[-3]);
0x3b7: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x3b8: Push((float)0.0)
0x3b9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x3ba: IF (Stack[-1] == 0) GOTO 0x3bd; Pop(1)

0x3bb: Stack[-4] = CVector(0.0, 0.0, 0.0)
0x3bc: Return(); Pop(2)

0x3bd: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x3be: Return(); Pop(2)

0x3bf: PushEmpty(int, int)
0x3c0: @ GetVariable(Stack[-3], Stack[-1])
0x3c1: Pop(0)
0x3c2: Stack[-4] = Stack[-1]
0x3c3: Return(); Pop(2)

0x3c4: PushEmpty(object, object)
0x3c5: @ FindActor(Stack[-1], Stack[-4])
0x3c6: Pop(0)
0x3c7: Pop(0); Push((bool) Stack[-1] == 0)
0x3c8: IF (Stack[-1] == 0) GOTO 0x3cb; Pop(1)

0x3c9: Stack[-5] = (bool) 0
0x3ca: Return(); Pop(2)

0x3cb: @ Trigger(Stack[-1], Stack[-3])
0x3cc: Pop(0)
0x3cd: Stack[-5] = (bool) 1
0x3ce: Return(); Pop(2)

0x3cf: Stack[-1] = 0
0x3d0: PushEmpty(float, float)
0x3d1: @ GetGameTime(Stack[-1])
0x3d2: Pop(0)
0x3d3: Push((int) 1)
0x3d4: PushEmpty(int)
0x3d5: Push((int) 24)
0x3d6: Stack[-2] = Stack[-4] / Stack[-1]; Pop(1);
0x3d7: Stack[-5] = Stack[-2] + Stack[-1]; Pop(2);
0x3d8: Return(); Pop(2)

0x3d9: PushEmpty(string, string)
0x3da: Stack[-1] = "idle"
0x3db: Push(Stack[-3])
0x3dc: IF (Stack[-1] == 0) GOTO 0x3de; Pop(1)

0x3dd: Stack[-1] = Stack[-1] + Stack[-3]; Pop(0);
0x3de: Stack[-4] = Stack[-1]
0x3df: Return(); Pop(2)

0x3e0: PushEmpty(int, bool, int, bool)
0x3e1: Stack[-2] = (int) 0
0x3e2: Push("all")
0x3e3: PushEmpty(string, int)
0x3e4: Stack[-1] = Stack[-5]
0x3e5: Call2 0x3d9

0x3e6: Pop(1)
0x3e7: @ HasAnimation(Stack[-3], Stack[-2], Stack[-1])
0x3e8: Pop(2)
0x3e9: Pop(0); Push((bool) Stack[-1] == 0)
0x3ea: IF (Stack[-1] == 0) GOTO 0x3ec; Pop(1)

0x3eb: GOTO 0x3ef

0x3ec: Push((int) 1)
0x3ed: Stack[-3] = Stack[-3] + Stack[-1]; Pop(1);
0x3ee: GOTO 0x3e2

0x3ef: Stack[-5] = Stack[-2]
0x3f0: Return(); Pop(4)

0x3f1: PushEmpty()
0x3f2: Push("b10q04LaskaTalk")
0x3f3: Push((int) 9)
0x3f4: @ SetVariable(Stack[-2], Stack[-1])
0x3f5: Pop(2)
0x3f6: PushEmpty()
0x3f7: Call2 0x40b

0x3f8: Pop(0)
0x3f9: PushEmpty(bool, string, string)
0x3fa: Stack[-2] = "quest_b10_04"
0x3fb: Stack[-1] = "restore_laska"
0x3fc: Call2 0x3c4

0x3fd: Pop(3)
0x3fe: Return(); Pop(0)

0x3ff: PushEmpty()
0x400: PushEmpty(int, string)
0x401: Stack[-1] = "b10q04LaskaTalk"
0x402: Call2 0x3bf

0x403: Pop(1)
0x404: Push((int) 9)
0x405: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x406: IF (Stack[-1] == 0) GOTO 0x409; Pop(1)

0x407: Stack[-2] = (bool) 1
0x408: Return(); Pop(0)

0x409: Stack[-2] = (bool) 0
0x40a: Return(); Pop(0)

0x40b: PushEmpty(object, object)
0x40c: Push((int) 559)
0x40d: Push((int) 2)
0x40e: Push((int) 530538)
0x40f: @ CreateDiaryEntry(Stack[-4], Stack[-3], Stack[-2], Stack[-1])
0x410: Pop(3)
0x411: PushEmpty(bool, object, int)
0x412: Stack[-2] = Stack[-4]
0x413: Stack[-1] = (int) 550
0x414: Call2 0x425

0x415: Pop(3)
0x416: Return(); Pop(2)

0x417: Stack[-1] = 0
0x418: PushEmpty(object, object)
0x419: @ GetDiaryRoot(Stack[-1])
0x41a: Pop(0)
0x41b: Pop(0); Push((bool) Stack[-1] == 0)
0x41c: IF (Stack[-1] == 0) GOTO 0x422; Pop(1)

0x41d: Push("Can't retrieve diary root")
0x41e: @ Trace(Stack[-1])
0x41f: Pop(1)
0x420: Stack[-3] = (bool) 0
0x421: Return(); Pop(2)

0x422: Stack[-3] = Stack[-1]
0x423: Return(); Pop(2)

0x424: Stack[-1] = 0
0x425: PushEmpty(object, object, int, object, object, int)
0x426: PushEmpty(object)
0x427: Call2 0x418

0x428: Stack[-4] = Stack[-1]
0x429: Pop(1)
0x42a: @@ Find(Stack[-7], Stack[-2])
0x42b: Pop(0)
0x42c: Pop(0); Push((bool) Stack[-2] == 0)
0x42d: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x42e: Push("Can't find diary parent with id: ")
0x42f: Pop(1); Push(Stack[-1] + Stack[-8]);
0x430: @ Trace(Stack[-1])
0x431: Pop(1)
0x432: Stack[-9] = (bool) 0
0x433: Return(); Pop(6)

0x434: @@ AddChild(Stack[-8])
0x435: Pop(0)
0x436: Push((int) 7)
0x437: @ SendWorldWndMessage(Stack[-1])
0x438: Pop(1)
0x439: @@ GetCategory(Stack[-1])
0x43a: Pop(0)
0x43b: @ SetDiarySection(Stack[-1])
0x43c: Pop(0)
0x43d: Stack[-9] = (bool) 0
0x43e: Return(); Pop(6)

0x43f: Stack[-2] = 0
0x440: Stack[-3] = 0
0x441: PushEmpty(int, int)
0x442: Push("branch")
0x443: @ GetVariable(Stack[-1], Stack[-2])
0x444: Pop(1)
0x445: Push((int) 0)
0x446: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x447: IF (Stack[-1] == 0) GOTO 0x44b; Pop(1)

0x448: Stack[-3] = (int) 1
0x449: Return(); Pop(2)

0x44a: GOTO 0x450

0x44b: Push((int) 1)
0x44c: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x44d: IF (Stack[-1] == 0) GOTO 0x450; Pop(1)

0x44e: Stack[-3] = (int) 2
0x44f: Return(); Pop(2)

0x450: Stack[-3] = (int) 3
0x451: Return(); Pop(2)

0x452: Stack[-1] = (int) 515542
0x453: Return(); Pop(0)

0x454: Stack[-1] = (int) 502867
0x455: Return(); Pop(0)

0x456: Stack[-1] = "ui/NPC_Laska.png"
0x457: Return(); Pop(0)

0x458: Stack[-1] = "ui/NPC_Laska_b.png"
0x459: Return(); Pop(0)

0x45a: Stack[-1] = (bool) 1
0x45b: Return(); Pop(0)

