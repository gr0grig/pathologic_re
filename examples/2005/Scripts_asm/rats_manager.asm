GlobalVarCount = 0

Strings:
	A:SetNPCName
	A:SetNPCDescription
	A:SetPhoto
	A:SetPhoto2
	A:SetPlayerName
	A:IsDialogEnd
	A:GetReturnValue
	W:Neutral
	A:SetMessage
	A:ClearReplies
	A:AddReply
	W:all
	W:idle
	A:GetItemCount
	W:rat
	W:rat_big
	A:GetItem
	A:GetItemID
	A:add
	A:size
	A:get
	A:RemoveItem
	W:quality
	A:GetProperty
	W:pers_rat_big
	W:pers_rat
	W:You've won a rat race
	W:Looser!
	W:race_begin
	W:winner
	W:looser
	W:pt_rat1
	W:rat_race.xml
	W:Index
	A:SetScriptProperty
	W:Race
	W:pt_rat2
	W:pt_rat3
	W:race_over1
	W:race_over2
	W:race_over3
	W:rats_track_door
	A:Open
	A:Close
	A:SetProperty
	A:GetPosition
	A:GetEyesHeight
	W:head
	A:GetLocator
	W:Locator 
	W: doesn't exist
	W:money
	W:Money
	A:HasItem
	A:SetReturnValue
	W:ooRatsManager1
	W:money500 is given
	W:playsound
	W:givemoney
	W:branch
	W:ui/NPC_Citizen2.png
	W:ui/NPC_Citizen2_b.png
// @pool_raw:5365744e50434e616d65005365744e50434465736372697074696f6e0053657450686f746f0053657450686f746f3200536574506c617965724e616d650049734469616c6f67456e640047657452657475726e56616c7565004e00650075007400720061006c0000005365744d65737361676500436c6561725265706c696573004164645265706c790061006c006c000000690064006c00650000004765744974656d436f756e740072006100740000007200610074005f0062006900670000004765744974656d004765744974656d4944006164640073697a65006765740052656d6f76654974656d007100750061006c00690074007900000047657450726f70657274790070006500720073005f007200610074005f00620069006700000070006500720073005f00720061007400000059006f007500270076006500200077006f006e002000610020007200610074002000720061006300650000004c006f006f007300650072002100000072006100630065005f0062006500670069006e000000770069006e006e006500720000006c006f006f007300650072000000700074005f00720061007400310000007200610074005f0072006100630065002e0078006d006c00000049006e00640065007800000053657453637269707450726f70657274790052006100630065000000700074005f0072006100740032000000700074005f007200610074003300000072006100630065005f006f007600650072003100000072006100630065005f006f007600650072003200000072006100630065005f006f007600650072003300000072006100740073005f0074007200610063006b005f0064006f006f00720000004f70656e00436c6f73650053657450726f706572747900476574506f736974696f6e004765744579657348656967687400680065006100640000004765744c6f6361746f72004c006f006300610074006f00720020000000200064006f00650073006e002700740020006500780069007300740000006d006f006e006500790000004d006f006e006500790000004861734974656d0053657452657475726e56616c7565006f006f0052006100740073004d0061006e006100670065007200310000006d006f006e0065007900350030003000200069007300200067006900760065006e00000070006c006100790073006f0075006e006400000067006900760065006d006f006e006500790000006200720061006e00630068000000750069002f004e00500043005f0043006900740069007a0065006e0032002e0070006e0067000000750069002f004e00500043005f0043006900740069007a0065006e0032005f0062002e0070006e0067000000
// @pool_encoding:utf8

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
	CreateIntVector (1 args)
	GetInvItemByName (2 args)
	ChooseItem (2 args)
	Trace (1 args)
	GetScene (1 args)
	StopGroup0 (0 args)
	irand (2 args)
	FindActor (2 args)
	IsLoaded (1 args)
	GetPosition (1 args)
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
	lshGetAnimTimes (3 args)
	lshPlayAnimation (3 args)
	lshStopSpeech (0 args)
	rand (1 args)
	CreateObjectVector (1 args)
	GetVariable (2 args)
	AddActor (6 args)
	SendWorldWndMessage (2 args)
	SetVariable (2 args)
	TriggerWorld (2 args)

RunOp = 0x435
RunTask = 8

GlobalTasks: 
	GTASK_0 Vars = (object) Params = 2
	GTASK_1 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x9a Vars = (int, int)
	GTASK_2 Vars = (object) Params = 2
	GTASK_3 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x17d Vars = (int, int)
	GTASK_4 Vars = (object) Params = 2
	GTASK_5 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x246 Vars = (int, int)
	GTASK_6 Vars = (object) Params = 2
	GTASK_7 Vars = (object, object, string, bool) Params = 2
		EVENT_11 Op = 0x337 Vars = (int, int)
	GTASK_8 Vars = (int) Params = 0
		EVENT_0 Op = 0x43a Vars = (object)
		EVENT_26 Op = 0x4d0 Vars = (string)
		EVENT_6 Op = 0x4da Vars = ()
	GTASK_9 Vars = (bool, int, int) Params = 3
		EVENT_0 Op = 0x594 Vars = (object)
		EVENT_26 Op = 0x59c Vars = (string)
		EVENT_6 Op = 0x642 Vars = ()


0x0: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x2: PushEmpty(bool, object, float)
0x3: Stack[-12] = Stack[-2]
0x4: Stack[-1] = (float) 70.0
0x5: Call2 0x653

0x6: Pop(2)
0x7: Pop(1); Push((bool) Stack[-1] == 0)
0x8: IF (Stack[-1] == 0) GOTO 0xb; Pop(1)

0x9: Stack[-10] = (int) -2
0xa: Return(); Pop(8)

0xb: @ CreateDialog(Stack[-4])
0xc: Pop(0)
0xd: PushEmpty(int)
0xe: Call2 0x783

0xf: Pop(0)
0x10: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x11: Pop(1)
0x12: PushEmpty(int)
0x13: Call2 0x781

0x14: Pop(0)
0x15: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x16: Pop(1)
0x17: PushEmpty(string)
0x18: Call2 0x785

0x19: Pop(0)
0x1a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1b: Pop(1)
0x1c: PushEmpty(string)
0x1d: Call2 0x787

0x1e: Pop(0)
0x1f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x20: Pop(1)
0x21: PushEmpty(int)
0x22: Call2 0x770

0x23: Pop(0)
0x24: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
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
0x30: Stack[-11] = Stack[-2]
0x31: Stack[-6] = Stack[-1]
0x32: Push(-2, 4); TaskCall(1)
0x33: Call2 0x4a

0x34: Pop(-2, 4); TaskReturn
0x35: Pop(2)
0x36: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x37: Pop(0)
0x38: Pop(0); Push((bool) Stack[-1] == 0)
0x39: IF (Stack[-1] == 0) GOTO 0x3f; Pop(1)

0x3a: @ sync()
0x3b: Pop(0)
0x3c: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x3d: Pop(0)
0x3e: GOTO 0x38

0x3f: PushEmpty(object)
0x40: Stack[-10] = Stack[-1]
0x41: Call2 0x697

0x42: Pop(1)
0x43: @ StopDialog(Stack[-4])
0x44: Pop(0)
0x45: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x46: Pop(0)
0x47: Stack[-2] = Stack[-10]
0x48: Return(); Pop(8)

0x49: Stack[-4] = 0
0x4a: PushEmpty()
0x4b: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x4c: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x4d: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x4e: Push((int) 1)
0x4f: IF (Stack[-1] == 0) GOTO 0x66; Pop(1)

0x50: PushEmpty(string)
0x51: Stack[-1] = "Neutral" // @poff=89
0x52: Call2 0x84

0x53: Pop(1)
0x54: Push((int) 520060)
0x55: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x56: Pop(1)
0x57: @@@ ClearReplies(); Obj=0 // @poff=116
0x58: Pop(0)
0x59: Push((int) 520061)
0x5a: Push((int) -1)
0x5b: Push((int) 21241)
0x5c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x5d: Pop(3)
0x5e: Push((int) 520062)
0x5f: Push((int) -1)
0x60: Push((int) 21242)
0x61: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x62: Pop(3)
0x63: GOTO 0x66

0x64: Return(); Pop(0)

0x65: GOTO 0x4e

0x66: PushEmpty(bool)
0x67: Call2 0x789

0x68: Pop(0)
0x69: IF (Stack[-1] == 0) GOTO 0x75; Pop(1)

0x6a: @ lshWaitForAnimEnd()
0x6b: Pop(0)
0x6c: Push( Stack[3 + Tasks[-1].StackPointer] )
0x6d: IF (Stack[-1] == 0) GOTO 0x6f; Pop(1)

0x6e: GOTO 0x74

0x6f: PushEmpty(string)
0x70: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x71: Call2 0x6a8

0x72: Pop(1)
0x73: GOTO 0x6a

0x74: GOTO 0x83

0x75: Push("all") // @poff=138
0x76: Push("idle") // @poff=146
0x77: @ PlayAnimation(Stack[-2], Stack[-1])
0x78: Pop(2)
0x79: @ WaitForAnimEnd()
0x7a: Pop(0)
0x7b: Push( Stack[3 + Tasks[-1].StackPointer] )
0x7c: IF (Stack[-1] == 0) GOTO 0x7e; Pop(1)

0x7d: GOTO 0x83

0x7e: Push("all") // @poff=138
0x7f: Push("idle") // @poff=146
0x80: @ PlayAnimation(Stack[-2], Stack[-1])
0x81: Pop(2)
0x82: GOTO 0x79

0x83: Return(); Pop(0)

0x84: PushEmpty()
0x85: PushEmpty(bool)
0x86: Call2 0x789

0x87: Pop(0)
0x88: Pop(1); Push((bool) Stack[-1] == 0)
0x89: IF (Stack[-1] == 0) GOTO 0x8b; Pop(1)

0x8a: Return(); Pop(0)

0x8b: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x8c: IF (Stack[-1] == 0) GOTO 0x8e; Pop(1)

0x8d: Return(); Pop(0)

0x8e: PushEmpty(string, bool)
0x8f: Stack[-3] = Stack[-2]
0x90: Push("") // @poff=102
0x91: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x92: IF (Stack[-1] == 0) GOTO 0x95; Pop(1)

0x93: Stack[-1] = (bool) 0
0x94: GOTO 0x96

0x95: Stack[-1] = (bool) 1
0x96: Call2 0x6af

0x97: Pop(2)
0x98: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x99: Return(); Pop(0)

0x9a: PushEmpty()
0x9b: Push((int) 1)
0x9c: IF (Stack[-1] == 0) GOTO 0xdd; Pop(1)

0x9d: PushEmpty()
0x9e: Call2 0x6b5

0x9f: Pop(0)
0xa0: Push((int) 21241)
0xa1: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xa2: IF (Stack[-1] == 0) GOTO 0xad; Pop(1)

0xa3: PushEmpty(object, object)
0xa4: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xa5: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xa6: Call2 0x73f

0xa7: Pop(2)
0xa8: PushEmpty(object, object)
0xa9: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xaa: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xab: Call2 0x749

0xac: Pop(2)
0xad: Push((int) 21242)
0xae: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0xaf: IF (Stack[-1] == 0) GOTO 0xba; Pop(1)

