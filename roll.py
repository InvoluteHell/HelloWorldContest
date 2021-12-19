import httpx
from lxml import html
import random
r = httpx.get("https://github.com/InvoluteHell/HelloWorldContest/issues/4")
r = html.fromstring(r.text)
a = r.xpath('//*[text()="目前排名"]/../table/tbody/tr/td/a/text()')
print(random.choice(a[1:]))
