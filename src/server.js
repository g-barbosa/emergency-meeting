const express = require('express')

const sendMeetingLink = require('./bot')

const route = express.Router()

route.get('/sendMeetingLink', async (request, response) => {
    sendMeetingLink()
    response.status(200).send()
})

const app = express()
app.use(route)

app.listen(process.env.PORT || 3333)