0xb0: PushEmpty(object, object)
0xb1: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb2: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb3: Call2 0x73f

0xb4: Pop(2)
0xb5: PushEmpty(object, object)
0xb6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0xb7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0xb8: Call2 0x749

0xb9: Pop(2)
0xba: Push((int) 21240)
0xbb: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0xbc: IF (Stack[-1] == 0) GOTO 0xd1; Pop(1)

0xbd: PushEmpty(string)
0xbe: Stack[-1] = "Neutral" // @poff=89
0xbf: Call2 0x84

0xc0: Pop(1)
0xc1: Push((int) 520060)
0xc2: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0xc3: Pop(1)
0xc4: @@@ ClearReplies(); Obj=0 // @poff=116
0xc5: Pop(0)
0xc6: Push((int) 520061)
0xc7: Push((int) -1)
0xc8: Push((int) 21241)
0xc9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xca: Pop(3)
0xcb: Push((int) 520062)
0xcc: Push((int) -1)
0xcd: Push((int) 21242)
0xce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0xcf: Pop(3)
0xd0: Return(); Pop(0)

0xd1: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0xd2: PushEmpty(bool)
0xd3: Call2 0x789

0xd4: Pop(0)
0xd5: IF (Stack[-1] == 0) GOTO 0xd9; Pop(1)

0xd6: @ lshStopAnimation()
0xd7: Pop(0)
0xd8: GOTO 0xdb

0xd9: @ StopAnimation()
0xda: Pop(0)
0xdb: Return(); Pop(0)

0xdc: GOTO 0x9b

0xdd: Return(); Pop(0)

0xde: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0xdf: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0xe0: PushEmpty(bool, object, float)
0xe1: Stack[-12] = Stack[-2]
0xe2: Stack[-1] = (float) 70.0
0xe3: Call2 0x653

0xe4: Pop(2)
0xe5: Pop(1); Push((bool) Stack[-1] == 0)
0xe6: IF (Stack[-1] == 0) GOTO 0xe9; Pop(1)

0xe7: Stack[-10] = (int) -2
0xe8: Return(); Pop(8)

0xe9: @ CreateDialog(Stack[-4])
0xea: Pop(0)
0xeb: PushEmpty(int)
0xec: Call2 0x783

0xed: Pop(0)
0xee: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0xef: Pop(1)
0xf0: PushEmpty(int)
0xf1: Call2 0x781

0xf2: Pop(0)
0xf3: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0xf4: Pop(1)
0xf5: PushEmpty(string)
0xf6: Call2 0x785

0xf7: Pop(0)
0xf8: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0xf9: Pop(1)
0xfa: PushEmpty(string)
0xfb: Call2 0x787

0xfc: Pop(0)
0xfd: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0xfe: Pop(1)
0xff: PushEmpty(int)
0x100: Call2 0x770

0x101: Pop(0)
0x102: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x103: Pop(1)
0x104: Stack[-2] = (int) -1
0x105: @ IsOverrideActive(Stack[-3])
0x106: Pop(0)
0x107: Push(Stack[-3])
0x108: IF (Stack[-1] == 0) GOTO 0x10b; Pop(1)

0x109: Stack[-10] = (int) -2
0x10a: Return(); Pop(8)

0x10b: @ DoDialog(Stack[-4])
0x10c: Pop(0)
0x10d: PushEmpty(object, object)
0x10e: Stack[-11] = Stack[-2]
0x10f: Stack[-6] = Stack[-1]
0x110: Push(-2, 4); TaskCall(3)
0x111: Call2 0x128

0x112: Pop(-2, 4); TaskReturn
0x113: Pop(2)
0x114: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x115: Pop(0)
0x116: Pop(0); Push((bool) Stack[-1] == 0)
0x117: IF (Stack[-1] == 0) GOTO 0x11d; Pop(1)

0x118: @ sync()
0x119: Pop(0)
0x11a: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x11b: Pop(0)
0x11c: GOTO 0x116

0x11d: PushEmpty(object)
0x11e: Stack[-10] = Stack[-1]
0x11f: Call2 0x697

0x120: Pop(1)
0x121: @ StopDialog(Stack[-4])
0x122: Pop(0)
0x123: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x124: Pop(0)
0x125: Stack[-2] = Stack[-10]
0x126: Return(); Pop(8)

0x127: Stack[-4] = 0
0x128: PushEmpty()
0x129: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x12a: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x12b: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x12c: Push((int) 1)
0x12d: IF (Stack[-1] == 0) GOTO 0x149; Pop(1)

0x12e: PushEmpty(string)
0x12f: Stack[-1] = "Neutral" // @poff=89
0x130: Call2 0x167

0x131: Pop(1)
0x132: Push((int) 520064)
0x133: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x134: Pop(1)
0x135: @@@ ClearReplies(); Obj=0 // @poff=116
0x136: Pop(0)
0x137: Push((int) 520065)
0x138: Push((int) -1)
0x139: Push((int) 21245)
0x13a: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x13b: Pop(3)
0x13c: Push((int) 520066)
0x13d: Push((int) -1)
0x13e: Push((int) 21246)
0x13f: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x140: Pop(3)
0x141: Push((int) 520067)
0x142: Push((int) -1)
0x143: Push((int) 21247)
0x144: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x145: Pop(3)
0x146: GOTO 0x149

0x147: Return(); Pop(0)

0x148: GOTO 0x12c

0x149: PushEmpty(bool)
0x14a: Call2 0x789

0x14b: Pop(0)
0x14c: IF (Stack[-1] == 0) GOTO 0x158; Pop(1)

0x14d: @ lshWaitForAnimEnd()
0x14e: Pop(0)
0x14f: Push( Stack[3 + Tasks[-1].StackPointer] )
0x150: IF (Stack[-1] == 0) GOTO 0x152; Pop(1)

0x151: GOTO 0x157

0x152: PushEmpty(string)
0x153: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x154: Call2 0x6a8

0x155: Pop(1)
0x156: GOTO 0x14d

0x157: GOTO 0x166

0x158: Push("all") // @poff=138
0x159: Push("idle") // @poff=146
0x15a: @ PlayAnimation(Stack[-2], Stack[-1])
0x15b: Pop(2)
0x15c: @ WaitForAnimEnd()
0x15d: Pop(0)
0x15e: Push( Stack[3 + Tasks[-1].StackPointer] )
0x15f: IF (Stack[-1] == 0) GOTO 0x161; Pop(1)

0x160: GOTO 0x166

0x161: Push("all") // @poff=138
0x162: Push("idle") // @poff=146
0x163: @ PlayAnimation(Stack[-2], Stack[-1])
0x164: Pop(2)
0x165: GOTO 0x15c

0x166: Return(); Pop(0)

0x167: PushEmpty()
0x168: PushEmpty(bool)
0x169: Call2 0x789

0x16a: Pop(0)
0x16b: Pop(1); Push((bool) Stack[-1] == 0)
0x16c: IF (Stack[-1] == 0) GOTO 0x16e; Pop(1)

0x16d: Return(); Pop(0)

0x16e: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x16f: IF (Stack[-1] == 0) GOTO 0x171; Pop(1)

0x170: Return(); Pop(0)

0x171: PushEmpty(string, bool)
0x172: Stack[-3] = Stack[-2]
0x173: Push("") // @poff=102
0x174: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x175: IF (Stack[-1] == 0) GOTO 0x178; Pop(1)

0x176: Stack[-1] = (bool) 0
0x177: GOTO 0x179

0x178: Stack[-1] = (bool) 1
0x179: Call2 0x6af

0x17a: Pop(2)
0x17b: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x17c: Return(); Pop(0)

0x17d: PushEmpty()
0x17e: Push((int) 1)
0x17f: IF (Stack[-1] == 0) GOTO 0x1ab; Pop(1)

0x180: PushEmpty()
0x181: Call2 0x6b5

0x182: Pop(0)
0x183: Push((int) 21244)
0x184: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x185: IF (Stack[-1] == 0) GOTO 0x19f; Pop(1)

0x186: PushEmpty(string)
0x187: Stack[-1] = "Neutral" // @poff=89
0x188: Call2 0x167

0x189: Pop(1)
0x18a: Push((int) 520064)
0x18b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x18c: Pop(1)
0x18d: @@@ ClearReplies(); Obj=0 // @poff=116
0x18e: Pop(0)
0x18f: Push((int) 520065)
0x190: Push((int) -1)
0x191: Push((int) 21245)
0x192: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x193: Pop(3)
0x194: Push((int) 520066)
0x195: Push((int) -1)
0x196: Push((int) 21246)
0x197: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x198: Pop(3)
0x199: Push((int) 520067)
0x19a: Push((int) -1)
0x19b: Push((int) 21247)
0x19c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x19d: Pop(3)
0x19e: Return(); Pop(0)

0x19f: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x1a0: PushEmpty(bool)
0x1a1: Call2 0x789

0x1a2: Pop(0)
0x1a3: IF (Stack[-1] == 0) GOTO 0x1a7; Pop(1)

0x1a4: @ lshStopAnimation()
0x1a5: Pop(0)
0x1a6: GOTO 0x1a9

0x1a7: @ StopAnimation()
0x1a8: Pop(0)
0x1a9: Return(); Pop(0)

0x1aa: GOTO 0x17e

0x1ab: Return(); Pop(0)

0x1ac: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x1ad: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x1ae: PushEmpty(bool, object, float)
0x1af: Stack[-12] = Stack[-2]
0x1b0: Stack[-1] = (float) 70.0
0x1b1: Call2 0x653

0x1b2: Pop(2)
0x1b3: Pop(1); Push((bool) Stack[-1] == 0)
0x1b4: IF (Stack[-1] == 0) GOTO 0x1b7; Pop(1)

0x1b5: Stack[-10] = (int) -2
0x1b6: Return(); Pop(8)

0x1b7: @ CreateDialog(Stack[-4])
0x1b8: Pop(0)
0x1b9: PushEmpty(int)
0x1ba: Call2 0x783

0x1bb: Pop(0)
0x1bc: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x1bd: Pop(1)
0x1be: PushEmpty(int)
0x1bf: Call2 0x781

0x1c0: Pop(0)
0x1c1: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x1c2: Pop(1)
0x1c3: PushEmpty(string)
0x1c4: Call2 0x785

0x1c5: Pop(0)
0x1c6: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x1c7: Pop(1)
0x1c8: PushEmpty(string)
0x1c9: Call2 0x787

0x1ca: Pop(0)
0x1cb: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x1cc: Pop(1)
0x1cd: PushEmpty(int)
0x1ce: Call2 0x770

0x1cf: Pop(0)
0x1d0: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x1d1: Pop(1)
0x1d2: Stack[-2] = (int) -1
0x1d3: @ IsOverrideActive(Stack[-3])
0x1d4: Pop(0)
0x1d5: Push(Stack[-3])
0x1d6: IF (Stack[-1] == 0) GOTO 0x1d9; Pop(1)

0x1d7: Stack[-10] = (int) -2
0x1d8: Return(); Pop(8)

0x1d9: @ DoDialog(Stack[-4])
0x1da: Pop(0)
0x1db: PushEmpty(object, object)
0x1dc: Stack[-11] = Stack[-2]
0x1dd: Stack[-6] = Stack[-1]
0x1de: Push(-2, 4); TaskCall(5)
0x1df: Call2 0x1f6

