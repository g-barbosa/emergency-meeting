const Telegraf = require('telegraf')
require('dotenv/config')

const bot = new Telegraf(process.env.BOT_TOKEN)

const sendMeetingLink = () => {
    bot.telegram.sendMessage(process.env.CHAT_ID, process.env.MEETING_URL)
}

module.exports = sendMeetingLink