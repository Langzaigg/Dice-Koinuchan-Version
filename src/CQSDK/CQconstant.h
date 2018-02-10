#pragma once

// 调试       灰色
#define Log_Debug 0
// 信息       黑色
#define Log_Info 10
// 信息(成功) 紫色
#define Log_InfoSuccess 11
// 信息(接收) 蓝色
#define Log_InfoRecv 12
// 信息(发送) 绿色
#define Log_InfoSend 13
// 警告       橙色
#define Log_Warning 20
// 错误       红色
#define Log_Error 30
// 致命错误   深红
#define Log_Fatal 40

// 拦截此条消息，不再传递给其他应用
//注意：应用优先级设置为最高(10000)时，不得使用本返回值
#define 消息_拦截 1
// 将此消息继续传递给其他应用
#define 消息_忽略 0

#define 悬浮窗_绿 1 
#define 悬浮窗_橙 2 
#define 悬浮窗_红 3 
#define 悬浮窗_深红 4 
#define 悬浮窗_黑 5 
#define 悬浮窗_灰 6 

#define 请求_通过 1 
#define 请求_拒绝 2 

#define 请求_群添加 1 
#define 请求_群邀请 2 

#define 表情_惊讶 0 
#define 表情_撇嘴 1 
#define 表情_色 2 
#define 表情_发呆 3 
#define 表情_得意 4 
#define 表情_流泪 5 
#define 表情_害羞 6 
#define 表情_闭嘴 7 
#define 表情_睡 8 
#define 表情_大哭 9 
#define 表情_尴尬 10 
#define 表情_发怒 11 
#define 表情_调皮 12 
#define 表情_呲牙 13 
#define 表情_微笑 14 
#define 表情_难过 15 
#define 表情_酷 16 
#define 表情_抓狂 18 
#define 表情_吐 19 
#define 表情_偷笑 20 
#define 表情_可爱 21 
#define 表情_白眼 22 
#define 表情_傲慢 23 
#define 表情_饥饿 24 
#define 表情_困 25 
#define 表情_惊恐 26 
#define 表情_流汗 27 
#define 表情_憨笑 28 
#define 表情_大兵 29 
#define 表情_奋斗 30 
#define 表情_咒骂 31 
#define 表情_疑问 32 
#define 表情_晕 34 
#define 表情_折磨 35 
#define 表情_衰 36 
#define 表情_骷髅 37 
#define 表情_敲打 38 
#define 表情_再见 39 
#define 表情_发抖 41 
#define 表情_爱情 42 
#define 表情_跳跳 43 
#define 表情_猪头 46 
#define 表情_拥抱 49 
#define 表情_蛋糕 53 
#define 表情_闪电 54 
#define 表情_炸弹 55 
#define 表情_刀 56 
#define 表情_足球 57 
#define 表情_便便 59 
#define 表情_咖啡 60 
#define 表情_饭 61 
#define 表情_玫瑰 63 
#define 表情_凋谢 64 
#define 表情_爱心 66 
#define 表情_心碎 67 
#define 表情_礼物 69 
#define 表情_太阳 74 
#define 表情_月亮 75 
#define 表情_强 76 
#define 表情_弱 77 
#define 表情_握手 78 
#define 表情_胜利 79 
#define 表情_飞吻 85 
#define 表情_怄火 86 
#define 表情_西瓜 89 
#define 表情_冷汗 96 
#define 表情_擦汗 97 
#define 表情_抠鼻 98 
#define 表情_鼓掌 99 
#define 表情_糗大了 100 
#define 表情_坏笑 101 
#define 表情_左哼哼 102 
#define 表情_右哼哼 103 
#define 表情_哈欠 104 
#define 表情_鄙视 105 
#define 表情_委屈 106 
#define 表情_快哭了 107 
#define 表情_阴险 108 
#define 表情_亲亲 109 
#define 表情_吓 110 
#define 表情_可怜 111 
#define 表情_菜刀 112 
#define 表情_啤酒 113 
#define 表情_篮球 114 
#define 表情_乒乓 115 
#define 表情_示爱 116 
#define 表情_瓢虫 117 
#define 表情_抱拳 118 
#define 表情_勾引 119 
#define 表情_拳头 120 
#define 表情_差劲 121 
#define 表情_爱你 122 
#define 表情_不 123 
#define 表情_好 124 
#define 表情_转圈 125 
#define 表情_磕头 126 
#define 表情_回头 127 
#define 表情_跳绳 128 
#define 表情_挥手 129 
#define 表情_激动 130 
#define 表情_街舞 131 
#define 表情_献吻 132 
#define 表情_左太极 133 
#define 表情_右太极 134 
#define 表情_双喜 136 
#define 表情_鞭炮 137 
#define 表情_灯笼 138 
#define 表情_发财 139 
#define 表情_K歌 140 
#define 表情_购物 141 
#define 表情_邮件 142 
#define 表情_帅 143 
#define 表情_喝彩 144 
#define 表情_祈祷 145 
#define 表情_爆筋 146 
#define 表情_棒棒糖 147 
#define 表情_喝奶 148 
#define 表情_下面 149 
#define 表情_香蕉 150 
#define 表情_飞机 151 
#define 表情_开车 152 
#define 表情_高铁左车头 153 
#define 表情_车厢 154 
#define 表情_高铁右车头 155 
#define 表情_多云 156 
#define 表情_下雨 157 
#define 表情_钞票 158 
#define 表情_熊猫 159 
#define 表情_灯泡 160 
#define 表情_风车 161 
#define 表情_闹钟 162 
#define 表情_打伞 163 
#define 表情_彩球 164 
#define 表情_钻戒 165 
#define 表情_沙发 166 
#define 表情_纸巾 167 
#define 表情_药 168 
#define 表情_手枪 169 
#define 表情_青蛙 170 