0x1e0: Pop(-2, 4); TaskReturn
0x1e1: Pop(2)
0x1e2: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x1e3: Pop(0)
0x1e4: Pop(0); Push((bool) Stack[-1] == 0)
0x1e5: IF (Stack[-1] == 0) GOTO 0x1eb; Pop(1)

0x1e6: @ sync()
0x1e7: Pop(0)
0x1e8: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x1e9: Pop(0)
0x1ea: GOTO 0x1e4

0x1eb: PushEmpty(object)
0x1ec: Stack[-10] = Stack[-1]
0x1ed: Call2 0x697

0x1ee: Pop(1)
0x1ef: @ StopDialog(Stack[-4])
0x1f0: Pop(0)
0x1f1: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x1f2: Pop(0)
0x1f3: Stack[-2] = Stack[-10]
0x1f4: Return(); Pop(8)

0x1f5: Stack[-4] = 0
0x1f6: PushEmpty()
0x1f7: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x1f8: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x1f9: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x1fa: Push((int) 1)
0x1fb: IF (Stack[-1] == 0) GOTO 0x212; Pop(1)

0x1fc: PushEmpty(string)
0x1fd: Stack[-1] = "Neutral" // @poff=89
0x1fe: Call2 0x230

0x1ff: Pop(1)
0x200: Push((int) 520069)
0x201: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x202: Pop(1)
0x203: @@@ ClearReplies(); Obj=0 // @poff=116
0x204: Pop(0)
0x205: Push((int) 520070)
0x206: Push((int) -1)
0x207: Push((int) 21250)
0x208: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x209: Pop(3)
0x20a: Push((int) 520071)
0x20b: Push((int) -1)
0x20c: Push((int) 21251)
0x20d: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x20e: Pop(3)
0x20f: GOTO 0x212

0x210: Return(); Pop(0)

0x211: GOTO 0x1fa

0x212: PushEmpty(bool)
0x213: Call2 0x789

0x214: Pop(0)
0x215: IF (Stack[-1] == 0) GOTO 0x221; Pop(1)

0x216: @ lshWaitForAnimEnd()
0x217: Pop(0)
0x218: Push( Stack[3 + Tasks[-1].StackPointer] )
0x219: IF (Stack[-1] == 0) GOTO 0x21b; Pop(1)

0x21a: GOTO 0x220

0x21b: PushEmpty(string)
0x21c: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x21d: Call2 0x6a8

0x21e: Pop(1)
0x21f: GOTO 0x216

0x220: GOTO 0x22f

0x221: Push("all") // @poff=138
0x222: Push("idle") // @poff=146
0x223: @ PlayAnimation(Stack[-2], Stack[-1])
0x224: Pop(2)
0x225: @ WaitForAnimEnd()
0x226: Pop(0)
0x227: Push( Stack[3 + Tasks[-1].StackPointer] )
0x228: IF (Stack[-1] == 0) GOTO 0x22a; Pop(1)

0x229: GOTO 0x22f

0x22a: Push("all") // @poff=138
0x22b: Push("idle") // @poff=146
0x22c: @ PlayAnimation(Stack[-2], Stack[-1])
0x22d: Pop(2)
0x22e: GOTO 0x225

0x22f: Return(); Pop(0)

0x230: PushEmpty()
0x231: PushEmpty(bool)
0x232: Call2 0x789

0x233: Pop(0)
0x234: Pop(1); Push((bool) Stack[-1] == 0)
0x235: IF (Stack[-1] == 0) GOTO 0x237; Pop(1)

0x236: Return(); Pop(0)

0x237: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x238: IF (Stack[-1] == 0) GOTO 0x23a; Pop(1)

0x239: Return(); Pop(0)

0x23a: PushEmpty(string, bool)
0x23b: Stack[-3] = Stack[-2]
0x23c: Push("") // @poff=102
0x23d: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x23e: IF (Stack[-1] == 0) GOTO 0x241; Pop(1)

0x23f: Stack[-1] = (bool) 0
0x240: GOTO 0x242

0x241: Stack[-1] = (bool) 1
0x242: Call2 0x6af

0x243: Pop(2)
0x244: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x245: Return(); Pop(0)

0x246: PushEmpty()
0x247: Push((int) 1)
0x248: IF (Stack[-1] == 0) GOTO 0x26f; Pop(1)

0x249: PushEmpty()
0x24a: Call2 0x6b5

0x24b: Pop(0)
0x24c: Push((int) 21249)
0x24d: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x24e: IF (Stack[-1] == 0) GOTO 0x263; Pop(1)

0x24f: PushEmpty(string)
0x250: Stack[-1] = "Neutral" // @poff=89
0x251: Call2 0x230

0x252: Pop(1)
0x253: Push((int) 520069)
0x254: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x255: Pop(1)
0x256: @@@ ClearReplies(); Obj=0 // @poff=116
0x257: Pop(0)
0x258: Push((int) 520070)
0x259: Push((int) -1)
0x25a: Push((int) 21250)
0x25b: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x25c: Pop(3)
0x25d: Push((int) 520071)
0x25e: Push((int) -1)
0x25f: Push((int) 21251)
0x260: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x261: Pop(3)
0x262: Return(); Pop(0)

0x263: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x264: PushEmpty(bool)
0x265: Call2 0x789

0x266: Pop(0)
0x267: IF (Stack[-1] == 0) GOTO 0x26b; Pop(1)

0x268: @ lshStopAnimation()
0x269: Pop(0)
0x26a: GOTO 0x26d

0x26b: @ StopAnimation()
0x26c: Pop(0)
0x26d: Return(); Pop(0)

0x26e: GOTO 0x247

0x26f: Return(); Pop(0)

0x270: PushEmpty(object, bool, int, bool, object, bool, int, bool)
0x271: Stack[0 + Tasks[-1].StackPointer] = Stack[-9]
0x272: PushEmpty(bool, object, float)
0x273: Stack[-12] = Stack[-2]
0x274: Stack[-1] = (float) 70.0
0x275: Call2 0x653

0x276: Pop(2)
0x277: Pop(1); Push((bool) Stack[-1] == 0)
0x278: IF (Stack[-1] == 0) GOTO 0x27b; Pop(1)

0x279: Stack[-10] = (int) -2
0x27a: Return(); Pop(8)

0x27b: @ CreateDialog(Stack[-4])
0x27c: Pop(0)
0x27d: PushEmpty(int)
0x27e: Call2 0x783

0x27f: Pop(0)
0x280: @@ SetNPCName(Stack[-1]); Obj=5 // @poff=0
0x281: Pop(1)
0x282: PushEmpty(int)
0x283: Call2 0x781

0x284: Pop(0)
0x285: @@ SetNPCDescription(Stack[-1]); Obj=5 // @poff=11
0x286: Pop(1)
0x287: PushEmpty(string)
0x288: Call2 0x785

0x289: Pop(0)
0x28a: @@ SetPhoto(Stack[-1]); Obj=5 // @poff=29
0x28b: Pop(1)
0x28c: PushEmpty(string)
0x28d: Call2 0x787

0x28e: Pop(0)
0x28f: @@ SetPhoto2(Stack[-1]); Obj=5 // @poff=38
0x290: Pop(1)
0x291: PushEmpty(int)
0x292: Call2 0x770

0x293: Pop(0)
0x294: @@ SetPlayerName(Stack[-1]); Obj=5 // @poff=48
0x295: Pop(1)
0x296: Stack[-2] = (int) -1
0x297: @ IsOverrideActive(Stack[-3])
0x298: Pop(0)
0x299: Push(Stack[-3])
0x29a: IF (Stack[-1] == 0) GOTO 0x29d; Pop(1)

0x29b: Stack[-10] = (int) -2
0x29c: Return(); Pop(8)

0x29d: @ DoDialog(Stack[-4])
0x29e: Pop(0)
0x29f: PushEmpty(object, object)
0x2a0: Stack[-11] = Stack[-2]
0x2a1: Stack[-6] = Stack[-1]
0x2a2: Push(-2, 4); TaskCall(7)
0x2a3: Call2 0x2ba

0x2a4: Pop(-2, 4); TaskReturn
0x2a5: Pop(2)
0x2a6: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2a7: Pop(0)
0x2a8: Pop(0); Push((bool) Stack[-1] == 0)
0x2a9: IF (Stack[-1] == 0) GOTO 0x2af; Pop(1)

0x2aa: @ sync()
0x2ab: Pop(0)
0x2ac: @@ IsDialogEnd(Stack[-1]); Obj=4 // @poff=62
0x2ad: Pop(0)
0x2ae: GOTO 0x2a8

0x2af: PushEmpty(object)
0x2b0: Stack[-10] = Stack[-1]
0x2b1: Call2 0x697

0x2b2: Pop(1)
0x2b3: @ StopDialog(Stack[-4])
0x2b4: Pop(0)
0x2b5: @@ GetReturnValue(Stack[-2]); Obj=4 // @poff=74
0x2b6: Pop(0)
0x2b7: Stack[-2] = Stack[-10]
0x2b8: Return(); Pop(8)

0x2b9: Stack[-4] = 0
0x2ba: PushEmpty()
0x2bb: Stack[0 + Tasks[-1].StackPointer] = Stack[-1]
0x2bc: Stack[1 + Tasks[-1].StackPointer] = Stack[-2]
0x2bd: Stack[3 + Tasks[-1].StackPointer] = (bool)0
0x2be: Push((int) 1)
0x2bf: IF (Stack[-1] == 0) GOTO 0x303; Pop(1)

0x2c0: PushEmpty(bool, object)
0x2c1: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2c2: Call2 0x764

0x2c3: Pop(1)
0x2c4: IF (Stack[-1] == 0) GOTO 0x2de; Pop(1)

0x2c5: PushEmpty(object, object)
0x2c6: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x2c7: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x2c8: Call2 0x739

0x2c9: Pop(2)
0x2ca: PushEmpty(string)
0x2cb: Stack[-1] = "Neutral" // @poff=89
0x2cc: Call2 0x321

0x2cd: Pop(1)
0x2ce: Push((int) 520073)
0x2cf: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2d0: Pop(1)
0x2d1: @@@ ClearReplies(); Obj=0 // @poff=116
0x2d2: Pop(0)
0x2d3: Push((int) 520074)
0x2d4: Push((int) 21255)
0x2d5: Push((int) 21254)
0x2d6: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2d7: Pop(3)
0x2d8: Push((int) 520085)
0x2d9: Push((int) 21266)
0x2da: Push((int) 21265)
0x2db: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2dc: Pop(3)
0x2dd: GOTO 0x303

0x2de: PushEmpty(string)
0x2df: Stack[-1] = "Neutral" // @poff=89
0x2e0: Call2 0x321

0x2e1: Pop(1)
0x2e2: Push((int) 520088)
0x2e3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x2e4: Pop(1)
0x2e5: @@@ ClearReplies(); Obj=0 // @poff=116
0x2e6: Pop(0)
0x2e7: PushEmpty(bool, object)
0x2e8: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x2e9: Call2 0x74f

0x2ea: Pop(1)
0x2eb: IF (Stack[-1] == 0) GOTO 0x2f1; Pop(1)

0x2ec: Push((int) 520089)
0x2ed: Push((int) -1)
0x2ee: Push((int) 21270)
0x2ef: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f0: Pop(3)
0x2f1: Push((int) 520090)
0x2f2: Push((int) 21272)
0x2f3: Push((int) 21271)
0x2f4: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2f5: Pop(3)
0x2f6: Push((int) 520092)
0x2f7: Push((int) 21274)
0x2f8: Push((int) 21273)
0x2f9: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2fa: Pop(3)
0x2fb: Push((int) 520095)
0x2fc: Push((int) -1)
0x2fd: Push((int) 21277)
0x2fe: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x2ff: Pop(3)
0x300: GOTO 0x303

0x301: Return(); Pop(0)

0x302: GOTO 0x2be

0x303: PushEmpty(bool)
0x304: Call2 0x789

0x305: Pop(0)
0x306: IF (Stack[-1] == 0) GOTO 0x312; Pop(1)

0x307: @ lshWaitForAnimEnd()
0x308: Pop(0)
0x309: Push( Stack[3 + Tasks[-1].StackPointer] )
0x30a: IF (Stack[-1] == 0) GOTO 0x30c; Pop(1)

0x30b: GOTO 0x311

0x30c: PushEmpty(string)
0x30d: Stack[-1] = Stack[2 + Tasks[-1].StackPointer]
0x30e: Call2 0x6a8

0x30f: Pop(1)
0x310: GOTO 0x307

0x311: GOTO 0x320

0x312: Push("all") // @poff=138
0x313: Push("idle") // @poff=146
0x314: @ PlayAnimation(Stack[-2], Stack[-1])
0x315: Pop(2)
0x316: @ WaitForAnimEnd()
0x317: Pop(0)
0x318: Push( Stack[3 + Tasks[-1].StackPointer] )
0x319: IF (Stack[-1] == 0) GOTO 0x31b; Pop(1)

0x31a: GOTO 0x320

0x31b: Push("all") // @poff=138
0x31c: Push("idle") // @poff=146
0x31d: @ PlayAnimation(Stack[-2], Stack[-1])
0x31e: Pop(2)
0x31f: GOTO 0x316

0x320: Return(); Pop(0)

0x321: PushEmpty()
0x322: PushEmpty(bool)
0x323: Call2 0x789

0x324: Pop(0)
0x325: Pop(1); Push((bool) Stack[-1] == 0)
0x326: IF (Stack[-1] == 0) GOTO 0x328; Pop(1)

0x327: Return(); Pop(0)

0x328: Pop(0); Push((bool) Stack[-1] == Stack[2 + Tasks[-1].StackPointer])
0x329: IF (Stack[-1] == 0) GOTO 0x32b; Pop(1)

0x32a: Return(); Pop(0)

0x32b: PushEmpty(string, bool)
0x32c: Stack[-3] = Stack[-2]
0x32d: Push("") // @poff=102
0x32e: Pop(1); Push((bool) Stack[-4] == Stack[-1])
0x32f: IF (Stack[-1] == 0) GOTO 0x332; Pop(1)

0x330: Stack[-1] = (bool) 0
0x331: GOTO 0x333

0x332: Stack[-1] = (bool) 1
0x333: Call2 0x6af

0x334: Pop(2)
0x335: Stack[2 + Tasks[-1].StackPointer] = Stack[-1]
0x336: Return(); Pop(0)

0x337: PushEmpty()
0x338: Push((int) 1)
0x339: IF (Stack[-1] == 0) GOTO 0x434; Pop(1)

0x33a: PushEmpty()
0x33b: Call2 0x6b5

0x33c: Pop(0)
0x33d: Push((int) 21270)
0x33e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x33f: IF (Stack[-1] == 0) GOTO 0x345; Pop(1)

0x340: PushEmpty(object, object)
0x341: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x342: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x343: Call2 0x734

0x344: Pop(2)
0x345: Push((int) 21253)
0x346: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x347: IF (Stack[-1] == 0) GOTO 0x389; Pop(1)

0x348: PushEmpty(bool, object)
0x349: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x34a: Call2 0x764

0x34b: Pop(1)
0x34c: IF (Stack[-1] == 0) GOTO 0x366; Pop(1)

0x34d: PushEmpty(object, object)
0x34e: Stack[-2] = Stack[1 + Tasks[-1].StackPointer]
0x34f: Stack[-1] = Stack[0 + Tasks[-1].StackPointer]
0x350: Call2 0x739

0x351: Pop(2)
0x352: PushEmpty(string)
0x353: Stack[-1] = "Neutral" // @poff=89
0x354: Call2 0x321

0x355: Pop(1)
0x356: Push((int) 520073)
0x357: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x358: Pop(1)
0x359: @@@ ClearReplies(); Obj=0 // @poff=116
0x35a: Pop(0)
0x35b: Push((int) 520074)
0x35c: Push((int) 21255)
0x35d: Push((int) 21254)
0x35e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x35f: Pop(3)
0x360: Push((int) 520085)
0x361: Push((int) 21266)
0x362: Push((int) 21265)
0x363: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x364: Pop(3)
0x365: Return(); Pop(0)

0x366: PushEmpty(string)
0x367: Stack[-1] = "Neutral" // @poff=89
0x368: Call2 0x321

0x369: Pop(1)
0x36a: Push((int) 520088)
0x36b: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x36c: Pop(1)
0x36d: @@@ ClearReplies(); Obj=0 // @poff=116
0x36e: Pop(0)
0x36f: PushEmpty(bool, object)
0x370: Stack[-1] = Stack[1 + Tasks[-1].StackPointer]
0x371: Call2 0x74f

0x372: Pop(1)
0x373: IF (Stack[-1] == 0) GOTO 0x379; Pop(1)

0x374: Push((int) 520089)
0x375: Push((int) -1)
0x376: Push((int) 21270)
0x377: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x378: Pop(3)
0x379: Push((int) 520090)
0x37a: Push((int) 21272)
0x37b: Push((int) 21271)
0x37c: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x37d: Pop(3)
0x37e: Push((int) 520092)
0x37f: Push((int) 21274)
0x380: Push((int) 21273)
0x381: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x382: Pop(3)
0x383: Push((int) 520095)
0x384: Push((int) -1)
0x385: Push((int) 21277)
0x386: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x387: Pop(3)
0x388: Return(); Pop(0)

0x389: Push((int) 21274)
0x38a: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x38b: IF (Stack[-1] == 0) GOTO 0x39b; Pop(1)

0x38c: PushEmpty(string)
0x38d: Stack[-1] = "Neutral" // @poff=89
0x38e: Call2 0x321

0x38f: Pop(1)
0x390: Push((int) 520093)
0x391: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x392: Pop(1)
0x393: @@@ ClearReplies(); Obj=0 // @poff=116
0x394: Pop(0)
0x395: Push((int) 520094)
0x396: Push((int) 21272)
0x397: Push((int) 21275)
0x398: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x399: Pop(3)
0x39a: Return(); Pop(0)

0x39b: Push((int) 21272)
0x39c: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x39d: IF (Stack[-1] == 0) GOTO 0x3ad; Pop(1)

0x39e: PushEmpty(string)
0x39f: Stack[-1] = "Neutral" // @poff=89
0x3a0: Call2 0x321

0x3a1: Pop(1)
0x3a2: Push((int) 520091)
0x3a3: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3a4: Pop(1)
0x3a5: @@@ ClearReplies(); Obj=0 // @poff=116
0x3a6: Pop(0)
0x3a7: Push((int) 520096)
0x3a8: Push((int) -1)
0x3a9: Push((int) 21278)
0x3aa: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3ab: Pop(3)
0x3ac: Return(); Pop(0)

0x3ad: Push((int) 21266)
0x3ae: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3af: IF (Stack[-1] == 0) GOTO 0x3bf; Pop(1)

0x3b0: PushEmpty(string)
0x3b1: Stack[-1] = "Neutral" // @poff=89
0x3b2: Call2 0x321

0x3b3: Pop(1)
0x3b4: Push((int) 520086)
0x3b5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3b6: Pop(1)
0x3b7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3b8: Pop(0)
0x3b9: Push((int) 520087)
0x3ba: Push((int) 21255)
0x3bb: Push((int) 21267)
0x3bc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3bd: Pop(3)
0x3be: Return(); Pop(0)

0x3bf: Push((int) 21255)
0x3c0: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3c1: IF (Stack[-1] == 0) GOTO 0x3d1; Pop(1)

0x3c2: PushEmpty(string)
0x3c3: Stack[-1] = "Neutral" // @poff=89
0x3c4: Call2 0x321

0x3c5: Pop(1)
0x3c6: Push((int) 520075)
0x3c7: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3c8: Pop(1)
0x3c9: @@@ ClearReplies(); Obj=0 // @poff=116
0x3ca: Pop(0)
0x3cb: Push((int) 520076)
0x3cc: Push((int) 21257)
0x3cd: Push((int) 21256)
0x3ce: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3cf: Pop(3)
0x3d0: Return(); Pop(0)

0x3d1: Push((int) 21257)
0x3d2: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3d3: IF (Stack[-1] == 0) GOTO 0x3ed; Pop(1)

0x3d4: PushEmpty(string)
0x3d5: Stack[-1] = "Neutral" // @poff=89
0x3d6: Call2 0x321

0x3d7: Pop(1)
0x3d8: Push((int) 520077)
0x3d9: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3da: Pop(1)
0x3db: @@@ ClearReplies(); Obj=0 // @poff=116
0x3dc: Pop(0)
0x3dd: Push((int) 520078)
0x3de: Push((int) 21259)
0x3df: Push((int) 21258)
0x3e0: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e1: Pop(3)
0x3e2: Push((int) 520082)
0x3e3: Push((int) 21263)
0x3e4: Push((int) 21262)
0x3e5: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3e6: Pop(3)
0x3e7: Push((int) 520097)
0x3e8: Push((int) 21280)
0x3e9: Push((int) 21279)
0x3ea: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3eb: Pop(3)
0x3ec: Return(); Pop(0)

0x3ed: Push((int) 21280)
0x3ee: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x3ef: IF (Stack[-1] == 0) GOTO 0x3ff; Pop(1)

0x3f0: PushEmpty(string)
0x3f1: Stack[-1] = "Neutral" // @poff=89
0x3f2: Call2 0x321

0x3f3: Pop(1)
0x3f4: Push((int) 520098)
0x3f5: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x3f6: Pop(1)
0x3f7: @@@ ClearReplies(); Obj=0 // @poff=116
0x3f8: Pop(0)
0x3f9: Push((int) 520099)
0x3fa: Push((int) -1)
0x3fb: Push((int) 21281)
0x3fc: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x3fd: Pop(3)
0x3fe: Return(); Pop(0)

0x3ff: Push((int) 21263)
0x400: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x401: IF (Stack[-1] == 0) GOTO 0x411; Pop(1)

0x402: PushEmpty(string)
0x403: Stack[-1] = "Neutral" // @poff=89
0x404: Call2 0x321

0x405: Pop(1)
0x406: Push((int) 520083)
0x407: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x408: Pop(1)
0x409: @@@ ClearReplies(); Obj=0 // @poff=116
0x40a: Pop(0)
0x40b: Push((int) 520084)
0x40c: Push((int) -1)
0x40d: Push((int) 21264)
0x40e: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x40f: Pop(3)
0x410: Return(); Pop(0)

0x411: Push((int) 21259)
0x412: Pop(1); Push((bool) Stack[-3] == Stack[-1])
0x413: IF (Stack[-1] == 0) GOTO 0x428; Pop(1)

0x414: PushEmpty(string)
0x415: Stack[-1] = "Neutral" // @poff=89
0x416: Call2 0x321

0x417: Pop(1)
0x418: Push((int) 520079)
0x419: @@@ SetMessage(Stack[-1]); Obj=0 // @poff=105
0x41a: Pop(1)
0x41b: @@@ ClearReplies(); Obj=0 // @poff=116
0x41c: Pop(0)
0x41d: Push((int) 520080)
0x41e: Push((int) -1)
0x41f: Push((int) 21260)
0x420: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x421: Pop(3)
0x422: Push((int) 520081)
0x423: Push((int) -1)
0x424: Push((int) 21261)
0x425: @@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=129
0x426: Pop(3)
0x427: Return(); Pop(0)

0x428: Stack[3 + Tasks[-1].StackPointer] = (bool)1
0x429: PushEmpty(bool)
0x42a: Call2 0x789

0x42b: Pop(0)
0x42c: IF (Stack[-1] == 0) GOTO 0x430; Pop(1)

0x42d: @ lshStopAnimation()
0x42e: Pop(0)
0x42f: GOTO 0x432

0x430: @ StopAnimation()
0x431: Pop(0)
0x432: Return(); Pop(0)

0x433: GOTO 0x338

0x434: Return(); Pop(0)

0x435: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x436: @ Hold()
0x437: Pop(0)
0x438: GOTO 0x436

0x439: Return(); Pop(0)

0x43a: PushEmpty(object, object, int, int, int, int, object, int, int, object, object, int, float, int, object, object, int, int, int, int, object, int, int, object, object, int, float, int)
0x43b: Push((int) 0)
0x43c: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x43d: IF (Stack[-1] == 0) GOTO 0x446; Pop(1)

0x43e: PushEmpty(int, object)
0x43f: Stack[-31] = Stack[-1]
0x440: Push(-2, 1); TaskCall(2)
0x441: Call2 0xde

0x442: Pop(-2, 1); TaskReturn
0x443: Pop(2)
0x444: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x445: GOTO 0x4b1

0x446: Push((int) 1)
0x447: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x448: IF (Stack[-1] == 0) GOTO 0x451; Pop(1)

0x449: PushEmpty(int, object)
0x44a: Stack[-31] = Stack[-1]
0x44b: Push(-2, 1); TaskCall(0)
0x44c: Call2 0x0

0x44d: Pop(-2, 1); TaskReturn
0x44e: Pop(2)
0x44f: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x450: GOTO 0x4b1

0x451: PushEmpty(int, object)
0x452: Stack[-31] = Stack[-1]
0x453: Push(-2, 1); TaskCall(6)
0x454: Call2 0x270

0x455: Pop(-2, 1); TaskReturn
0x456: Pop(1)
0x457: Push((int) 1)
0x458: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x459: IF (Stack[-1] == 0) GOTO 0x4b1; Pop(1)

0x45a: PushEmpty(object)
0x45b: Call2 0x6f1

0x45c: Stack[-1] = Stack[-15]
0x45d: Pop(1)
0x45e: @ CreateIntVector(Stack[-13])
0x45f: Pop(0)
0x460: Push((int) 4)
0x461: @@ GetItemCount(Stack[-13], Stack[-1]); Obj=30 // @poff=156
0x462: Pop(1)
0x463: Push("rat") // @poff=169
0x464: @ GetInvItemByName(Stack[-12], Stack[-1])
0x465: Pop(1)
0x466: Push("rat_big") // @poff=177
0x467: @ GetInvItemByName(Stack[-11], Stack[-1])
0x468: Pop(1)
0x469: Stack[-9] = (int) 0
0x46a: Pop(0); Push((bool) Stack[-9] < Stack[-12])
0x46b: IF (Stack[-1] == 0) GOTO 0x481; Pop(1)

0x46c: Push((int) 4)
0x46d: @@ GetItem(Stack[-9], Stack[-10], Stack[-1]); Obj=30 // @poff=193
0x46e: Pop(1)
0x46f: @@ GetItemID(Stack[-7]); Obj=8 // @poff=201
0x470: Pop(0)
0x471: PushEmpty(bool)
0x472: Stack[-1] = (bool) 1
0x473: Pop(0); Push((bool) Stack[-8] == Stack[-12])
0x474: IF (Stack[-1] == 1) GOTO 0x478; Pop(1)

0x475: Pop(0); Push((bool) Stack[-8] == Stack[-11])
0x476: IF (Stack[-1] == 1) GOTO 0x478; Pop(1)

0x477: Stack[-1] = (bool) 0
0x478: IF (Stack[-1] == 0) GOTO 0x47d; Pop(1)

0x479: @@ add(Stack[-8]); Obj=14 // @poff=211
0x47a: Pop(0)
0x47b: @@ add(Stack[-9]); Obj=13 // @poff=211
0x47c: Pop(0)
0x47d: Stack[-8] = 0
0x47e: Push((int) 1)
0x47f: Stack[-10] = Stack[-10] + Stack[-1]; Pop(1);
0x480: GOTO 0x46a

0x481: @@ size(Stack[-12]); Obj=14 // @poff=215
0x482: Pop(0)
0x483: Push(Stack[-12])
0x484: IF (Stack[-1] == 0) GOTO 0x4af; Pop(1)

0x485: Push((int) 1)
0x486: Pop(1); Push((bool) Stack[-13] == Stack[-1])
0x487: IF (Stack[-1] == 0) GOTO 0x48a; Pop(1)

0x488: Stack[-6] = (int) 0
0x489: GOTO 0x498

0x48a: @ CreateIntVector(Stack[-5])
0x48b: Pop(0)
0x48c: @ ChooseItem(Stack[-14], Stack[-5])
0x48d: Pop(0)
0x48e: @@ size(Stack[-12]); Obj=5 // @poff=215
0x48f: Pop(0)
0x490: Push(Stack[-12])
0x491: IF (Stack[-1] == 0) GOTO 0x496; Pop(1)

0x492: Push((int) 0)
0x493: @@ get(Stack[-7], Stack[-1]); Obj=6 // @poff=220
0x494: Pop(1)
0x495: GOTO 0x497

0x496: Return(); Pop(28)

0x497: Stack[-5] = 0
0x498: @@ get(Stack[-4], Stack[-6]); Obj=14 // @poff=220
0x499: Pop(0)
0x49a: @@ get(Stack[-3], Stack[-6]); Obj=13 // @poff=220
0x49b: Pop(0)
0x49c: Push((int) 1)
0x49d: Push((int) 4)
0x49e: @@ RemoveItem(Stack[-5], Stack[-2], Stack[-1]); Obj=31 // @poff=224
0x49f: Pop(2)
0x4a0: Push("quality") // @poff=235
0x4a1: @@ GetProperty(Stack[-3], Stack[-1]); Obj=5 // @poff=251
0x4a2: Pop(1)
0x4a3: @@ GetItemID(Stack[-1]); Obj=4 // @poff=201
0x4a4: Pop(0)
0x4a5: PushEmpty(string, float)
0x4a6: Pop(0); Push((bool) Stack[-3] == Stack[-12])
0x4a7: IF (Stack[-1] == 0) GOTO 0x4aa; Pop(1)

0x4a8: Stack[-2] = "pers_rat_big" // @poff=263
0x4a9: GOTO 0x4ab

0x4aa: Stack[-2] = "pers_rat" // @poff=289
0x4ab: Stack[-4] = Stack[-1]
0x4ac: Call2 0x4b2

0x4ad: Pop(2)
0x4ae: Stack[-4] = 0
0x4af: Stack[-13] = 0
0x4b0: Stack[-14] = 0
0x4b1: Return(); Pop(28)

0x4b2: PushEmpty()
0x4b3: PushEmpty(int, string, float)
0x4b4: Stack[-5] = Stack[-2]
0x4b5: Stack[-4] = Stack[-1]
0x4b6: Push(-3, 3); TaskCall(9)
0x4b7: Call2 0x4dc

0x4b8: Pop(-3, 3); TaskReturn
0x4b9: Stack[0 + Tasks[-1].StackPointer] = Stack[-3]
0x4ba: Pop(3)
0x4bb: PushEmpty(bool)
0x4bc: Call2 0x64e

0x4bd: Pop(0)
0x4be: Pop(1); Push((bool) Stack[-1] == 0)
0x4bf: IF (Stack[-1] == 0) GOTO 0x4c2; Pop(1)

0x4c0: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x4c1: GOTO 0x4cf

0x4c2: Push((int) 1)
0x4c3: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4c4: IF (Stack[-1] == 0) GOTO 0x4c9; Pop(1)

0x4c5: Push("You've won a rat race") // @poff=307
0x4c6: @ Trace(Stack[-1])
0x4c7: Pop(1)
0x4c8: GOTO 0x4cf

0x4c9: Push((int) 0)
0x4ca: Pop(1); Push((bool) Stack[0 + Tasks[-1].StackPointer] == Stack[-1])
0x4cb: IF (Stack[-1] == 0) GOTO 0x4cf; Pop(1)

0x4cc: Push("Looser!") // @poff=351
0x4cd: @ Trace(Stack[-1])
0x4ce: Pop(1)
0x4cf: Return(); Pop(0)

0x4d0: PushEmpty()
0x4d1: Push("race_begin") // @poff=367
0x4d2: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x4d3: IF (Stack[-1] == 0) GOTO 0x4d9; Pop(1)

0x4d4: PushEmpty(string, float)
0x4d5: Stack[-2] = "pers_rat_big" // @poff=263
0x4d6: Stack[-1] = (float) 1.0
0x4d7: Call2 0x4b2

0x4d8: Pop(2)
0x4d9: Return(); Pop(0)

0x4da: Stack[0 + Tasks[-1].StackPointer] = (int)-1
0x4db: Return(); Pop(0)

0x4dc: PushEmpty(int, int)
0x4dd: Stack[1 + Tasks[-1].StackPointer] = (int)0
0x4de: PushEmpty(string, float)
0x4df: Stack[-6] = Stack[-2]
0x4e0: Stack[-5] = Stack[-1]
0x4e1: Call2 0x4f5

0x4e2: Pop(2)
0x4e3: @ Hold()
0x4e4: Pop(0)
0x4e5: Pop(0); Push((bool) Stack[0 + Tasks[-1].StackPointer] == 0)
0x4e6: IF (Stack[-1] == 1) GOTO 0x4e3; Pop(1)

0x4e7: Stack[-1] = (int) 0
0x4e8: Push((int) 6)
0x4e9: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x4ea: IF (Stack[-1] == 0) GOTO 0x4f3; Pop(1)

0x4eb: PushEmpty(int, bool)
0x4ec: Stack[-3] = Stack[-2]
0x4ed: Stack[-1] = (bool) 0
0x4ee: Call2 0x631

0x4ef: Pop(2)
0x4f0: Push((int) 1)
0x4f1: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x4f2: GOTO 0x4e8

0x4f3: Stack[-5] = Stack[2 + Tasks[-1].StackPointer]
0x4f4: Return(); Pop(2)

0x4f5: PushEmpty(object, object, object, int, int, int, int, object, object, object, object, int, object, object, object, int, int, int, int, object, object, object, object, int)
0x4f6: @ CreateIntVector(Stack[-12])
0x4f7: Pop(0)
0x4f8: @ CreateIntVector(Stack[-11])
0x4f9: Pop(0)
0x4fa: @ CreateIntVector(Stack[-10])
0x4fb: Pop(0)
0x4fc: PushEmpty(int, object)
0x4fd: Stack[-14] = Stack[-1]
0x4fe: Call2 0x5df

0x4ff: Stack[-2] = Stack[-11]
0x500: Pop(2)
0x501: Push((int) 72)
0x502: Pop(1); Push((bool) Stack[-10] > Stack[-1])
0x503: IF (Stack[-1] == 0) GOTO 0x505; Pop(1)

0x504: GOTO 0x526

0x505: PushEmpty(int, object)
0x506: Stack[-13] = Stack[-1]
0x507: Call2 0x5df

0x508: Stack[-2] = Stack[-10]
0x509: Pop(2)
0x50a: Push((int) 72)
0x50b: Pop(1); Push((bool) Stack[-9] > Stack[-1])
0x50c: IF (Stack[-1] == 0) GOTO 0x50e; Pop(1)

0x50d: GOTO 0x526

0x50e: PushEmpty(int, object)
0x50f: Stack[-12] = Stack[-1]
0x510: Call2 0x5df

0x511: Stack[-2] = Stack[-9]
0x512: Pop(2)
0x513: Push((int) 72)
0x514: Pop(1); Push((bool) Stack[-8] > Stack[-1])
0x515: IF (Stack[-1] == 0) GOTO 0x517; Pop(1)

0x516: GOTO 0x526

0x517: PushEmpty(bool)
0x518: Stack[-1] = (bool) 0
0x519: PushEmpty(bool)
0x51a: Stack[-1] = (bool) 0
0x51b: Pop(0); Push((bool) Stack[-11] != Stack[-10])
0x51c: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51d: Pop(0); Push((bool) Stack[-11] != Stack[-9])
0x51e: IF (Stack[-1] == 0) GOTO 0x520; Pop(1)

0x51f: Stack[-1] = (bool) 1
0x520: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x521: Pop(0); Push((bool) Stack[-9] != Stack[-8])
0x522: IF (Stack[-1] == 0) GOTO 0x524; Pop(1)

0x523: Stack[-1] = (bool) 1
0x524: IF (Stack[-1] == 0) GOTO 0x526; Pop(1)

0x525: GOTO 0x527

0x526: GOTO 0x4fc

0x527: PushEmpty(bool, float)
0x528: Push((float)0.10000000149011612)
0x529: Push((float)0.4000000059604645)
0x52a: Pop(1); Push(Stack[-29] * Stack[-1]);
0x52b: Stack[-3] = Stack[-2] + Stack[-1]; Pop(2);
0x52c: Call2 0x6ec

0x52d: Pop(1)
0x52e: IF (Stack[-1] == 0) GOTO 0x53a; Pop(1)

0x52f: PushEmpty(int, int, int, int)
0x530: Stack[-13] = Stack[-3]
0x531: Stack[-12] = Stack[-2]
0x532: Stack[-11] = Stack[-1]
0x533: Call2 0x6bc

0x534: Stack[-4] = Stack[-10]
0x535: Pop(4)
0x536: Push("winner") // @poff=389
0x537: @ Trace(Stack[-1])
0x538: Pop(1)
0x539: GOTO 0x544

0x53a: PushEmpty(int, int, int, int)
0x53b: Stack[-13] = Stack[-3]
0x53c: Stack[-12] = Stack[-2]
0x53d: Stack[-11] = Stack[-1]
0x53e: Call2 0x6cb

0x53f: Stack[-4] = Stack[-10]
0x540: Pop(4)
0x541: Push("looser") // @poff=403
0x542: @ Trace(Stack[-1])
0x543: Pop(1)
0x544: Push((int) 1)
0x545: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x546: IF (Stack[-1] == 0) GOTO 0x54c; Pop(1)

0x547: Stack[-12] = Stack[-5]
0x548: Stack[-11] = Stack[-12]
0x549: Stack[-5] = Stack[-11]
0x54a: Stack[-5] = 0
0x54b: GOTO 0x553

0x54c: Push((int) 2)
0x54d: Pop(1); Push((bool) Stack[-7] == Stack[-1])
0x54e: IF (Stack[-1] == 0) GOTO 0x553; Pop(1)

0x54f: Stack[-12] = Stack[-4]
0x550: Stack[-10] = Stack[-12]
0x551: Stack[-4] = Stack[-10]
0x552: Stack[-4] = 0
0x553: @ GetScene(Stack[-3])
0x554: Pop(0)
0x555: PushEmpty(object, object, string, string, string)
0x556: Stack[-8] = Stack[-4]
0x557: Stack[-3] = "pt_rat1" // @poff=417
0x558: Stack[-31] = Stack[-2]
0x559: Stack[-1] = "rat_race.xml" // @poff=433
0x55a: Call2 0x6fc

0x55b: Stack[-5] = Stack[-7]
0x55c: Pop(5)
0x55d: Push("Index") // @poff=459
0x55e: Push((int) 1)
0x55f: @@ SetScriptProperty(Stack[-2], Stack[-1]); Obj=4 // @poff=471
0x560: Pop(2)
0x561: Push("Race") // @poff=489
0x562: @@ SetScriptProperty(Stack[-1], Stack[-13]); Obj=3 // @poff=471
0x563: Pop(1)
0x564: PushEmpty(object, object, string, string, string)
0x565: Stack[-8] = Stack[-4]
0x566: Stack[-3] = "pt_rat2" // @poff=499
0x567: Stack[-2] = "pers_rat" // @poff=289
0x568: Stack[-1] = "rat_race.xml" // @poff=433
0x569: Call2 0x6fc

0x56a: Stack[-5] = Stack[-7]
0x56b: Pop(5)
0x56c: Push("Index") // @poff=459
0x56d: Push((int) 2)
0x56e: @@ SetScriptProperty(Stack[-2], Stack[-1]); Obj=4 // @poff=471
0x56f: Pop(2)
0x570: Push("Race") // @poff=489
0x571: @@ SetScriptProperty(Stack[-1], Stack[-12]); Obj=3 // @poff=471
0x572: Pop(1)
0x573: PushEmpty(object, object, string, string, string)
0x574: Stack[-8] = Stack[-4]
0x575: Stack[-3] = "pt_rat3" // @poff=515
0x576: Stack[-2] = "pers_rat" // @poff=289
0x577: Stack[-1] = "rat_race.xml" // @poff=433
0x578: Call2 0x6fc

0x579: Stack[-5] = Stack[-7]
0x57a: Pop(5)
0x57b: Push("Index") // @poff=459
0x57c: Push((int) 3)
0x57d: @@ SetScriptProperty(Stack[-2], Stack[-1]); Obj=4 // @poff=471
0x57e: Pop(2)
0x57f: Push("Race") // @poff=489
0x580: @@ SetScriptProperty(Stack[-1], Stack[-11]); Obj=3 // @poff=471
0x581: Pop(1)
0x582: Stack[-1] = (int) 0
0x583: Push((int) 6)
0x584: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x585: IF (Stack[-1] == 0) GOTO 0x58e; Pop(1)

0x586: PushEmpty(int, bool)
0x587: Stack[-3] = Stack[-2]
0x588: Stack[-1] = (bool) 1
0x589: Call2 0x631

0x58a: Pop(2)
0x58b: Push((int) 1)
0x58c: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x58d: GOTO 0x583

0x58e: Return(); Pop(24)

0x58f: Stack[-2] = 0
0x590: Stack[-3] = 0
0x591: Stack[-10] = 0
0x592: Stack[-11] = 0
0x593: Stack[-12] = 0
0x594: PushEmpty()
0x595: PushEmpty(int, object)
0x596: Stack[-3] = Stack[-1]
0x597: Push(-2, 1); TaskCall(4)
0x598: Call2 0x1ac

0x599: Pop(-2, 1); TaskReturn
0x59a: Pop(2)
0x59b: Return(); Pop(0)

0x59c: PushEmpty()
0x59d: Push("race_over1") // @poff=531
0x59e: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x59f: IF (Stack[-1] == 0) GOTO 0x5b3; Pop(1)

0x5a0: PushEmpty(int, bool)
0x5a1: Stack[-2] = (int) 3
0x5a2: Stack[-1] = (bool) 0
0x5a3: Call2 0x631

0x5a4: Pop(2)
0x5a5: Push((int) 1)
0x5a6: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5a7: Push((int) 1)
0x5a8: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5a9: IF (Stack[-1] == 0) GOTO 0x5ac; Pop(1)

0x5aa: Stack[2 + Tasks[-1].StackPointer] = (int)1
0x5ab: GOTO 0x5b2

0x5ac: Push((int) 3)
0x5ad: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5ae: IF (Stack[-1] == 0) GOTO 0x5b2; Pop(1)

0x5af: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5b0: @ StopGroup0()
0x5b1: Pop(0)
0x5b2: GOTO 0x5de

0x5b3: Push("race_over2") // @poff=553
0x5b4: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5b5: IF (Stack[-1] == 0) GOTO 0x5c9; Pop(1)

0x5b6: PushEmpty(int, bool)
0x5b7: Stack[-2] = (int) 4
0x5b8: Stack[-1] = (bool) 0
0x5b9: Call2 0x631

0x5ba: Pop(2)
0x5bb: Push((int) 1)
0x5bc: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5bd: Push((int) 1)
0x5be: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5bf: IF (Stack[-1] == 0) GOTO 0x5c2; Pop(1)

0x5c0: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x5c1: GOTO 0x5c8

0x5c2: Push((int) 3)
0x5c3: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5c4: IF (Stack[-1] == 0) GOTO 0x5c8; Pop(1)

0x5c5: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5c6: @ StopGroup0()
0x5c7: Pop(0)
0x5c8: GOTO 0x5de

0x5c9: Push("race_over3") // @poff=575
0x5ca: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x5cb: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5cc: PushEmpty(int, bool)
0x5cd: Stack[-2] = (int) 5
0x5ce: Stack[-1] = (bool) 0
0x5cf: Call2 0x631

0x5d0: Pop(2)
0x5d1: Push((int) 1)
0x5d2: Stack[1 + Tasks[-1].StackPointer] = Stack[1 + Tasks[-1].StackPointer] + Stack[-1]; Pop(1);
0x5d3: Push((int) 1)
0x5d4: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5d5: IF (Stack[-1] == 0) GOTO 0x5d8; Pop(1)

0x5d6: Stack[2 + Tasks[-1].StackPointer] = (int)0
0x5d7: GOTO 0x5de

0x5d8: Push((int) 3)
0x5d9: Pop(1); Push((bool) Stack[1 + Tasks[-1].StackPointer] == Stack[-1])
0x5da: IF (Stack[-1] == 0) GOTO 0x5de; Pop(1)

0x5db: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x5dc: @ StopGroup0()
0x5dd: Pop(0)
0x5de: Return(); Pop(0)

0x5df: PushEmpty(int, int, bool, bool, int, int, int, bool, bool, int)
0x5e0: Stack[-5] = (int) 0
0x5e1: Stack[-4] = (int) 0
0x5e2: Stack[-3] = (bool) 1
0x5e3: Stack[-2] = (bool) 0
0x5e4: PushEmpty(bool)
0x5e5: Stack[-1] = (bool) 1
0x5e6: Push(Stack[-4])
0x5e7: IF (Stack[-1] == 1) GOTO 0x5eb; Pop(1)

0x5e8: Pop(0); Push((bool) Stack[-6] == 0)
0x5e9: IF (Stack[-1] == 1) GOTO 0x5eb; Pop(1)

0x5ea: Stack[-1] = (bool) 0
0x5eb: IF (Stack[-1] == 0) GOTO 0x5f2; Pop(1)

0x5ec: Push((int) 3)
0x5ed: @ irand(Stack[-2], Stack[-1])
0x5ee: Pop(1)
0x5ef: Push((int) 1)
0x5f0: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5f1: GOTO 0x615

0x5f2: PushEmpty(bool, float)
0x5f3: Stack[-1] = (float) 0.6666666865348816
0x5f4: Call2 0x6ec

0x5f5: Pop(1)
0x5f6: IF (Stack[-1] == 0) GOTO 0x5fd; Pop(1)

0x5f7: Push((int) 3)
0x5f8: @ irand(Stack[-2], Stack[-1])
0x5f9: Pop(1)
0x5fa: Push((int) 1)
0x5fb: Stack[-2] = Stack[-2] + Stack[-1]; Pop(1);
0x5fc: GOTO 0x615

0x5fd: PushEmpty(bool)
0x5fe: Stack[-1] = (bool) 0
0x5ff: Pop(0); Push((bool) Stack[-3] == 0)
0x600: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x601: PushEmpty(bool, float)
0x602: Stack[-1] = (float) 0.5
0x603: Call2 0x6ec

0x604: Pop(1)
0x605: IF (Stack[-1] == 0) GOTO 0x607; Pop(1)

0x606: Stack[-1] = (bool) 1
0x607: IF (Stack[-1] == 0) GOTO 0x60a; Pop(1)

0x608: Stack[-1] = (int) 0
0x609: GOTO 0x615

0x60a: Push((int) 2)
0x60b: @ irand(Stack[-2], Stack[-1])
0x60c: Pop(1)
0x60d: Push((int) 1)
0x60e: Pop(1); Push(Stack[-2] + Stack[-1]);
0x60f: Stack[-2] = -Stack[-1]; Pop(1);
0x610: Pop(0); Push(Stack[-5] + Stack[-1]);
0x611: Push((int) 0)
0x612: Pop(2); Push((bool) Stack[-2] < Stack[-1])
0x613: IF (Stack[-1] == 0) GOTO 0x615; Pop(1)

0x614: GOTO 0x62e

0x615: Stack[-5] = Stack[-5] + Stack[-1]; Pop(0);
0x616: Push((int) 12)
0x617: Pop(1); Push((bool) Stack[-6] >= Stack[-1])
0x618: IF (Stack[-1] == 0) GOTO 0x61f; Pop(1)

0x619: Push((int) 12)
0x61a: Pop(1); Push(Stack[-6] - Stack[-1]);
0x61b: Pop(1); Push(Stack[-2] - Stack[-1]);
0x61c: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x61d: GOTO 0x62f

0x61e: GOTO 0x62e

0x61f: Push(Stack[-1])
0x620: IF (Stack[-1] == 0) GOTO 0x626; Pop(1)

0x621: PushEmpty(int, int)
0x622: Stack[-3] = Stack[-1]
0x623: Call2 0x6e4

0x624: Pop(1)
0x625: GOTO 0x627

0x626: Push((int) 1)
0x627: Stack[-5] = Stack[-5] + Stack[-1]; Pop(1);
0x628: @@ add(Stack[-5]); Obj=11 // @poff=211
0x629: Pop(0)
0x62a: Push((int) 0)
0x62b: Stack[-3] = Stack[-2] == Stack[-1]; Pop(1);
0x62c: Push((int) 0)
0x62d: Stack[-4] = Stack[-2] < Stack[-1]; Pop(1);
0x62e: GOTO 0x5e4

0x62f: Stack[-4] = Stack[-12]
0x630: Return(); Pop(10)

0x631: PushEmpty(object, object)
0x632: Push("rats_track_door") // @poff=597
0x633: Push((int) 1)
0x634: Pop(1); Push(Stack[-6] + Stack[-1]);
0x635: Pop(2); Push(Stack[-2] + Stack[-1]);
0x636: @ FindActor(Stack[-2], Stack[-1])
0x637: Pop(1)
0x638: Push(Stack[-3])
0x639: IF (Stack[-1] == 0) GOTO 0x63e; Pop(1)

0x63a: Push((bool) 0)
0x63b: @@ Open(Stack[-1]); Obj=2 // @poff=629
0x63c: Pop(1)
0x63d: GOTO 0x640

0x63e: @@ Close(); Obj=1 // @poff=634
0x63f: Pop(0)
0x640: Return(); Pop(2)

0x641: Stack[-1] = 0
0x642: Stack[2 + Tasks[-1].StackPointer] = (int)-1
0x643: Stack[0 + Tasks[-1].StackPointer] = (bool)1
0x644: @ StopGroup0()
0x645: Pop(0)
0x646: Return(); Pop(0)

0x647: PushEmpty(int, int)
0x648: @@ GetProperty(Stack[-4], Stack[-1]); Obj=5 // @poff=251
0x649: Pop(0)
0x64a: Pop(0); Push(Stack[-1] + Stack[-3]);
0x64b: @@ SetProperty(Stack[-5], Stack[-1]); Obj=6 // @poff=640
0x64c: Pop(1)
0x64d: Return(); Pop(2)

0x64e: PushEmpty(bool, bool)
0x64f: @ IsLoaded(Stack[-1])
0x650: Pop(0)
0x651: Stack[-1] = Stack[-3]
0x652: Return(); Pop(2)

0x653: PushEmpty(float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool, float, cvector, cvector, cvector, cvector, cvector, cvector, bool, bool)
0x654: @@ GetPosition(Stack[-8]); Obj=20 // @poff=652
0x655: Pop(0)
0x656: @@ GetEyesHeight(Stack[-9]); Obj=20 // @poff=664
0x657: Pop(0)
0x658: Push(CvectorIndex(Stack[-8], 1))
0x659: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x65a: CvectorIndex(Stack[-9], 1) = Stack[-1];
0x65b: @ GetPosition(Stack[-7])
0x65c: Pop(0)
0x65d: @ GetEyesHeight(Stack[-9])
0x65e: Pop(0)
0x65f: Push(CvectorIndex(Stack[-7], 1))
0x660: Stack[-1] = Stack[-1] + Stack[-10]; Pop(0);
0x661: CvectorIndex(Stack[-8], 1) = Stack[-1];
0x662: Stack[-6] = Stack[-8] - Stack[-7]; Pop(0);
0x663: Push(CvectorIndex(Stack[-6], 1))
0x664: Stack[-1] = (int) 0
0x665: CvectorIndex(Stack[-7], 1) = Stack[-1];
0x666: Pop(0); Push(Stack[-6] | Stack[-6]);
0x667: Pop(1); Push(Sqrt(Stack[-1]))
0x668: Stack[-7] = Stack[-7] / Stack[-1]; Pop(1);
0x669: Stack[-5] = -Stack[-6]; Pop(0);
0x66a: Pop(0); Push(Stack[-6] * Stack[-19]);
0x66b: PushEmpty(cvector, cvector)
0x66c: Push([0.0, 1.0, 0.0])
0x66d: Stack[-2] = Stack[-9] ^ Stack[-1]; Pop(1);
0x66e: Call2 0x6da

0x66f: Pop(1)
0x670: Push((int) 25)
0x671: Pop(2); Push(Stack[-2] * Stack[-1]);
0x672: Pop(2); Push(Stack[-2] + Stack[-1]);
0x673: Push([0.0, 10.0, 0.0])
0x674: Stack[-6] = Stack[-2] - Stack[-1]; Pop(2);
0x675: Stack[-3] = Stack[-7] + Stack[-4]; Pop(0);
0x676: @ IsOverrideActive(Stack[-2])
0x677: Pop(0)
0x678: Push(Stack[-2])
0x679: IF (Stack[-1] == 0) GOTO 0x67c; Pop(1)

0x67a: Stack[-21] = (bool) 0
0x67b: Return(); Pop(18)

0x67c: @ StopWorld()
0x67d: Pop(0)
0x67e: @ CameraTransit(Stack[-3], Stack[-5])
0x67f: Pop(0)
0x680: Push(CvectorIndex(Stack[-4], 0))
0x681: Push(CvectorIndex(Stack[-5], 2))
0x682: @ Rotate(Stack[-2], Stack[-1])
0x683: Pop(2)
0x684: PushEmpty(bool)
0x685: Call2 0x789

0x686: Pop(0)
0x687: IF (Stack[-1] == 0) GOTO 0x689; Pop(1)

0x688: GOTO 0x691

0x689: Push("head") // @poff=678
0x68a: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x68b: Pop(1)
0x68c: Push(Stack[-1])
0x68d: IF (Stack[-1] == 0) GOTO 0x691; Pop(1)

0x68e: Push("head") // @poff=678
0x68f: @ LookAsyncCamera(Stack[-1])
0x690: Pop(1)
0x691: @ CameraWaitForPlayFinish()
0x692: Pop(0)
0x693: @ ResumeWorld()
0x694: Pop(0)
0x695: Stack[-21] = (bool) 1
0x696: Return(); Pop(18)

0x697: PushEmpty(bool, bool)
0x698: @ CameraSwitchToNormal()
0x699: Pop(0)
0x69a: PushEmpty(bool)
0x69b: Call2 0x789

0x69c: Pop(0)
0x69d: IF (Stack[-1] == 0) GOTO 0x69f; Pop(1)

0x69e: GOTO 0x6a7

0x69f: Push("head") // @poff=678
0x6a0: @ HasAnimationTrack(Stack[-2], Stack[-1])
0x6a1: Pop(1)
0x6a2: Push(Stack[-1])
0x6a3: IF (Stack[-1] == 0) GOTO 0x6a7; Pop(1)

0x6a4: Push("head") // @poff=678
0x6a5: @ UnlookAsync(Stack[-1])
0x6a6: Pop(1)
0x6a7: Return(); Pop(2)

0x6a8: PushEmpty(float, float, float, float)
0x6a9: @ lshGetAnimTimes(Stack[-5], Stack[-2], Stack[-1])
0x6aa: Pop(0)
0x6ab: Push((bool) 0)
0x6ac: @ lshPlayAnimation(Stack[-3], Stack[-2], Stack[-1])
0x6ad: Pop(1)
0x6ae: Return(); Pop(4)

0x6af: PushEmpty(float, float, float, float)
0x6b0: @ lshGetAnimTimes(Stack[-6], Stack[-2], Stack[-1])
0x6b1: Pop(0)
0x6b2: @ lshPlayAnimation(Stack[-2], Stack[-1], Stack[-5])
0x6b3: Pop(0)
0x6b4: Return(); Pop(4)

0x6b5: PushEmpty(bool)
0x6b6: Call2 0x789

0x6b7: Pop(0)
0x6b8: IF (Stack[-1] == 0) GOTO 0x6bb; Pop(1)

0x6b9: @ lshStopSpeech()
0x6ba: Pop(0)
0x6bb: Return(); Pop(0)

0x6bc: PushEmpty()
0x6bd: Pop(0); Push((bool) Stack[-3] < Stack[-2])
0x6be: IF (Stack[-1] == 0) GOTO 0x6c5; Pop(1)

0x6bf: Pop(0); Push((bool) Stack[-3] < Stack[-1])
0x6c0: IF (Stack[-1] == 0) GOTO 0x6c3; Pop(1)

0x6c1: Stack[-4] = (int) 0
0x6c2: GOTO 0x6c4

0x6c3: Stack[-4] = (int) 2
0x6c4: Return(); Pop(0)

0x6c5: Pop(0); Push((bool) Stack[-2] < Stack[-1])
0x6c6: IF (Stack[-1] == 0) GOTO 0x6c9; Pop(1)

0x6c7: Stack[-4] = (int) 1
0x6c8: GOTO 0x6ca

0x6c9: Stack[-4] = (int) 2
0x6ca: Return(); Pop(0)

0x6cb: PushEmpty()
0x6cc: Pop(0); Push((bool) Stack[-3] > Stack[-2])
0x6cd: IF (Stack[-1] == 0) GOTO 0x6d4; Pop(1)

0x6ce: Pop(0); Push((bool) Stack[-3] > Stack[-1])
0x6cf: IF (Stack[-1] == 0) GOTO 0x6d2; Pop(1)

0x6d0: Stack[-4] = (int) 0
0x6d1: GOTO 0x6d3

0x6d2: Stack[-4] = (int) 2
0x6d3: Return(); Pop(0)

0x6d4: Pop(0); Push((bool) Stack[-2] > Stack[-1])
0x6d5: IF (Stack[-1] == 0) GOTO 0x6d8; Pop(1)

0x6d6: Stack[-4] = (int) 1
0x6d7: GOTO 0x6d9

0x6d8: Stack[-4] = (int) 2
0x6d9: Return(); Pop(0)

0x6da: PushEmpty(float, float)
0x6db: Pop(0); Push(Stack[-3] | Stack[-3]);
0x6dc: Stack[-2] = Sqrt(Stack[-1]); Pop(1);
0x6dd: Push((float)9.999999974752427e-07)
0x6de: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6df: IF (Stack[-1] == 0) GOTO 0x6e2; Pop(1)

0x6e0: Stack[-4] = [0.0, 0.0, 0.0]
0x6e1: Return(); Pop(2)

0x6e2: Stack[-4] = Stack[-3] / Stack[-1]; Pop(0);
0x6e3: Return(); Pop(2)

0x6e4: PushEmpty()
0x6e5: Push((int) 0)
0x6e6: Pop(1); Push((bool) Stack[-2] < Stack[-1])
0x6e7: IF (Stack[-1] == 0) GOTO 0x6ea; Pop(1)

0x6e8: Stack[-2] = -Stack[-1]; Pop(0);
0x6e9: GOTO 0x6eb

0x6ea: Stack[-1] = Stack[-2]
0x6eb: Return(); Pop(0)

0x6ec: PushEmpty(float, float)
0x6ed: @ rand(Stack[-1])
0x6ee: Pop(0)
0x6ef: Stack[-4] = Stack[-1] < Stack[-3]; Pop(0);
0x6f0: Return(); Pop(2)

0x6f1: PushEmpty(object, object)
0x6f2: @ CreateObjectVector(Stack[-1])
0x6f3: Pop(0)
0x6f4: Stack[-1] = Stack[-3]
0x6f5: Return(); Pop(2)

0x6f6: Stack[-1] = 0
0x6f7: PushEmpty(int, int)
0x6f8: @ GetVariable(Stack[-3], Stack[-1])
0x6f9: Pop(0)
0x6fa: Stack[-1] = Stack[-4]
0x6fb: Return(); Pop(2)

0x6fc: PushEmpty(bool, cvector, cvector, object, bool, cvector, cvector, object)
0x6fd: @@ GetLocator(Stack[-11], Stack[-4], Stack[-3], Stack[-2]); Obj=12 // @poff=688
0x6fe: Pop(0)
0x6ff: Pop(0); Push((bool) Stack[-4] == 0)
0x700: IF (Stack[-1] == 0) GOTO 0x709; Pop(1)

0x701: Push("Locator ") // @poff=699
0x702: Pop(1); Push(Stack[-1] + Stack[-12]);
0x703: Push(" doesn't exist") // @poff=717
0x704: Pop(2); Push(Stack[-2] + Stack[-1]);
0x705: @ Trace(Stack[-1])
0x706: Pop(1)
0x707: Stack[-1] = 0
0x708: GOTO 0x70b

0x709: @ AddActor(Stack[-1], Stack[-10], Stack[-12], Stack[-3], Stack[-2], Stack[-9])
0x70a: Pop(0)
0x70b: Stack[-1] = Stack[-13]
0x70c: Return(); Pop(8)

0x70d: Stack[-1] = 0
0x70e: PushEmpty(object, object)
0x70f: @ CreateIntVector(Stack[-1])
0x710: Pop(0)
0x711: @@ add(Stack[-4]); Obj=1 // @poff=211
0x712: Pop(0)
0x713: @@ add(Stack[-3]); Obj=1 // @poff=211
0x714: Pop(0)
0x715: Push((int) 3)
0x716: @ SendWorldWndMessage(Stack[-1], Stack[-2])
0x717: Pop(1)
0x718: Return(); Pop(2)

0x719: Stack[-1] = 0
0x71a: PushEmpty(int, int)
0x71b: PushEmpty(object, string, int)
0x71c: Stack[-7] = Stack[-3]
0x71d: Stack[-2] = "money" // @poff=747
0x71e: Stack[-6] = Stack[-1]
0x71f: Call2 0x647

0x720: Pop(3)
0x721: Push((int) 0)
0x722: Pop(1); Push((bool) Stack[-4] > Stack[-1])
0x723: IF (Stack[-1] == 0) GOTO 0x72c; Pop(1)

0x724: Push("Money") // @poff=759
0x725: @ GetInvItemByName(Stack[-2], Stack[-1])
0x726: Pop(1)
0x727: PushEmpty(int, int)
0x728: Stack[-3] = Stack[-2]
0x729: Stack[-5] = Stack[-1]
0x72a: Call2 0x70e

0x72b: Pop(2)
0x72c: Return(); Pop(2)

0x72d: PushEmpty(int, bool, int, bool)
0x72e: @ GetInvItemByName(Stack[-2], Stack[-5])
0x72f: Pop(0)
0x730: @@ HasItem(Stack[-2], Stack[-1]); Obj=6 // @poff=771
0x731: Pop(0)
0x732: Stack[-1] = Stack[-7]
0x733: Return(); Pop(4)

0x734: PushEmpty()
0x735: Push((int) 1)
0x736: @@ SetReturnValue(Stack[-1]); Obj=2 // @poff=779
0x737: Pop(1)
0x738: Return(); Pop(0)

0x739: PushEmpty()
0x73a: Push("ooRatsManager1") // @poff=794
0x73b: Push((int) 1)
0x73c: @ SetVariable(Stack[-2], Stack[-1])
0x73d: Pop(2)
0x73e: Return(); Pop(0)

0x73f: PushEmpty()
0x740: Push("money500 is given") // @poff=824
0x741: @ Trace(Stack[-1])
0x742: Pop(1)
0x743: PushEmpty(object, int)
0x744: Stack[-4] = Stack[-2]
0x745: Stack[-1] = (int) 500
0x746: Call2 0x71a

0x747: Pop(2)
0x748: Return(); Pop(0)

0x749: PushEmpty()
0x74a: Push("playsound") // @poff=860
0x74b: Push("givemoney") // @poff=880
0x74c: @ TriggerWorld(Stack[-2], Stack[-1])
0x74d: Pop(2)
0x74e: Return(); Pop(0)

0x74f: PushEmpty()
0x750: PushEmpty(bool)
0x751: Stack[-1] = (bool) 1
0x752: PushEmpty(bool, object, string)
0x753: Stack[-5] = Stack[-2]
0x754: Stack[-1] = "rat" // @poff=169
0x755: Call2 0x72d

0x756: Pop(2)
0x757: IF (Stack[-1] == 1) GOTO 0x75f; Pop(1)

0x758: PushEmpty(bool, object, string)
0x759: Stack[-5] = Stack[-2]
0x75a: Stack[-1] = "rat_big" // @poff=177
0x75b: Call2 0x72d

0x75c: Pop(2)
0x75d: IF (Stack[-1] == 1) GOTO 0x75f; Pop(1)

0x75e: Stack[-1] = (bool) 0
0x75f: IF (Stack[-1] == 0) GOTO 0x762; Pop(1)

0x760: Stack[-2] = (bool) 1
0x761: Return(); Pop(0)

0x762: Stack[-2] = (bool) 0
0x763: Return(); Pop(0)

0x764: PushEmpty()
0x765: PushEmpty(int, string)
0x766: Stack[-1] = "ooRatsManager1" // @poff=794
0x767: Call2 0x6f7

0x768: Pop(1)
0x769: Push((int) 0)
0x76a: Pop(2); Push((bool) Stack[-2] == Stack[-1])
0x76b: IF (Stack[-1] == 0) GOTO 0x76e; Pop(1)

0x76c: Stack[-2] = (bool) 1
0x76d: Return(); Pop(0)

0x76e: Stack[-2] = (bool) 0
0x76f: Return(); Pop(0)

0x770: PushEmpty(int, int)
0x771: Push("branch") // @poff=900
0x772: @ GetVariable(Stack[-1], Stack[-2])
0x773: Pop(1)
0x774: Push((int) 0)
0x775: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x776: IF (Stack[-1] == 0) GOTO 0x77a; Pop(1)

0x777: Stack[-3] = (int) 1
0x778: Return(); Pop(2)

0x779: GOTO 0x77f

0x77a: Push((int) 1)
0x77b: Pop(1); Push((bool) Stack[-2] == Stack[-1])
0x77c: IF (Stack[-1] == 0) GOTO 0x77f; Pop(1)

0x77d: Stack[-3] = (int) 2
0x77e: Return(); Pop(2)

0x77f: Stack[-3] = (int) 3
0x780: Return(); Pop(2)

0x781: Stack[-1] = (int) 518097
0x782: Return(); Pop(0)

0x783: Stack[-1] = (int) 518096
0x784: Return(); Pop(0)

0x785: Stack[-1] = "ui/NPC_Citizen2.png" // @poff=914
0x786: Return(); Pop(0)

0x787: Stack[-1] = "ui/NPC_Citizen2_b.png" // @poff=954
0x788: Return(); Pop(0)

0x789: Stack[-1] = (bool) 0
0x78a: Return(); Pop(0)

